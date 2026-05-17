#include <bits/stdc++.h>
#include "CBVC.h"
using namespace std;


CBVC::CBVC(){
    macanbo = "ID000";
    hoten = "";
    gioitinh = "gay";
    }

CBVC::CBVC(string macanbo,string hoten,string gioitinh){
    this->macanbo = macanbo;
    this->hoten = hoten;
    this->gioitinh = gioitinh;
}

void CBVC::nhap(){
    cout<<"Nhap thong tin cho can bo vien chuc: "<<endl;
    cout<<"Nhap ma can bo nhan vien: "; cin>>macanbo;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Nhap Ho va ten: "; getline(cin,hoten);
    cout<<"Nhap gioi tinh: "; getline(cin,gioitinh);
}

void CBVC::xuat(){
    cout<<"Ma can bo: "<<macanbo<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Gioi tinh: "<<gioitinh<<endl;
}


