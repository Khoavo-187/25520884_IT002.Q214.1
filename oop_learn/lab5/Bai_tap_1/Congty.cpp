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
    cout<<"Nhap so luong nhan vien muon nhap vao: "; cin>>n;
    danhsachnhanvien = new nhanvien*[n];
    for(int i = 0;i < n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i + 1<<" la: "<<endl; 
        int choose;
        cout<<"Chon nhan vien muon nhap vao: "<<endl;
        cout<<"1. Nhan vien van phong"<<endl;
        cout<<"2. Nhan vien san xuat"<<endl;
        cout<<"Chon: "; cin>>choose;
        if(choose == 1){
            danhsachnhanvien[i] = new vanphong();
        }
        else if(choose == 2){
            danhsachnhanvien[i] = new sanxuat();
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

long long congty::total_luong(){
    long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += danhsachnhanvien[i]->Tinhluong();
    }
    return sum;
}

sanxuat* congty::min_luong() const{
    sanxuat* min_val = nullptr;
    for(int i = 0;i < n;i++){
        // dau tien la tim trong tat ca nhan vien san xuat thi dau la nhan vien san xuat it tien nhat
        sanxuat* SX = dynamic_cast<sanxuat*>(danhsachnhanvien[i]);
        if(!SX) continue; // neu nhan vien do khong phai san xuat thi bo qua

        if(!min_val || min_val->Tinhluong() > SX->Tinhluong()){
            min_val = SX;
        }
    }
    return min_val;
}

vanphong* congty::max_tuoi() const{
    vanphong* max_tuoi = nullptr;
    for(int i = 0;i < n;i++){
        vanphong* VP = dynamic_cast<vanphong*>(danhsachnhanvien[i]);
        if(!VP) continue;
        if(!max_tuoi || max_tuoi->getDate().sosanh(VP->getDate()) == 1){
            max_tuoi = VP;
        }
    }
    return max_tuoi;
}