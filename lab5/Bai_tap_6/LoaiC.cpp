#include <bits/stdc++.h>
#include "LoaiC.h"
using namespace std;

// constructor mac dinh
loaiC::loaiC(){}

// constructor co tham so
// input: ho ten, luong hang va don gia
loaiC::loaiC(string hoten,int luonghang,int dongia) : khachhang(hoten,luonghang,dongia){}

// tinh tien khach hang loai C
// output: tong tien can thanh toan theo don vi dong
// giai thuat: khach hang loai C duoc giam co dinh 50% gia goc, sau do cong them 10% VAT
double loaiC::Tinhtien(){
    return (luonghang * dongia) * 0.5 * (1 + VAT);
}

// nhap thong tin khach hang loai C
// giai thuat: goi khachhang::nhap() cho phan chung, loai C khong co truong bo sung
void loaiC::nhap(){
    khachhang::nhap();
}

// in thong tin khach hang loai C ra output
// giai thuat: goi khachhang::xuat() de in ten, sau do in tong tien
void loaiC::xuat(){
    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}