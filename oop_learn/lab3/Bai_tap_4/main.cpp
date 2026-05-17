#include <bits/stdc++.h>
#include "array.h"
#include "array.cpp"
using namespace std;

int main(){
    cArray arr1;
    // tao mang ngau nhien
    arr1.mangngaunhien();
    cout<<endl;
    // tao mang ban dau
    cout<<"khoi tao mang ban dau: "<<endl;

    arr1.nhap();
    // xuat cac phan tu mang
    arr1.xuat();
    cout<<endl;
    int x;
    cout<<"nhap gia tri x muon tim trong mang: "; cin>>x;
    // tim kiem
    cout<<"trong mang co "<<arr1.dem(x)<<" so "<<x<<endl;
    // kiem tramang tang dan
    if(arr1.kiemtratangdan()){
        cout<<"mang nay la mang tang dan"<<endl;
    }
    else{
        cout<<"day khong phai la mang tang dan"<<endl;
    }
    if(arr1.min_value_le() == -1){
        cout<<"khong co phan tu nao la phan tu le nho nhat"<<endl;
    }
    else{
        cout<<"phan tu le nho nhat nam trong mang la "<<arr1.min_value_le()<<endl;
    }
    if(arr1.max_songuyento() == -1){
        cout<<"khong co phan tu nao la so nguyen to trong mang"<<endl;
    }
    else{
        cout<<"so nguyen to lon nhat nam trong mang la: "<<arr1.max_songuyento()<<endl;
    }
    cout<<"mang sau khi sap xep tang dan la: ";
    arr1.saptangdan();
    arr1.xuat();
    cout<<endl;
    cout<<"mang sau khi sap xep giam dan la: ";
    arr1.sapgiamdan();
    arr1.xuat();

    return 0;
}