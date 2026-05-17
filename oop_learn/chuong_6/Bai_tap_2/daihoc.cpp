#include <bits/stdc++.h>
#include "daihoc.h"
using namespace std;

daihoc::daihoc(){
    luanvan = "";
    diemluan = 0.0;
}

daihoc::daihoc(string masinhvien,string hoten,string diachi,int tinchi,double diemtb,string luanvan,double diemluan) : sinhvien(masinhvien,hoten,diachi,tinchi,diemtb){
    this->luanvan = luanvan;
    this->diemluan = diemluan;
}

bool daihoc::extracheck(){
    return tinchi >= 170 && diemtb >= 5 && diemluan >= 5;
}

void daihoc::nhap(){
    sinhvien::nhap();
    cin.ignore();
    cout<<"Nhap Ten cua bai luan van: "; getline(cin,luanvan);
    cout<<"Nhap diem luan: "; 
    do{
        cin>>diemluan;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(diemluan < 0 || diemluan > 10){
            cout<<"DIem luan khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}

void daihoc::xuat(){
    sinhvien::xuat();
    cout<<"Bai luan: "<<luanvan<<endl;
    cout<<"Diem luan: "<<diemluan<<endl;
}