#include <bits/stdc++.h>
#include "sinhvien.h"
using namespace std;

sinhvien::sinhvien(){
    masinhvien= "123";
    hoten = "";
    diachi = "";
    tinchi = 0;
    diemtb = 0.0;
}

sinhvien::sinhvien(string masinhvien,string hoten,string diachi,int tinchi,double diemtb){
    this->masinhvien = masinhvien;
    this->hoten = hoten;
    this->diachi = diachi;
    this->tinchi = tinchi;
    this->diemtb = diemtb;
}

void sinhvien::nhap(){
    cout<<"Nhap thong tin sinh vien: "<<endl;
    cout<<"Nhap ma so sinh vien: "; cin>>masinhvien;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Nhap ho va ten: "; getline(cin,hoten);
    cout<<"Nhap dia chi: "; getline(cin,diachi); 
    cout<<"Nhap tong so tin chi: "; cin>>tinchi;
    cout<<"Nhap diem trung binh: ";
    do{
        cin>>diemtb;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(diemtb < 0 || diemtb > 10){
            cout<<"Diem trung binh khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}

void sinhvien::xuat(){
    cout<<"Thong tin cua sinh vien la: "<<endl;
    cout<<"MSSV: "<<masinhvien<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Dia chi: "<<diachi<<endl;
    cout<<"Tong so tin chi: "<<tinchi<<" tin"<<endl;
    cout<<"Diem trung binh: "<<diemtb<<endl;
}
