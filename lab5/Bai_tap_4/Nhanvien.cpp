#include <bits/stdc++.h>
#include "Nhanvien.h"
using namespace std;

bool checkname(string s){
    if(s.empty()) return false;
    for(char c : s){
        if(c == ' '){
            continue;
        }
        if(!isalpha(c)){
            return false;
        }
    }
    return true;
}
bool checknum(string s){
    if(s.empty()) return false;
    for(char c : s){
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
nhanvien::nhanvien(){
    manhanvien = "";
    hoten= "";
    tuoi = 0;
    sdt = "";
    email = "";
    luongcoban = 0;
}   

nhanvien::nhanvien(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban){
    this->manhanvien = manhanvien;
    this->hoten = hoten;
    this->tuoi = tuoi;
    this->sdt = sdt;
    this->email = email;
    this->luongcoban = luongcoban;
}

void nhanvien::nhap(){
    cout<<"Nhap ma nhan vien: "; cin>>manhanvien;
    cout<<"Nhap ho va ten nhan vien: "; 
    cin.ignore();
    do{
        getline(cin,hoten);
        if(!checkname(hoten)){
            cout<<"Sai ho va ten, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);

    cout<<"Nhap tuoi cho nhan vien: ";
    do{
        cin>>tuoi;
        if(cin.fail()){
            cout<<"Nhap sai kieu du lieu cho tuoi, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(tuoi <= 0 || tuoi > 100){
            cout<<"Tuoi khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap so dien thoai cho nhan vien: "; 
    do{
        cin>>sdt;
        if(!checknum(sdt)){
            cout<<"Nhap sai so dien thoai, nhap lai"<<endl;
            continue;
        }
        if(sdt.length() != 10){
            cout<<"So dien thoai yeu cau phai co 10 so"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap email nhan vien: "; cin>>email;
    cout<<"Nhap luong co ban cho nhan vien: "; cin>>luongcoban;
}


void nhanvien::xuat(){
    cout<<"Ma nhan vien: "<<manhanvien<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"So dien thoai: "<<sdt<<endl;
    cout<<"Tuoi: "<<tuoi<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Luong co ban: "<<(long long)luongcoban<<endl;
}
