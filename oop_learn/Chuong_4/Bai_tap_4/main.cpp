#include <bits/stdc++.h>
#include "dathuc.h"
#include "dathuc.cpp"
using namespace std;



int main() {
    Dathuc D1,D2;
    cout<<"khoi tao da thuc cho D1: "<<endl;
    D1.nhap();
    cout<<"khoi tao da thuc cho D2: "<<endl;
    D2.nhap();

    cout<<"Da thuc D1: ";
    D1.xuat();
    cout<<endl;
    cout<<"Da thuc D2: ";
    D2.xuat();
    cout<<endl;

    int x;
    cout<<"nhap x: "; cin>>x;
    cout<<"gia tri cua da thuc D1 khi biet x la: "<<D1.giatri(x)<<endl;
    cout<<"gia tri cua da thuc D2 khi biet x la: "<<D2.giatri(x)<<endl;

    Dathuc res = D1.cong(D2);
    cout<<"D1 + D2 = ";
    res.xuat();
    cout<<endl;

    Dathuc res2 = D1.tru(D2);
    cout<<"D1 - D2 = ";
    res2.xuat();

    
    
    return 0;
}