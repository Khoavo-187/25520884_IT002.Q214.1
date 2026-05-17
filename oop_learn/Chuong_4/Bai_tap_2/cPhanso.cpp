#include <bits/stdc++.h>
#include "cPhanso.h"

using namespace std;

bool songuyento(int n){
    if(n < 2) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
bool kiemtra(string s){
    for(char c : s){
        if(c == '-'){
            continue;
        }
        if(!(isdigit(c))){
            return false;
        }
    }
    return true;
}
int UCLN(int a,int b){
    return __gcd(a,b);
}

void cPhanso::set(int tu,int mau){
    this->tu = tu;
    this->mau = mau;
}
// getter
int cPhanso::gettu(){
    return tu;
}
int cPhanso::getmau(){
    return mau;
}
cPhanso::cPhanso(){
    tu = 0;
    mau = 1;
}

cPhanso::cPhanso(int tu,int mau){
    this->tu = tu;
    this->mau = mau;
}

void cPhanso::nhapps(){
    cout<<"nhap tu va mau cho phan so: ";
    string tuso,mauso;
    do{
        cin>>tuso>>mauso;
        if(!kiemtra(tuso) || !kiemtra(mauso)){
            cout<<"input khong hop le, vui long nhap lai";
            continue;
        }
        if(mauso == "0"){
            cout<<"mau khong duoc bang 0, nhap lai";
            continue;
        }
        tu = stoi(tuso);
        mau = stoi(mauso);
        break;
    }while(true);
}

void cPhanso::Rutgon(){
    int g = UCLN(abs(tu),abs(mau));
    tu /= g;
    mau /= g;

    if(mau < 0){
        tu = -tu;
        mau = -mau;
    }
}

void cPhanso::xuatps(){
    cout<<tu<<"/"<<mau<<" ";
}
bool cPhanso::lasonguyento(){
    if(!songuyento(tu)){
        return false; // neu tu la so nguyen to ==> tra ve sai
    }
    return true; // con lai la true neu dung
}