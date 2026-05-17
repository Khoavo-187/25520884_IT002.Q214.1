#include <bits/stdc++.h>
#include "cBook.h"
#include "cListBook.h"
#include "cBook.cpp"
#include "cListBook.cpp"
using namespace std;

int main(){
    cListBook B1;

    B1.nhapds();
    
    B1.xuatds();

    int x;
    cout<<"nhap nam hien tai: "; cin>>x;
    cout<<endl;
    cBook min_nam = B1.min_year(x);
    cout<<"sach co nam xuat ban gan day nhat la: ";
    min_nam.xuat();

    string ma;
    cout<<"nhap ma muon truy xuat"; cin>>ma;

    cBook* real_book = B1.tracuu(ma);
    real_book->xuat();

    cout<<endl;

    cout<<"thong tin cap nhat";
    B1.capnhat(ma);
    return 0;
}