#include <bits/stdc++.h>
#include "arrPhanSo.h"
#include "cPhanso.h"
#include "cPhanso.cpp"
#include "arrPhanSo.cpp"


using namespace std;
int main(){
    arrPhanSo arr1;
    arr1.nhapmang();
    cout<<endl;
    arr1.xuatmang();
    cout<<endl;
    int soluong;
    cout<<"nhap so luong muon tao ngau nhien"; cin>>soluong;

    arrPhanSo arr2;
    arr2.psngaunhien(soluong);
    arr2.xuatmang();
    cout<<endl;

    cPhanso max = arr1.max_ps();
    cout<<"phan so lon nhat trong mang la: ";
    max.xuatps();

    cout<<endl;
    cout<<"co tong cong "<<arr1.demtunguyento()<<" phan so co tu la so nguyen to trong mang"<<endl;
    cout<<"mang sau khi sap xep tang dan la: ";
    arr1.sapxeptangdan();
    arr1.xuatmang();
}