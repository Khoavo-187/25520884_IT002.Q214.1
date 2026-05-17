#include <bits/stdc++.h>
#include "Sanxuat.h"
#include "Vanphong.h"
#include "Congty.h"
#include "Nhanvien.h"
using namespace std;

int main(){
    congty C1;

    cout<<"Nhap thong tin cho cong ty C1: ";
    C1.nhapdanhsach();

    cout<<"Xuat thong tin cho cong ty C1: ";
    C1.xuatdanhsach();

    cout<<"Tong tien luong ma cong ty tra cho tat ca nhan vien la: "<<C1.total_luong()<<" dong"<<endl;

    cout<<"Nhan vien san xuat co luong thap nhat la: ";
    C1.min_luong()->xuat();
    cout<<endl;
    cout<<"Nhan vien van phong co do tuoi gia nhat la: ";
    C1.max_tuoi()->xuat();
    return 0; 
}