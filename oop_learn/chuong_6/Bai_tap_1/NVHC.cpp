#include <bits/stdc++.h>
#include "NVHC.h"
using namespace std;


hanhchinh::hanhchinh(){
    ngaylamviec = 0;
    tien1ngay = 0.0;
    giolamthem = 0.0;
    dongia = 0.0;
}
hanhchinh::hanhchinh(string macanbo,string hoten,string gioitinh,int ngaylamviec,double tien1ngay,double giolamthem,double dongia) : CBVC(macanbo,hoten,gioitinh){
    this->ngaylamviec = ngaylamviec;
    this->tien1ngay = tien1ngay;
    this->giolamthem = giolamthem;
    this->dongia = dongia;
}

double hanhchinh::Tinhluong(){
    return ngaylamviec * tien1ngay + giolamthem * dongia;
}

void hanhchinh::nhap(){
    CBVC::nhap();
    cout<<"Nhap so ngay lam viec: "; cin>>ngaylamviec;
    cout<<"Nhap tien cong 1 ngay: "; cin>>tien1ngay;
    cout<<"Nhap so gio lam them: "; cin>>giolamthem;
    cout<<"Nhap don gia: "; cin>>dongia;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void hanhchinh::xuat(){
    CBVC::xuat();
    cout<<"So Ngay lam viec: "<<ngaylamviec<<endl;
    cout<<"Tien cong 1 ngay: "<<tien1ngay<<endl;
    cout<<"So gio lam them: "<<giolamthem<<endl;
    cout<<"Don gia: "<<dongia<<" dong"<<endl;
    cout<<"Luong: "<<Tinhluong()<<" dong"<<endl;
}