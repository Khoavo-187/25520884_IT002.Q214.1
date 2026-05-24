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
    vector<vanphong*> vp = C1.GetVP();
    vector<sanxuat*> sx = C1.GetSX();
    cout<<"Nhan vien san xuat co luong thap nhat la: ";
    sanxuat* nhanviensx = C1.min_luong(sx);
    if(!nhanviensx){
        cout<<"khong co nhan vien san xuat"<<endl;
    }
    else{
        nhanviensx->xuat();
    }
    cout<<endl;
    cout<<"Nhan vien van phong co do tuoi gia nhat la: ";
    vanphong* nhanvienvp = C1.max_tuoi(vp);
    if(!nhanvienvp){
        cout<<"Khong co nhan vien van phong"<<endl;
    }
    else{
        nhanvienvp->xuat();
    }
    return 0; 
}