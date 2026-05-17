#include <bits/stdc++.h>
#include "Vanphong.h"
using namespace std;

vanphong::vanphong(){
    ngaylamviec = 0;
}

vanphong::vanphong(string hoten,Date D1,int ngaylamviec) : nhanvien(hoten,D1){
    this->ngaylamviec = ngaylamviec;
}

long long vanphong::Tinhluong(){
    return ngaylamviec * 100000;
}

void vanphong::nhap(){
    cout<<"Nhap thong tin nhan vien van phong: "<<endl;
    nhanvien::nhap();
    cout<<"Nhap so ngay lam viec: ";
    do{
        cin>>ngaylamviec;
        if(cin.fail()){
            cout<<"Nhap sai kieu du lieu cho ngay lam viec"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(ngaylamviec < 0){
            cout<<"Ngay lam viec khong duoc am"<<endl;
            continue;
        }
        break;
    }while(true);
}


void vanphong::xuat(){
    cout<<"Thong tin nhan vien van phong: "<<endl;
    nhanvien::xuat();
    cout<<"Ngay lam viec: "<<ngaylamviec<<endl;
    cout<<"Luong: "<<Tinhluong()<<endl;
}