#include <bits/stdc++.h>
#include "DSPhanSo.h"
#include "DSPhanSo.cpp"
#include "Phanso.h"
#include "Phanso.cpp"
using namespace std;


int main(){
    DSPhanSo P1;
    cout<<"bat dau nhap mang phan so: "<<endl;

    P1.nhapmang();
    cout<<"mang phan so hien tai: "<<endl;
    P1.xuatmang();
    cout<<"phan so lon nhat nam trong mang la: ";
    P1.max_value().xuat();

    cout<<endl;
    cout<<"tong cac phan so la: ";
    Phanso total = P1.total();
    total.xuat();
    return 0;
}