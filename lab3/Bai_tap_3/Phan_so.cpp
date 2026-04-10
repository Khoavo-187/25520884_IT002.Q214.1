#include <bits/stdc++.h>
#include "Phan_so.h"

using namespace std;


bool Phanso::lower(Phanso P2){
    Phanso a = *this; // copy gia tri nam trong input co san
    a.Rutgon(); 
    P2.Rutgon(); // chuyen doi neu mau co < 0 thi dao nguoc lai ve gia tri dung
    // day la cong thuc de sap xep cac phan so theo dang tang dan bang cach tra ve true neu so sanh ban dau co cac phan tu nhan cheo < phan tu nhan cheo con lai
    return a.getTu() * P2.getMau() < a.getMau() * P2.getTu(); 
    // gia dinh truong hop nhan cheo so dau < phan so sau
    // cai nay la sap xep tang dan
}

bool Phanso::greater(Phanso P2){
    Phanso a = *this;
    a.Rutgon();
    P2.Rutgon();
    return a.getTu() * P2.getMau() > a.getMau() * P2.getTu();
    // day cong thuc nguoc lai de sort cac phan so giam dan
}

bool kiemtra(int n){
    string s = to_string(n);
    for(char c : s){
        if(c == '-'){
            continue; // xu li truong hop am trong char c
        }
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
int UCLN(int a,int b){
    return __gcd(a,b);
}
Phanso::Phanso(){
    tuso = 0;
    mauso = 1;
}

Phanso::Phanso(int tuso,int mauso){
    this->tuso= tuso;
    this->mauso = mauso;
}

void Phanso::Rutgon(){
    int g = UCLN(abs(tuso),abs(mauso));

    tuso /= g;
    mauso /= g;

    if(mauso < 0){
        tuso = -tuso;
        mauso = -mauso;
    }
}

void Phanso::nhapps(){
    cout<<"nhap tu so va mau so cho phan so tren: "<<endl;
    do{
        cin>>tuso>>mauso;
        if(!kiemtra(tuso) || !kiemtra(mauso)){
            cout<<"input khong hop le, vui long nhap lai";
            continue;
        }
        break;
    }while(true);
}

void Phanso::xuatps(){
    cout<<"Phan so: "<<tuso<<"/"<<mauso<<endl;
}
// setter
void Phanso::setTu(int tuso){
    this->tuso = tuso;
}

void Phanso::setMau(int mauso){
    this->mauso = mauso;
}

// getter
int Phanso::getTu(){
    return tuso;
}
int Phanso::getMau(){
    return mauso;
}

// phep tinh cong giua cac phan so
Phanso Phanso::operator+(Phanso P2) const{
    return Phanso(tuso * P2.getMau() + mauso * P2.getTu(), mauso * P2.getMau());
    // su dung cong thuc nhanh cho phep tinh cong giua 2 phan so
    // su dung lay cong thuc tuso nhan cheo voi cac thanh phan nguoc lai cua P2
    // tra ve duoi dang Phanso
}

