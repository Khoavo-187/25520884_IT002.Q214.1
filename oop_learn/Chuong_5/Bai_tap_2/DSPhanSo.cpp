#include  <bits/stdc++.h>
#include "DSPhanSo.h"
#include "Phanso.h"
using namespace std;
// cac constructor

DSPhanSo::DSPhanSo(){
    int n = 0;
    arr = nullptr;
}
DSPhanSo::DSPhanSo(int n){
    this->n = n;
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        arr[i] = 0;
    }
}
DSPhanSo::DSPhanSo(DSPhanSo& p){
    n = p.n;
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        arr[i] = p.arr[i];
    }
}
DSPhanSo::~DSPhanSo(){
    delete[] arr;
}


void DSPhanSo::nhapmang(){
    cout<<"nhap so luong phan so muon nhap: "; cin>>n;
    delete[] arr;
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        cout<<"Phan so thu "<<i + 1<<" : ";
        arr[i].nhap();
    }
}

void DSPhanSo::xuatmang(){
    cout<<"cac phan so la : ";
    for(int i = 0;i < n;i++){
        arr[i].xuat();
    }
}

// tim phan so co gia tri lon nhat tu ham bool operator trong phanso.h

Phanso DSPhanSo::max_value(){
    Phanso max = arr[0];
    for(int i = 1;i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

Phanso DSPhanSo::total(){
    Phanso tong = 0;
    for(int i = 0;i < n;i++){
        tong = tong + arr[i];
    }
    return tong;
}