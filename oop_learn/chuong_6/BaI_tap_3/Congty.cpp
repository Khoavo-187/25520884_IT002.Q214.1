#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

congty::congty(int n){
    this->n = n;
    this->danhsachnhanvien = nullptr;
}

congty::~congty(){
    for(int i = 0;i < n;i++){
        delete danhsachnhanvien[i];
    }
    delete[] danhsachnhanvien;
}

void congty::nhapdanhsach(){
    cout<<"Nhap so luong nhan vien cho cong ty: "; cin>>n;

    danhsachnhanvien = new Nhanvien*[n];
    for(int i = 0;i < n;i++){
        int choose;
        cout<<"Nhap thong tin cho nhan vien thu "<<i + 1<<" la: "<<endl;
        cout<<"1. Lap trinh vien"<<endl;
        cout<<"2. Kiem chung vien"<<endl;
        cout<<"Chon 1 hoac 2: "; cin>>choose;

        if(choose == 1){
            danhsachnhanvien[i] = new laptrinh();
        }
        else if(choose == 2){
            danhsachnhanvien[i] = new Kiemchung();
        }
        else{
            cout<<"Nhap so khong hop lai vui long nhap lai: "<<endl;
            i--;
            continue;
        }
        danhsachnhanvien[i]->nhap();
    }
}


void congty::xuatdanhsach(){
    for(int i = 0;i < n;i++){
        cout<<"Thong tin nhan vien thu "<<i + 1<<" la: "<<endl;
        danhsachnhanvien[i]->xuat();
    }
}

double long congty::luongtrungbinh() const{
    double long total = 0;
    for(int i = 0;i < n;i++){
        total += danhsachnhanvien[i]->Tinhluong();
    }
    return total / n;
}

void congty::lietke() const{
    double luongtb = luongtrungbinh();
    for(int i = 0;i < n;i++){
        if(danhsachnhanvien[i]->Tinhluong() < luongtb){
            cout<<"Nhan vien thu "<<i + 1<<" co luong thap hon luong trung binh la: "<<endl;
            danhsachnhanvien[i]->xuat();
        }
    }
}