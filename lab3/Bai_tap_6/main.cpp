#include <bits/stdc++.h>
#include "Date.h"
#include "Date.cpp"
#include "cCandidate.h"
#include "cCandidate.cpp"
#include "cListCandidate.h"
#include "cListCandidate.cpp"
using namespace std;

int main(){
    cListCandidate L1;
    cout<<"nhap thong tin danh sach thi sinh: "<<endl;
    L1.nhap();

    cout<<endl;
    L1.xuat();
    cout<<endl;
    cout<<"thong tin thi sinh co tong diem lon hon 15:";
    L1.xuatlonhon15();
    cout<<endl;
    cout<<"Thi sinh co tong diem lon nhat la: "<<L1.max_cao_nhat()<<" diem"<<endl;
    L1.xuatcaonhat();
    

    cout<<"xuat danh sach thi sinh giam dan: ";
    L1.giamdan();
    L1.xuat();
    return 0;
}