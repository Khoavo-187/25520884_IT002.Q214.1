#include <bits/stdc++.h>
#include "Phanso.h"
using namespace std;

int UCLN(int a,int b){
    return __gcd(a,b);
}
Phanso::Phanso(int t, int m){ 
    tuso = t;
    mauso = m;
    rutgon();
}
void Phanso::rutgon(){
    int g = UCLN(abs(tuso),abs(mauso));

    tuso /= g;
    mauso /= g;

    if(mauso < 0 ){
        tuso =-tuso;
        mauso = -mauso;
    }
}
Phanso::Phanso(const Phanso& p){
    tuso = p.tuso;
    mauso = p.mauso;
    rutgon();
}

// setter
void Phanso::GanTu(int t){
    tuso = t;
}
void Phanso::GanMau(int m){
    mauso = m;
}

// getter
int Phanso::LayTu(){
    return tuso;
}
int Phanso::LayMau(){
    return mauso;
}

void Phanso::nhap(){
    cout<<"nhap tu so va mau so cho phan so: ";
    do{
        cin>>tuso>>mauso;
        if(cin.fail()){
            cout<<"input sai kieu du lieu, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(mauso == 0){
            cout<<"mau khong duoc bang 0, nhap lai"<<endl;
            continue;
        }
        rutgon();
        break;
    }while(true);
}
void Phanso::xuat(){
    cout<<"Phan so la: "<<tuso<<"/"<<mauso<<endl;
}
bool Phanso::operator>(Phanso p) const{
    return tuso * p.mauso > mauso * p.tuso;
}
Phanso Phanso::operator+(Phanso p)const{
    return Phanso(tuso * p.mauso + mauso * p.tuso,mauso * p.mauso);
}
Phanso Phanso::operator-(Phanso p) const{
    return Phanso(tuso * p.mauso - mauso * p.tuso,mauso * p.mauso);
}