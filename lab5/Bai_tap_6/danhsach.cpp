#include <bits/stdc++.h>
#include "danhsach.h"
using namespace std;

// constructor mac dinh
// vector tu dong quan ly bo nho, khong can xu ly thu cong
danhsach::danhsach(){}

// destructor
// giai phong toan bo cac doi tuong khach hang duoc cap phat dong trong danh sach
danhsach::~danhsach(){
    for(khachhang* KH : danhsachkhachhang){
        delete KH;
    }
}

// nhap danh sach khach hang tu file input
// giai thuat: doc lan luot x, y, z la so luong khach hang loai A, B, C,
//             tao doi tuong tuong ung theo thu tu loai A truoc, roi B, roi C,
//             goi nhap() cho tung doi tuong va day vao danh sach chung
void danhsach::nhapdanhsach(){
    cin>>x>>y>>z;
    khachhang* kh = nullptr;
    for(int i = 0;i < x;i++){
        kh = new loaiA();
        kh->nhap();
        danhsachkhachhang.push_back(kh);
    }
    for(int j = 0;j < y;j++){
        kh = new loaiB();
        kh->nhap();
        danhsachkhachhang.push_back(kh);
    }
    for(int m = 0;m < z;m++){
        kh = new loaiC();
        kh->nhap();
        danhsachkhachhang.push_back(kh);
    }
}

// in toan bo danh sach khach hang ra file output
// giai thuat: in x y z tren dong dau, sau do duyet danh sach va goi xuat() theo kieu da hinh
void danhsach::xuatdanhsach(){
    cout<<x<<" "<<y<<" "<<z;
    cout<<endl;
    for(int i = 0;i < danhsachkhachhang.size();i++){
        danhsachkhachhang[i]->xuat();
    }
}

// tinh tong tien thu duoc tu tat ca khach hang
// output: tong tien kieu double theo don vi dong
// giai thuat: duyet danh sach chung, goi Tinhtien() theo kieu da hinh,
//             moi loai tu tinh theo cong thuc rieng (A: gia goc+VAT, B: co khuyen mai+VAT, C: giam 50%+VAT)
double danhsach::total_tien(){
    double sum = 0;
    for(int i = 0;i < danhsachkhachhang.size();i++){
        sum += danhsachkhachhang[i]->Tinhtien();
    }
    return sum;
}