#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

congty::congty(){}

congty::congty(const congty& other){
    n = other.n;
    for(nhanvien* NV : other.danhsachnhanvien){
        danhsachnhanvien.push_back(NV->clone());
    }
}

congty::~congty(){
    for(nhanvien* NV : danhsachnhanvien){
        delete NV;
    }
}


// getter
vector<laptrinh*> congty::GetLT(){
    return danhsachlaptrinh;
}
vector<kiemchung*> congty::GetKC(){
    return danhsachkiemchung;
}
void congty::nhapdanhsach(){   
    cout<<"Nhap so nhan vien muon nhap vao: "; cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"Nhap nhan vien thu "<<i + 1<<" la: "<<endl;
        nhanvien* nv = nullptr;
        int choose;
        cout<<"1. Lap trinh vien"<<endl;
        cout<<"2. Kiem chung vien"<<endl;
        cout<<"Chon: ";
        cin>>choose;

        if(choose == 1){
            laptrinh* LT = new laptrinh();
            danhsachlaptrinh.push_back(LT);
            nv = LT;
        }
        else if(choose == 2){
            kiemchung* KC = new kiemchung();
            danhsachkiemchung.push_back(KC);
            nv = KC;
        }
        else{
            cout<<"Nhap khong hop le, nhap lai"<<endl;
            i--;
            continue;
        }
        nv->nhap();
        danhsachnhanvien.push_back(nv);
    }
}


void congty::xuatdanhsach(){
    for(int i = 0;i < n;i++){
        cout<<"Thong tin nhan vien thu "<<i + 1<<" la: "<<endl;
        danhsachnhanvien[i]->xuat();
    }
}

double congty::luongTB(){
    double sum =0;
    for(int i = 0;i < n;i++){
        sum += danhsachnhanvien[i]->Tinhluong();
    }
    return sum / n;
}
vector<nhanvien*> congty::Luong_thap(){
    double luongtb = luongTB();
    vector<nhanvien*> min_luong;
    for(int i =0;i < n;i++){
        if(danhsachnhanvien[i]->Tinhluong() < luongtb){
            min_luong.push_back(danhsachnhanvien[i]);
        }
    }
    return min_luong;
}

nhanvien* congty::max_luong(){
    nhanvien* max_salary = nullptr;
    for(int i = 0;i < n;i++){
        if(!max_salary || max_salary->Tinhluong() < danhsachnhanvien[i]->Tinhluong()){
            max_salary = danhsachnhanvien[i];
        }
    }
    return max_salary;
}

nhanvien* congty::min_luong(){
    nhanvien* min_salary = nullptr;
    for(int i = 0;i < n;i++){
        if(!min_salary || min_salary->Tinhluong() > danhsachnhanvien[i]->Tinhluong()){
            min_salary = danhsachnhanvien[i];
        }
    }
    return min_salary;
}

laptrinh* congty::Luong_cao(vector<laptrinh*> LT){
    laptrinh* luong_max = nullptr;
    for(int i =0;i < LT.size();i++){
        if(!luong_max || luong_max->Tinhluong() < LT[i]->Tinhluong()){
            luong_max = LT[i];
        }
    }
    return luong_max;
}

kiemchung* congty::Luong_thap(vector<kiemchung*> KC){
    kiemchung* luong_min = nullptr;
    for(int i =0;i < KC.size();i++){
        if(!luong_min || luong_min->Tinhluong() > KC[i]->Tinhluong()){
            luong_min = KC[i];
        }
    }
    return luong_min;
}