#include <bits/stdc++.h>
#include "laptrinh.h"
using namespace std;


laptrinh::laptrinh(){
    giolamthem = 0.0;
}

laptrinh::laptrinh(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban,int giolamthem) : nhanvien(manhanvien,hoten,tuoi,sdt,email,luongcoban){
    this->giolamthem = giolamthem;
}
laptrinh* laptrinh::clone(){
    return new laptrinh(*this);
}
double laptrinh::Tinhluong(){
    return luongcoban + giolamthem * 200000;
}

void laptrinh::nhap(){
    cout<<"Nhap thong tin lap trinh vien: "<<endl;
    nhanvien::nhap();
    cout<<"Nhap so gio lam them: "; 
    cin>>giolamthem;
}

void laptrinh::xuat(){
    cout<<"Thong tin lap trinh vien: "<<endl;
    nhanvien::xuat();
    cout<<"So gio lam them: "<<giolamthem<<" gio"<<endl; 
    cout<<"Tong luong la: "<<(long long)Tinhluong()<<endl;
}