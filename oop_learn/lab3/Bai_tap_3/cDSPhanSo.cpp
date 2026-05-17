#include <bits/stdc++.h>
#include "Phan_so.h"
#include "cDSPhanSo.h"

// bat dau voi tim cac ham don gian truoc , tim cac so nguyen to
bool songuyento(int n){
    if(n == 0 || n == 1) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool cDSPhanSo::sosanhtang(Phanso a,Phanso b){
    // ham sosanhtang nay ta su dung static nham de dung chung cho tat ca object ma khong can phai truyen tham so cho bat ki object nao
    // Vi ham sort tang dan can cong thuc so sanh thuan tuy giua cac phan so nen ta dat 2 ham sosanhtang va sosanhgiam la 2 ham static de dung chung trong class
    return a.lower(b);
}
bool cDSPhanSo::sosanhgiam(Phanso a,Phanso b){
    return a.greater(b);
}
cDSPhanSo::cDSPhanSo(){
    n = 0;
    arr = nullptr;
}
cDSPhanSo::cDSPhanSo(int n){
    this->n = n;
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        arr[i] = Phanso(); // khoi tao mac dinh cho tung bien i
    }
}
// copy construct
cDSPhanSo::cDSPhanSo(const cDSPhanSo& P2){
    n = P2.n;
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        arr[i] = P2.arr[i];
    }
}

cDSPhanSo::~cDSPhanSo(){
    delete[] arr;
}
// nhap mang cho cac gia tri phan so
void cDSPhanSo::nhap(){
    cout<<"nhap so luong phan so: "; cin>>n;
    delete[] arr; // xoa truoc bo nho dem con sot lai trong mang arr
    arr = new Phanso[n];
    for(int i = 0;i < n;i++){
        cout<<"Nhap phan so thu "<<i + 1<<endl;
        arr[i].nhapps();
        arr[i].Rutgon(); // nhap xong thi ta rut gon la cac bien cua arr
    }
}

void cDSPhanSo::xuat(){
    cout<<"phan so trong mang la: "<<endl;
    for(int i = 0;i < n;i++){
        arr[i].xuatps();
    }
}
// bat dau tinh tong cac phan so
Phanso cDSPhanSo::tong(){
    //ban dau ta se khoi tao mac dinh de co the cong don vao cac gia tri phanso trong mang
    Phanso tong = Phanso();
    for(int i =0;i < n;i++){
        tong = tong +  arr[i];
    }
    tong.Rutgon();
    return tong;
}


// tim phan so lon nhat
Phanso cDSPhanSo::max_val(){
    Phanso max = arr[0]; // ta cho bien Phanso max nay lam ban dau de quan sat cac phan so sau do
    for(int i = 1;i < n;i++){
        if(max.lower(arr[i])){
            max = arr[i];
        }
    }
    return max;
}

// tim phan so nho nhat cung dua vao cong thuc 
Phanso cDSPhanSo::min_val(){
    Phanso min = arr[0];
    for(int i =1;i < n;i++){
        if(min.greater(arr[i])){
            min = arr[i];
        }
    }
    return min;
}

// tim phan so co tu la so nguyen lon nhat trong mang
Phanso cDSPhanSo::max_nguyento_tu(){
    Phanso max_nguyento = arr[0];
    int value = INT_MIN;
    bool isfound = false;
    for(int i = 0;i < n;i++){
        if(songuyento(arr[i].getTu())){
            //check xem lieu phan so minh dang xet coi no co tu la so nguyen to khong
            if(arr[i].getTu() > value){
                value = arr[i].getTu();
                max_nguyento = arr[i]; 
                isfound = true;
            }
        }
    }
    if(!isfound) cout<<"khong co tu nao trong day phan so la so nguyento"<<endl;
    return max_nguyento;
}

// Sắp xếp danh sách phân số tăng dần
void cDSPhanSo::tangdan(){
    sort(arr,arr + n,sosanhtang); // ta su dung cong thuc xet cac phan so tang dan theo ham cua sosanhtang minh so
}
//Sắp xếp danh sách phân số giảm dần 
void cDSPhanSo::giamdan(){
    sort(arr, arr + n,sosanhgiam);
}


