#include <bits/stdc++.h>
#include "Phan_so.h"
#include "cDSPhanSo.h"
#include "Phan_so.cpp"
#include "cDSPhanSo.cpp"

using namespace std;

int main(){
    cDSPhanSo D1;
    // bat dau nhap vao danh sach cac phan so
    D1.nhap();
    // xuat ra
    D1.xuat();
    // tim tong cua cac phan so
    Phanso res1 = D1.tong();
    cout<<"tong cua cac phan so nam trong mang la: ";
    res1.xuatps();
    cout<<endl;

    // phan so lon nhat
    Phanso res2 = D1.max_val();
    cout<<"phan so lon nhat la : ";
    res2.xuatps();
    cout<<endl;
    // phan so nho nhat
    Phanso res3 = D1.min_val();
    cout<<"Phan so nho nhat la: ";
    res3.xuatps();
    cout<<endl;
    Phanso res4 = D1.max_nguyento_tu();
    cout<<"Phan so co tu la nguyen to lon nhat la: ";
    res4.xuatps();
    cout<<endl;
    cout<<"mang sau khi tang dan: ";
    D1.tangdan();
    D1.xuat();
    cout<<endl;
    cout<<"mang sau khi giam dan la :";
    D1.giamdan();
    D1.xuat();
    return 0;
}