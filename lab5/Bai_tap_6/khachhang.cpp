#include <bits/stdc++.h>
#include "khachhang.h"
using namespace std;


khachhang::khachhang(){
    hoten = "";
    luonghang = 0;
    dongia = 0;
}
khachhang::khachhang(string hoten,int luonghang,int dongia){
    this->hoten = hoten;
    this->luonghang = luonghang;
    this->dongia =  dongia;
}

void khachhang::nhap(){
    cin.ignore();
    getline(cin,hoten);
    cin>>luonghang;
    cin>>dongia;
}

void khachhang::xuat(){
    cout<<hoten<<endl;
}