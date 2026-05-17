#include "arrPhanSo.h"
#include <bits/stdc++.h>

using namespace std;


arrPhanSo::arrPhanSo(){
    arr = nullptr;
    n = 0;
}
arrPhanSo::~arrPhanSo(){
    delete[] arr;
}

void arrPhanSo::nhapmang(){
    cout<<"nhap so phan tu phan so cho mang: ";
    cin>>n;
    delete[] arr;
    arr = new cPhanso[n];
    for(int i = 0;i < n;i++){
        arr[i].nhapps(); // con tro nhap cac inp cua phan so
        arr[i].Rutgon();
    }
}

void arrPhanSo::xuatmang(){
    cout<<"mang hien tai la: ";
    for(int i = 0;i < n;i++){
        arr[i].xuatps();
    }
}

void arrPhanSo::psngaunhien(int soluong){
    n = soluong;
    delete[] arr;
    arr = new cPhanso[n];
    srand((unsigned int)time(nullptr));
    for(int i = 0;i < n;i++){
        arr[i].tu =rand() % 10 + 1;
        arr[i].mau = rand() % 10 + 1;
    }
    cout<<"phan tu moi trong mang ngau nhien co "<<n<<" phan tu"<<endl;
}
bool sosanh(cPhanso P1,cPhanso P2){
    return P1.gettu() * P2.getmau() < P2.gettu() * P1.getmau();
}
cPhanso arrPhanSo::max_ps(){
    // cho phan so dau tien trong mang arr de co tim so lon hon
    cPhanso max_val = arr[0]; // lay phan so dau tien lam moc de sosanh
    for(int i = 0;i < n;i++){
        if(arr[i].tu * max_val.mau > arr[i].mau * max_val.tu){
            max_val = arr[i];
        }
    }
    return max_val;
}


int arrPhanSo::demtunguyento(){
    int dem = 0;
    for(int i = 0;i < n;i++){
        if(arr[i].lasonguyento()){
            dem++;
        }
    }
    return dem;
}

void arrPhanSo::sapxeptangdan(){
    sort(arr,arr + n,sosanh);
}