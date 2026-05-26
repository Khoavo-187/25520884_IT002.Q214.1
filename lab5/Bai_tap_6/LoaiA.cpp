#include <bits/stdc++.h>
#include "LoaiA.h"
using namespace std;

loaiA::loaiA(){}

loaiA::loaiA(string hoten,int luonghang,int dongia) : khachhang(hoten,luonghang,dongia){}

double loaiA::Tinhtien(){
    return luonghang * dongia * (1 + VAT);
}

void loaiA::nhap(){
    khachhang::nhap();
}

void loaiA::xuat(){
    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}

