#include <bits/stdc++.h>
#include "GV.h"
#include "GV.cpp"
#include "NVHC.h"
#include "CBVC.h"
#include "CBVC.cpp"
#include "NVHC.cpp"
using namespace std;
int main() {
    
    // tao ra con tro tu lop cha de tro den tung doi tuong cua lop con

    int n;
    cout<<"Nhap so luong nhan vien muon nhap: ";
    cin>>n;
    CBVC** danhsachnhanvien = new CBVC*[n];

    for(int i = 0;i < n/2;i++){
        // 1 nua chia deu cho lop con hanh chinh, 1 nua con lai cho giang vien
        danhsachnhanvien[i] = new hanhchinh();
    }
    for(int j = n/2;j < n;j++){
        danhsachnhanvien[j] = new giangvien();
    }

    // bat dau nhap cac input va xuat output
    for(int i = 0;i < n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i + 1<<" :"<endl;
        danhsachnhanvien[i]->nhap();
    }

    for(int i = 0;i < n;i++){
        cout<<"Thong tin nhan vien thu "<<i + 1<<" :"<<endl;
        danhsachnhanvien[i]->xuat();
    }

    for(int i = 0;i < n;i++){
        delete danhsachnhanvien[i];
    }
    delete[] danhsachnhanvien;
    return 0;
}