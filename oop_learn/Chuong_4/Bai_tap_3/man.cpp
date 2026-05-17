#include <bits/stdc++.h>
#include "Don_thuc.h"
#include "Don_thuc.cpp"

using namespace std;


int main(){
    Donthuc D1,D2;
    cout<<"nhap cho don thuc D1"<<endl;
    D1.nhapdonthuc();
    cout<<"nhap cho don thuc D2"<<endl;
    D2.nhapdonthuc();

    cout<<"thay doi don thuc cho D1"<<endl;
    D1.thaydoi(-7,2);
    cout<<"Don thuc D1"<<endl;
    D1.xuatdonthuc();
    cout<<"Don thuc D2"<<endl;
    D2.xuatdonthuc();
    int x;
    cout<<"nhap gia tri x: "; cin>>x;
    cout<<"gia tri cua P(x1) sau khi biet x la: "<<D1.giatri(x)<<endl;
    cout<<"gia tri cua P(x2) sau khi biet x la: "<<D2.giatri(x)<<endl;
    cout<<"dao ham cua don thuc D1 la ";
    Donthuc res1 = D1.tinhdaoham();
    res1.xuatdonthuc();
    cout<<endl;
    cout<<"dao ham cua don thuc D2 la: ";
    Donthuc res2 = D2.tinhdaoham();
    res2.xuatdonthuc();
    cout<<endl;

    Donthuc cong = D1.tong(D2);
    cout<<"tong cua 2 don thuc tren la: ";
    cong.xuatdonthuc();
    return 0;
}