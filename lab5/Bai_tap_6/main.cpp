#include <bits/stdc++.h>
#include "danhsach.h"
using namespace std;


int main(){
    freopen("XYZ.INP","r",stdin);
    freopen("XYZ.OUT","w",stdout);
    danhsach H1;
    H1.nhapdanhsach();

    H1.xuatdanhsach();

    double total_money = H1.total_tien();
    cout<<"Tong so tien cong ty thu duoc la: "<<(long long)total_money<<" dong"<<endl;
    return 0;
}

