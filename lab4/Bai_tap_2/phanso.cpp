#include <bits/stdc++.h>
#include "phanso.h"
using namespace std;

int UCLN(int a,int b){
    return __gcd(a,b); // tra ve uoc chung lon nhat cho a va b
}
void phanso::set(int tuso,int mauso){
    this->tuso = tuso;
    this->mauso = mauso;
}

phanso::phanso(int tuso,int mauso){
    set(tuso,mauso);
    // su dung ham rut gon neu gia su truyen tham so thang vao ham khoi tao nay
    rutgon();
}

void phanso::rutgon(){
    int g = UCLN(abs(tuso),abs(mauso));

    tuso /= g;
    mauso /= g;

    if(mauso < 0){
        tuso = -tuso;
        mauso = -mauso;
    }
}

// tinh toan cac phep  toan giua cac phan so

phanso phanso::operator+(phanso P2) const{
    return phanso(tuso * P2.mauso + mauso * P2.tuso,mauso * P2.mauso);
}

phanso phanso::operator-(phanso P2) const{
    return phanso(tuso * P2.mauso - mauso * P2.tuso,mauso * P2.mauso);
}

phanso phanso::operator*(phanso P2) const{
    return phanso(tuso * P2.tuso,mauso * P2.mauso);
}
phanso phanso::operator/(phanso P2) const{
    if(P2.tuso = 0){
        cout<<"khong the chia cho 0";
        return phanso(); // quay tro ve khoi tao mac dinh , tuso = 0, mauso = 1
    }
    return phanso(tuso * P2.mauso, mauso * P2.tuso);
}

// cac phuong thuc so sanh
bool phanso::operator==(phanso P2) const{
    return (tuso == P2.tuso && mauso == P2.mauso);
}
bool phanso::operator>(phanso P2) const{
    int left = tuso * P2.mauso;
    int right = mauso * P2.tuso;
    return left > right;
}
bool phanso::operator<(phanso P2) const{
    int left = tuso * P2.mauso;
    int right = mauso * P2.tuso;
    return left < right;
}

// nhap input va output

istream& operator>>(istream& is,phanso& P2){
    cout<<"Nhap tu so va mau so cho phan so: ";
    do{
        is>>P2.tuso>>P2.mauso;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        if(P2.mauso == 0){
            cout<<"Mau so khong duoc bang khong, vui long nhap lai";
            continue;
        }
        // sau khi nhap cac input hop le thi rut gon cac phan so tren
        P2.rutgon();
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,phanso P2){
    if(P2.mauso == 1){
        os<<P2.tuso;
    }
    else{
        os<<P2.tuso<<"/"<<P2.mauso;
    }
    return os;
}