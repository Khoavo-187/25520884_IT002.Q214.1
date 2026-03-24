#include <bits/stdc++.h>
#include "Sophuc.h"

using namespace std;
bool kiemtraso(string s){
    if(s.empty()) return false;
    // truong hop xu li so am
    for(char c : s){
        if(c == '-'){
            continue;
        }
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
void Sophuc::Nhap(){
    // nhap so nguyen cho phan thuc va phan ao cua 1 so phuc
    cout<<"nhap cac phan tu cho so phuc: "<<endl;
    string thuc = to_string(iThuc);
    string ao = to_string(iAo);
    do{
        cin>>thuc>>ao;
        // dieu kien check xem phan thuc hay phan ao co bi sai kiue du lieu int, neu co thi phai nhap lai cho den khi true
        if(!kiemtraso(thuc) || !(kiemtraso(ao))){
            cout<<"phan thuc va phan ao bi sai kieu du lieu,vui long nhap lai"<<endl;
            continue;
        }
        iThuc = stoi(thuc);
        iAo = stoi(ao);
        break;
    }while(true);
}

void Sophuc::Xuat(){
    cout<<"So phuc:";
    if(iAo > 0){
        cout<<iThuc<<"+"<<iAo<<"i";
    }
    else{
        cout<<iThuc<<"-"<<-iAo<<"i";
    }
}

// cac phep tinh giua cac so phuc voi nhau

Sophuc Sophuc::Tong(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc + P2.iAo;
    ketqua.iAo = iAo + P2.iAo;
    return ketqua;
}
Sophuc Sophuc::Hieu(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc - P2.iThuc;
    ketqua.iAo = iAo - P2.iAo;
    return ketqua;
}
Sophuc Sophuc::Tich(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc * P2.iThuc - iAo * P2.iAo;
    ketqua.iAo = iThuc * P2.iThuc + iAo * P2.iAo;
    return ketqua;
}
Sophuc Sophuc::thuong(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = (iThuc * P2.iThuc + iAo * P2.iAo) / (P2.iThuc * P2.iThuc + P2.iAo * P2.iAo);
    ketqua.iAo = (iAo * P2.iThuc - iThuc * P2.iAo) / (P2.iThuc * P2.iThuc + P2.iAo * P2.iAo);
    return ketqua;
}