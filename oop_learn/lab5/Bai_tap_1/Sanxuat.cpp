#include <bits/stdc++.h>
#include "Sanxuat.h"
using namespace std;

sanxuat::sanxuat(){
    luongcoban = 0;
    sanpham = 0;
}

sanxuat::sanxuat(string hoten,Date D1,int luongcoban,int sanpham) : nhanvien(hoten,D1){
    this->luongcoban  = luongcoban;
    this->sanpham = sanpham;
}


long long sanxuat::Tinhluong(){
    return luongcoban + sanpham * 5000;
}

void sanxuat::nhap(){
    cout<<"Nhap thong tin cua nhan vien san xuat: "<<endl;
    nhanvien::nhap();
    cout<<"Nhap luong co ban: ";
    do{
        cin>>luongcoban;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(luongcoban < 0){
            cout<<"Luong khong duoc be hon 0"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap so san pham: ";
    do{
        cin>>sanpham;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(sanpham < 0){
            cout<<"san pham khong duoc be hon 0"<<endl;
            continue;
        }
        break;
    }while(true);
}


void sanxuat::xuat(){
    cout<<"Thong tin cua nhan vien san xuat: "<<endl;
    nhanvien::xuat();
    cout<<"Luong co ban: "<<luongcoban<<" dong"<<endl;
    cout<<"So san pham: "<<sanpham<<endl;
    cout<<"Tien luong: "<<Tinhluong()<<" dong"<<endl;
}