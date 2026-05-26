#include <bits/stdc++.h>
#include "LoaiC.h"
using namespace std;


loaiC::loaiC(){}

loaiC::loaiC(string hoten,int luonghang,int dongia) : khachhang(hoten,luonghang,dongia){}

double loaiC::Tinhtien(){
    return (luonghang * dongia) * 0.5 * (1 + VAT);
}

void loaiC::nhap(){
    khachhang::nhap();
}

void loaiC::xuat(){
    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}

