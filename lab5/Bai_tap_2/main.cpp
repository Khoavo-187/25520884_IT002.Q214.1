#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

int main(){
    congty C1;
    C1.nhapdanhsach();
    C1.xuatdanhsach();

    // tong so luong cho tung loai giao dich
    C1.So_luong();
    cout<<"Tien trung binh cua giao dich can ho chung cu la: "<<C1.thanhtienTB()<<" dong"<<endl;
    nhapho* caonhat = C1.max_tien();
    if(!caonhat){
    cout << "Khong co giao dich nha pho" << endl;
    } 
    else {
        cout << "Thanh tien lon nhat: " << caonhat->Thanhtien() << endl;
        caonhat->xuat();
    }
    vector<giaodich*> gd12 = C1.thang12();
    for(int i = 0;i < gd12.size();i++){
        cout<<"Giao dich thu "<<i + 1<<" cua thang 12 nam 2024 la: "<<endl;
        gd12[i]->xuat();
    }
}