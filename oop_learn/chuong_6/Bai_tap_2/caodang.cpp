#include <bits/stdc++.h>
#include "caodang.h"

caodang::caodang(){
    totnghiep = 0.0;
}
caodang::caodang(string masinhvien,string hoten,string diachi,int tinchi,double diemtb,double totnghiep) : sinhvien(masinhvien,hoten,diachi,tinchi,diemtb){
    this->totnghiep = totnghiep;
}

bool caodang::extracheck(){
    return tinchi >= 120 && diemtb >= 5 && totnghiep >= 5;
}

void caodang::nhap(){
    sinhvien::nhap();
    cout<<"Nhap diem thi tot nghiep cho sinh vien: ";
    do{
        cin>>totnghiep;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(totnghiep < 0 || totnghiep > 10){
            cout<<"DIem tot nghiep khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}
void caodang::xuat(){
    sinhvien::xuat();
    cout<<"Diem thi tot nghiep la: "<<totnghiep<<endl;
}
