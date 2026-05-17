#include <bits/stdc++.h>
#include "cArray.h"
#include "cArray.cpp"

using namespace std;

int main(){
    cArray N1;
    
    N1.nhapmang();
    cout<<endl;
    N1.xuatmang();
    cout<<endl;

    int soluong;
    cout<<"nhap so luong cho mang moi: "; cin>>soluong;

    cArray N2; // cai magn rien thu 2 de danh cho cac so duoc tao ngau nhien chen vao
    N2.taongaunhien(soluong);
    N2.xuatmang();
    cout<<endl;
    int x;
    cout<<"nhap so xuat hien cua x: "; cin>>x;
    cout<<"so lan xuat hien cua so "<<x<<" la: "<<N1.demxuathien(x)<<endl;;

    if(N1.kiemtratangdan()){
        cout<<"day la mang tang dan";
    }
    else{
        cout<<"day khong phai la magng tang dan";
    }

    cout<<endl;
    cout<<"phan tu le nho nhat co trong mang hien tai la: "<<N1.min_le()<<endl;
    
    cout<<"sap xep day tang dan la: ";
    N1.tangdan();
    N1.xuatmang();

    return 0;
}