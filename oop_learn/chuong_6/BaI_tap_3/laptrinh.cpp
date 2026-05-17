#include <bits/stdc++.h>
#include "laptrinh.h"
using namespace std;

laptrinh::laptrinh(){
    overtime = 0.0;
}

laptrinh::laptrinh(string manhanvien,string hoten,int age,string tel,string email,double luongcoban,double overtime) : Nhanvien(manhanvien,hoten,age,tel,email,luongcoban){
    this->overtime = overtime;
}

double long laptrinh::Tinhluong(){
    return luongcoban + overtime * 200000;
}

void laptrinh::nhap(){
    cout<<"Nhap thong tin cho lap trinh vien: "<<endl;
    Nhanvien::nhap();
    cout<<"Nhap so gio lam them cua lap trinh vien: ";
    do{
        cin>>overtime;
        if(cin.fail() || overtime <= 0){
            cout<<"Nhap sai input khong hop le cho so gio lam them, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
}
void laptrinh::xuat(){
    cout<<"Thong tin cua lap trinh vien: "<<endl;
    Nhanvien::xuat();
    cout<<"So gio lam them la "<<overtime<<" gio"<<endl;
    cout<<"Tong luong cua lap trinh vien hang thang la: "<<Tinhluong()<<" dong"<<endl;
}