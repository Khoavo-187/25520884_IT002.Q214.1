#include <bits/stdc++.h>
#include "GV.h"
using namespace std;

giangvien::giangvien(){
    gioday = 0.0;
    nghiencuu = 0.0;
    dongia = 0.0;
}

giangvien::giangvien(string macanbo,string hoten,string gioitinh,double gioday,double nghiencuu,double dongia) : CBVC(macanbo,hoten,gioitinh){
    this->gioday = gioday;
    this->nghiencuu = nghiencuu;
    this->dongia = dongia;
}

void giangvien::nhap(){
    CBVC::nhap(); // nhap so lieu theo tung nhan vien thong tin co ban
    cout<<"Nhap so gio day: "; cin>>gioday;
    cout<<"Nhap so gio nghien cuu: "; cin>>nghiencuu;
    cout<<"Nhap don gia: "; cin>>dongia;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void giangvien::xuat(){
    CBVC::xuat();
    cout<<"So gio day: "<<gioday<<endl;
    cout<<"So gio nghien cuu: "<<nghiencuu<<endl;
    cout<<"Don gia: "<<dongia<<endl;
    cout<<"Luong: "<<Tinhluong()<<" dong";
}

double giangvien::Tinhluong(){
    return (gioday + nghiencuu) * dongia;
}
