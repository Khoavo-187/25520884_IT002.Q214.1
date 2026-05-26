#include <bits/stdc++.h>
#include "danhsach.h"
using namespace std;

danhsach::danhsach(){}

danhsach::~danhsach(){
    for(khachhang* KH : danhsachkhachhang){
        delete KH;
    }
}

void danhsach::nhapdanhsach(){
    cin>>x>>y>>z;
    khachhang* kh = nullptr;
    for(int i  = 0;i < x;i++){
        kh = new loaiA();
        kh->nhap();
        danhsachkhachhang.push_back(kh);
    }
    for(int j = 0;j < y;j++){
        kh = new loaiB();
        kh->nhap();
        danhsachkhachhang.push_back(kh);;
    }
    for(int m = 0;m < z;m++){
        kh = new loaiC();
        kh->nhap();
        danhsachkhachhang.push_back(kh);
    }
}

void danhsach::xuatdanhsach(){
    cout<<x<<" "<<y<<" "<<z;
    cout<<endl;
    for(int i = 0;i < danhsachkhachhang.size();i++){
        danhsachkhachhang[i]->xuat();
    }
}

double danhsach::total_tien(){
    double sum = 0;
    for(int i = 0;i < danhsachkhachhang.size();i++){
        sum += danhsachkhachhang[i]->Tinhtien();
    }
    return sum;
}