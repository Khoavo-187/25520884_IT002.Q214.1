#include <bits/stdc++.h>
#include "Date.h"
#include "cNhanVienVP.h"
using namespace std;

bool kiemtraten(string s){
    if(s.empty()) return false;
    for(char c : s){
        if(c == ' '){
            continue;
            // neu gap dau cach thi skip qua ki tu khac
        }
        // kiem tra xem lieu char c no co phai la chu cai hay khong
        if(!isalpha(c)){
            // neu c khong phai la ki tu chu cai thi return false
            return false;
        }
    }
    return true;
}
// ham khoi tao tham so mac dinh cho class cNhanVienVP
cNhanVienVP::cNhanVienVP(){
    ID = "";
    hoten = "";
    ngaysinh = Date(); // Date() la tham so mac dinh cho ngaysinh
    salary = 0
}
// ham khoi tao co tham so 
cNhanVienVP::cNhanVienVP(string ID,string hoten,Date ngaysinh,int salary){
    this->ID = ID;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->salary = salary;
}

// cac ham setter
void cNhanVienVP::setID(string ID){
    this->ID = ID;
}
void cNhanVienVP::setName(string hoten){
    this->hoten = hoten;
}
void cNhanVienVP::setDate(Date ngaysinh){
    this->ngaysinh  = ngaysinh;
}
void cNhanVienVP::setLuong(int salary){
    this->salary = salary;
}

// cac ham getter
string cNhanVienVP::getID(){
    return ID;
}
string cNhanVienVP::getName(){
    return hoten;
}
Date cNhanVienVP::getDate(){
    return ngaysinh;
}
int cNhanVienVP::getSalary(){
    return salary;
}



void cNhanVienVP::nhap(){
    cout<<"nhap thong tin cho nhan vien: "<<endl;
    cout<<"nhap ID: "; cin>>ID;
    cin.ignore();
    do{
        cout<<"nhap ho va ten: "; getline(cin,hoten);
        if(!kiemtraten(hoten)){
            cout<<"ho va ten khong hop le, vui long nhap lai"<<endl;
            continue;
        }

    }while(true);

    cout<<"nhap ngay thang nam sinh: "; ngaysinh.nhap();
    do{
        cout<<"Nhap luong: "; cin>>salary;
        if(cin.fail()){
            // neu nhap saim kieu du lieu cho tien luong thi yeu cau nhap lai va bao hieu la fail
            cout<<"Luong khong hop le, vui long nhap lai"<<endl;
            cin.clear(); // bat clear de tat trang thai fail
            cin.ignore(1000,'\n'); // xoa bo nho dem tranh gay overflow
            continue;
        }
    }while(true);
}

void cNhanVienVP::xuat(){
    cout<<"Thong tin nhan vien: "<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Ngay sinh: ";
    ngaysinh.xuat();
    cout<<endl;
    cout<<"Luong: "<<salary<<endl;
}