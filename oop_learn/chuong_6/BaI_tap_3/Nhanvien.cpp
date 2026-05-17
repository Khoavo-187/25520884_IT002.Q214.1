#include <bits/stdc++.h>
#include "Nhanvien.h"
using namespace std;


bool check(string n){
    for(char c : n){
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
Nhanvien::Nhanvien(){
    manhanvien = "";
    hoten = "";
    age = 0;
    tel = "0000000000";
    email = "";
}

Nhanvien::Nhanvien(string manhanvien,string hoten,int age,string tel,string email,double luongcoban){
    this->manhanvien = manhanvien;
    this->hoten = hoten;
    this->age = age;
    this->tel = tel;
    this->email = email;
    this->luongcoban = luongcoban;
}
Nhanvien::~Nhanvien(){}
// nhapxuat cac input output cua doi tuong lop cha nhan vien
void Nhanvien::nhap(){
    cout<<"Nhap thong tin co ban cho nhan vien: "<<endl;
    cout<<"Nhap ma nhan vien: "; cin>>manhanvien;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Nhap ho va ten cho nhan vien: "; getline(cin,hoten);
    cout<<"Nhap tuoi cho nhan vien: ";
    do{
        cin>>age;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, vui long nhap lai: "<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(age <= 0 || age > 100){
            cout<<"So tuoi nhap vao khong dung tieu chuan, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap so dien thoai cho nhan vien: ";
    do{
        cin>>tel;
        if(!check(tel)){
            cout<<"So dien thoai nhap khong hop le,nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Nhap email cho nhan vien: "; getline(cin,email);
    cout<<"Nhap luong co ban cho nhan vien: ";
    do{
        cin>>luongcoban;
        if(cin.fail() || luongcoban <= 0){
            cout<<"Nhap sai input khong hop le cho luong co ban, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
}

void Nhanvien::xuat(){
    cout<<"Thong tin nhan vien la: "<<endl;
    cout<<"Ma nhan vien: "<<manhanvien<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Tuoi: "<<age<<endl;
    cout<<"So dien thoai: "<<tel<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Luong co ban: "<<luongcoban<<" dong"<<endl;
}