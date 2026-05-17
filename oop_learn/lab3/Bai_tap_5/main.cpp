#include <bits/stdc++.h>
#include "cDaThuc.h"
#include "cDaThuc.cpp"

using namespace std;

int main(){
    cDaThuc D0; // khoi tao da thuc bac 0 neu cho heso ban dau = 1
    cout<<"da thuc bac 0:";
    D0.xuat();
    cout<<endl;

    cDaThuc D1,D2;
    cout<<"nhap da thuc D1: ";
    D1.nhap();
    cout<<"nhap da thuc D2: ";
    D2.nhap();
    
    cout<<"Da thuc D1 la: ";
    D1.xuat();
    cout<<endl;
    cout<<"Da thuc D2 la: ";
    D2.xuat();
    cout<<endl;
    int x;
    cout<<"nhap gia tri x cho da thuc:"; cin>>x;
    cout<<endl;
    long double res1 = D1.giatri(x);
    long double res2 = D2.giatri(x);
    cout<<"D1: "<<res1<<endl;
    cout<<"D2: "<<res2<<endl;

    cDaThuc res3 = D1.tong(D2);
    cDaThuc res4 = D1.hieu(D2);
    cout<<"D1 + D2 = ";
    res3.xuat();
    cout<<endl;
    cout<<"D1 - D2 = ";
    res4.xuat();

    return 0;

}