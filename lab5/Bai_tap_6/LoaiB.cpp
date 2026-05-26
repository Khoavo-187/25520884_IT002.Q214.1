#include <bits/stdc++.h>
#include "LoaiB.h"
using namespace std;

loaiB::loaiB(){
    sonam = 0;
}

loaiB::loaiB(string hoten,int luonghang,int dongia,int sonam) : khachhang(hoten,luonghang,dongia){
    this->sonam = sonam;
}

double loaiB::khuyenmai(){
    return max(sonam * 0.05,0.5);
}

double loaiB::Tinhtien(){
    return (luonghang * dongia) * (1 - khuyenmai()) * (1 + VAT);
}

void loaiB::nhap(){

    khachhang::nhap();
    cin>>sonam;
}

void loaiB::xuat(){

    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}
