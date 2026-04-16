#include <bits/stdc++.h>
#include "cDaThuc.h"
using namespace std;


cDaThuc::cDaThuc(){
    bac = 0; // cho bac = 0 trong truong hop da thuc co bac = 0
    heso = new double[bac+1];
    heso[0] = 1;
    // Khoi tao mac dinh voi bac = 0 va heso ban dau = 1
}

cDaThuc::cDaThuc(int bac){
    this->bac = bac;
    heso = new double[bac+1]; // do phan heso chay tu bac -> 0
    for(int i = 0;i <= bac;i++){
        heso[i] = 0; // cho khoi tao truoc tung phan tu bang 0
    }
}
//copy constructor
cDaThuc::cDaThuc(const cDaThuc& other){
    bac = other.bac;
    heso = new double[bac+1]; // cap phat mot vung nho moi, doc lap
    for(int i  =0;i <= bac;i++){
        heso[i] =  other.heso[i]; // sao chep gia tri ban sao qua
    }
}

cDaThuc::~cDaThuc(){
    delete[] heso;
}

void cDaThuc::nhap(){
    cout<<"nhap so bac cho da thuc: "; cin>>bac;
    delete[] heso; // dau tien la xoa truoc tu bo nho dem tranh truong hop overflow
    heso = new double[bac + 1];
    for(int i = 0;i <= bac;i++){
        do{
            cout<<"nhap he so thu "<<i + 1<<" cho bac: ";
            cin>>heso[i];
            // xet nhung truong hop nhap sai input cho heso
            if(cin.fail()){
                cout<<"he so nhap vao khong hop le,vui long nhap lai";
                continue;
            }
            break;
        }while(true);
    }
}

void cDaThuc::xuat(){
    cout<<"Da thuc P(x): ";
    bool isfound = false;

    for(int i = 0;i <= bac;i++){
        if(heso[i] == 0) continue; // neu ta co gia tri heso = 0 thi skip qua heso tiep theo
        if(isfound){
            cout<<(heso[i] > 0 ? "+" : "-")<<" "; // ta xem xet lieu heso thu i la am hay duong de co the dua ra dau chinh xac
        }
        else{
            if(heso[i] < 0){
                cout<<"-";
            }
            isfound = true; // danh dau he so dau tien neu la so am thi cout ra - con khong thi giu nguyen
            // sau do la danh dau isfound = true de tranh so sanh khong can thiet
        }

        double giatri = abs(heso[i]); // tra ve gia tri tuong ung tai he so i
        int new_bac = bac - i; // dua ve bac cao nhat sau do quay lui ve
        if(new_bac == 0){
            cout<<giatri;
        }
        else if(new_bac == 1){
            if(giatri != 1) cout<<giatri;
            cout<<"x"<<" ";
        }
        else{
            if(giatri != 1) cout<<giatri;
            cout<<"x^"<<new_bac<<" ";
        }
        
    }
}

// nhap int x tinh
long double cDaThuc::giatri(int x){
    long double  total = 0;
    for(int i = 0;i <= bac;i++){
        total += (heso[i] * pow(x,(bac - i)));
    }
    return total;
}
cDaThuc cDaThuc::tong(cDaThuc D2){
    // tim bac cao nhat cua 1 trong 2 dathuc , da thuc goc va da thuc D2
    int max_bac = max(bac,D2.bac);
    cDaThuc res(max_bac); // tao ban sao res de sao luu gia tri tinh toan D1 + D2
    for(int i = 0;i <= bac;i++){
        int n = bac - i; 
        res.heso[max_bac - n] = res.heso[max_bac - n] + heso[i];
    }
    for(int i = 0;i <= D2.bac;i++){
        int n = D2.bac - i;
        res.heso[max_bac - n] = res.heso[max_bac - n] + D2.heso[i];
    }
    return res; // sau do nhiem vu cua copy constructor tao ban sao res tra ve 
}

cDaThuc cDaThuc::hieu(cDaThuc D2){
    int max_bac = max(bac,D2.bac);
    cDaThuc res(max_bac);
    for(int i = 0;i <= bac;i++){
        int n = bac - i; 
        res.heso[max_bac - n] += heso[i];
    }
    for(int i = 0;i <= D2.bac;i++){
        int n = D2.bac - i;
        res.heso[max_bac - n] = res.heso[max_bac - n] - D2.heso[i];
    }
    return res;
}