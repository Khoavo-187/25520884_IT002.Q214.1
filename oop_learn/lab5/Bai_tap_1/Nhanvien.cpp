#include <bits/stdc++.h>
#include "Nhanvien.h"
using namespace std;

bool kiemtraten(string s){
    if(s.empty()) return false;
    for(char c : s){
        if(c == ' '){
            continue;
        }
        if(isdigit(c)){
            return false;
        }
    }
    return true;
}

// getter
Date nhanvien::getDate(){
    return D1;
}
nhanvien::nhanvien(){
    hoten = "";
    D1 = Date();
}

nhanvien::nhanvien(string hoten,Date D1){
    this->hoten = hoten;
    this->D1 = D1;
}

nhanvien::~nhanvien(){}
void nhanvien::nhap(){
    cout<<"NHap thong tin nhan vien: "<<endl;
    cout<<"NHap ho va ten: "; 
    cin.ignore();
    do{
        getline(cin,hoten);
        if(!kiemtraten(hoten)){
            cout<<"Ho ten khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap ngay thang nam sinh: "; D1.nhap();
}

void nhanvien::xuat(){
    cout<<"Thong tin nhan vien: "<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Ngay sinh: ";
    D1.xuat();
    cout<<endl;
}