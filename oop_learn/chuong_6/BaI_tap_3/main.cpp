#include <bits/stdc++.h>
#include "Congty.h"
#include "kiemchung.h"
#include "laptrinh.h"
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    
    congty T1;
    // nhap vao nhan vien trong cong ty va xuat no ra
    cout<<"Nhap thong tin cho cong ty"<<endl;
    T1.nhapdanhsach();
    cout<<"Thong tin cua cong ty: "<<endl;
    T1.xuatdanhsach();

    cout<<"cac Nhan vien co tien luong it hon "<<T1.luongtrungbinh()<<" dong la: "<<endl;
    T1.lietke();
    return 0;
}