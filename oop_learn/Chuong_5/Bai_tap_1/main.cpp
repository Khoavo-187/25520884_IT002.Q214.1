#include <bits/stdc++.h>
#include "Sophuc.h"
#include "Sophuc.cpp"

using namespace std;

int main(){
    // dau tien la kiem tra constructor
    cout<<"Kiem tra constructor"<<endl;
    sophuc A; // mac dinh
    sophuc B(3.5,-4.5); // co tham so
    sophuc C(2.45); // so phuc dac biet
    // xuat ra
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    cout<<"C: "<<C<<endl;

    // nhap input tu ban phim
    sophuc P1,P2;
    cout<<"nhap so phuc cho P1: ";
    cin>>P1;
    cout<<"Nhap so phuc cho P2: ";
    cin>>P2;
    cout<<"P1: "<<P1<<endl;
    cout<<"P2: "<<P2<<endl;

    // cac phep toan
    cout<<"P1 + P2: "<<(P1 + P2)<<endl;
    cout<<"P1 - P2: "<<(P1 - P2)<<endl;
    cout<<"P1 * P2: "<<(P1 * P2)<<endl;
    cout<<"P1 / P2: "<<(P1 / P2)<<endl;
    
    // so sanh 2 so phuc

    cout<<"P1 : P2"<<(P1 == P2 ? "hai so phuc nay bang nhau" : "hai so phuc khac nhau")<<endl;

    // test truong hop dac biet neu phan ao = 0
    sophuc X(7.5);
    sophuc Y(5.5,22.3);
    sophuc Z(-45.23,-34.6);

    cout<<"X + Y: "<<(X + Y)<<endl;
    cout<<"X * Y: "<<(X * Y)<<endl;
    cout<<"X - Z: "<<(X - Z)<<endl;
    cout<<"X / Z: "<<(X / Z)<<endl;

    return 0;
} 