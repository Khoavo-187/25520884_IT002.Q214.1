#include <bits/stdc++.h>
#include "Phanso.h"
#include "Phanso.cpp"
using namespace std;

int main(){
    Phanso p1,p2;
    cout<<"nhap cho phan so 1: "<<endl;
    p1.Nhap();
    cout<<"Nhap cho phan so 2: "<<endl;
    p2.Nhap();

    cout<<"Phan so 1: ";
    p1.Rutgon();
    p1.Xuat();
    cout<<endl;
    cout<<"Phan so 2: ";
    p2.Rutgon();
    p2.Xuat();
    cout<<endl;
    //tinh toan
    cout<<"tong cua 2 phan so la: ";
    Phanso cong = p1.Tong(p2);
    cong.Xuat();
    cout<<endl;
    cout<<"hieu cua 2 phan so la: ";
    Phanso tru = p1.Hieu(p2);
    tru.Xuat();
    cout<<endl;
    cout<<"tich cua 2 phan so la: ";
    Phanso nhan = p1.Tich(p2);
    nhan.Xuat();
    cout<<endl;
    cout<<"thuong cua 2 phan so la: ";
    Phanso chia = p1.thuong(p2);
    chia.Xuat();
    cout<<endl;
    // so sanh

    int ketqua = p1.Sosanh(p2);
    if(ketqua == 1){
        cout<<"phan so 1 > phan so 2";
    }
    else if(ketqua == 0){
        cout<<"Phan so 1 == so 2";
    }
    else{
        cout<<"Phan so 1 < Phan so 2";
    }
}