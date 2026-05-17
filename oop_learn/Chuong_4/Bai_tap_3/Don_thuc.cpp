#include <bits/stdc++.h>
#include "Don_thuc.h"

using namespace std;

bool kiemtra(string s){
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
Donthuc::Donthuc(){
    heso = 0;
    hemu = 0;
}

Donthuc::Donthuc(int heso,int hemu){
    this->heso  = heso;
    this->hemu = hemu;
}

void Donthuc::nhapdonthuc(){
    cout<<"nhap he so va he mu cho don thuc tren: ";
    string hs,hm;
    do{
        cin>>hs>>hm;
        if(!kiemtra(hs) || !kiemtra(hm)){
            cout<<"input khong hop le";
            continue;
        }
        heso = stoi(hs);
        hemu = stoi(hm);
        break;
    }while(true);
}


void Donthuc::thaydoi(int heso,int hemu){
    this->heso = heso;
    this->hemu = hemu;
}
// setter

void Donthuc::setA(int heso){
    this->heso = heso;
}
void Donthuc::setB(int hemu){
    this->hemu = hemu;
}
// getter
int Donthuc::getA(){
    return heso;
}
int Donthuc::getB(){
    return hemu;
}
void Donthuc::xuatdonthuc(){
    cout<<"don thuc hien tai la: P(x)= ";
    string mu[] = {"⁰","¹","²","³","⁴","⁵","⁶","⁷","⁸","⁹"};
    
    if (hemu == 0)
        cout << heso;
    else if (hemu == 1)
        cout << heso << "x";
    else
        cout << heso << "x" << mu[hemu];  // in ra: 3x²
    cout<<endl;
}

int Donthuc::giatri(int x){
    return heso * pow(x,hemu);
}

Donthuc Donthuc::tinhdaoham(){
    Donthuc kq;
    kq.setA(heso * hemu);
    kq.setB(hemu - 1);
    return kq;
}

Donthuc Donthuc::tong(Donthuc D2){
    Donthuc kq;
    if(hemu != D2.getB()){
        cout<<"hai don thuc khong cung bac khong the cong"<<endl;
        return Donthuc(0,0);
    }

    kq.setA(heso + D2.getA());
    kq.setB(hemu);
    return kq;
}