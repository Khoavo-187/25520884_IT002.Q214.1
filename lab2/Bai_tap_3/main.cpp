#include <bits/stdc++.h>
#include "Sophuc.h"
#include "Sophuc.cpp"
using namespace std;


int main() {
    Sophuc P1,P2;
    cout<<"nhap thong tin cho so phuc A: "<<endl;
    P1.Nhap();
    cout<<"nhap thong tin cho so phuc B: "<<endl;
    P2.Nhap();
    // cac phep tinh giua 2 so phuc
    Sophuc cong = P1.Tong(P2);
    Sophuc tru = P1.Hieu(P2);
    Sophuc nhan = P1.Tich(P2);
    Sophuc chia = P1.thuong(P2);
    // xuat ra man hinh

    cout<<"phep cong giua 2 so phuc la: ";
    cong.Xuat();
    cout<<endl;
    cout<<"phep tru giua 2 so phuc la: ";
    tru.Xuat();
    cout<<endl;
    cout<<"phep nhan giua 2 so phuc la: ";
    nhan.Xuat();
    cout<<endl;
    cout<<"phe chia giua 2 so phuc la: ";
    chia.Xuat();
    cout<<endl;
    
    return 0;
}