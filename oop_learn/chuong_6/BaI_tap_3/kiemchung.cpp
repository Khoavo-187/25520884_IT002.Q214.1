#include <bits/stdc++.h>
#include "kiemchung.h"
using namespace std;

Kiemchung::Kiemchung(){
    error = 0;
}

Kiemchung::Kiemchung(string manhanvien,string hoten,int age,string tel,string email,double luongcoban,int error) : Nhanvien(manhanvien,hoten,age,tel,email,luongcoban){
    this->error= error;
}

double long Kiemchung::Tinhluong(){
    return luongcoban + error * 50000;
}

void Kiemchung::nhap(){
    cout<<"Nhap thong tin cho kiem chung vien: "<<endl;
    Nhanvien::nhap();
    cout<<"Nhap so loi phat hien duoc: "; cin>>error;
}
void Kiemchung::xuat(){
    cout<<"Thong tin kiem chung vien: "<<endl;
    Nhanvien::xuat();
    cout<<"So loi phat hien duoc la: "<<error<<endl;
    cout<<"Luong hang thanh la: "<<Tinhluong()<<" dong"<<endl;
}