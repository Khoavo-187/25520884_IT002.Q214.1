#include <bits/stdc++.h>
#include "kiemchung.h"
using namespace std;

kiemchung::kiemchung(){
    loiphathien = 0;
}

kiemchung::kiemchung(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban,int loiphathien) : nhanvien(manhanvien,hoten,tuoi,sdt,email,luongcoban){
    this->loiphathien = loiphathien;
}

kiemchung* kiemchung::clone(){
    return new kiemchung(*this);
}
double kiemchung::Tinhluong(){
    return luongcoban + loiphathien * 50000;
}

void kiemchung::nhap(){
    cout<<"Nhap thong tin kiem chung vien: "<<endl;
    nhanvien::nhap();
    cout<<"Nhap so loi phat hien duoc: ";
    cin>>loiphathien;
}

void kiemchung::xuat(){
    cout<<"Thong tin kiem chung vien: "<<endl;
    nhanvien::xuat();
    cout<<"So loi phat hien duoc: "<<loiphathien<<endl;
    cout<<"Tong luong la: "<<(long long)Tinhluong()<<endl;
}

