#include <bits/stdc++.h>
#include "LoaiB.h"
using namespace std;

// constructor mac dinh
// khoi tao khach hang loai B voi so nam gan ket bang 0
loaiB::loaiB(){
    sonam = 0;
}

// constructor co tham so
// input: ho ten, luong hang, don gia va so nam gan ket voi cong ty
loaiB::loaiB(string hoten,int luonghang,int dongia,int sonam) : khachhang(hoten,luonghang,dongia){
    this->sonam = sonam;
}

// tinh ty le khuyen mai cho khach hang loai B
// output: ty le giam gia (0.0 den 1.0)
// giai thuat: moi nam gan ket duoc giam 5%, nhung ti le toi da la 50%,
//             dung max() de dam bao luon ap dung muc giam cao nhat giua sonam*0.05 va 0.5
double loaiB::khuyenmai(){
    return max(sonam * 0.05, 0.5);
}

// tinh tien khach hang loai B
// output: tong tien can thanh toan theo don vi dong
// giai thuat: gia goc giam theo ty le khuyenmai(), sau do cong them 10% VAT
double loaiB::Tinhtien(){
    return (luonghang * dongia) * (1 - khuyenmai()) * (1 + VAT);
}

// nhap thong tin khach hang loai B tu input
// giai thuat: goi khachhang::nhap() cho phan chung, sau do doc them so nam gan ket
void loaiB::nhap(){
    khachhang::nhap();
    cin>>sonam;
}

// in thong tin khach hang loai B ra output
// giai thuat: goi khachhang::xuat() de in ten, sau do in tong tien
void loaiB::xuat(){
    khachhang::xuat();
    cout<<(long long)Tinhtien()<<endl;
}