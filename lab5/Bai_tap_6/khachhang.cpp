#include <bits/stdc++.h>
#include "khachhang.h"
using namespace std;

// constructor mac dinh
// khoi tao khach hang voi ho ten rong, luong hang va don gia bang 0
khachhang::khachhang(){
    hoten = "";
    luonghang = 0;
    dongia = 0;
}

// constructor co tham so
// input: ho ten, luong hang mua va don gia tren mot don vi
khachhang::khachhang(string hoten,int luonghang,int dongia){
    this->hoten = hoten;
    this->luonghang = luonghang;
    this->dongia =  dongia;
}

// nhap thong tin khach hang tu input
// giai thuat: dung cin.ignore() truoc getline de bo ky tu newline con sot tu lan doc truoc,
//             sau do doc luong hang va don gia
void khachhang::nhap(){
    cin.ignore();
    getline(cin,hoten);
    cin>>luonghang;
    cin>>dongia;
}

// in ho ten khach hang ra output
void khachhang::xuat(){
    cout<<hoten<<endl;
}