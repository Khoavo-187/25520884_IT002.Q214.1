#include <bits/stdc++.h>
#include "Thoi_gian.h"
#include "Thoi_gian.cpp"
using namespace std;


int main() {
   
    Thoigian T1;
    cout<<"nhap thoi gian hien tai: "<<endl;
    T1.Nhap();

    Thoigian res = T1.TinhCongThemMotGiay();

    cout<<"khoang thoi gian tiep theo sau khi da cong them 1s: "<<endl;
    res.Xuat();
    
    return 0;
}