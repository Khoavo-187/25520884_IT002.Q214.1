#include <bits/stdc++.h>
#include "LoaiA.h"
using namespace std;

// constructor mac dinh
loaiA::loaiA(){}

// constructor co tham so
// input: ho ten, luong hang va don gia
loaiA::loaiA(string hoten,int luonghang,int dongia) : khachhang(hoten,luonghang,dongia){}

// tinh tien khach hang loai A
// output: tong tien can thanh toan theo don vi dong
// giai thuat: khach hang loai A khong duoc giam gia, tinh gia goc cong them 10% VAT
double loaiA::Tinhtien(){
    return luonghang * dongia * (1 + VAT);
}

// nhap thong tin khach hang loai A
// giai thuat: goi khachhang::nhap() cho phan chung, loai A khong co truong bo sung
void loaiA::nhap(){
    khachhang::nhap();
}

// in thong tin khach hang loai A ra output
// giai thuat: goi khachhang::xuat() de in ten, sau do in tong tien
void loaiA::xuat(){
    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}