#include <bits/stdc++.h>
#include "Nhanvien.h"
using namespace std;

// kiem tra ten hop le
// input: chuoi ho ten can kiem tra
// output: true neu hop le, false neu chua ky tu so hoac chuoi rong
// giai thuat: duyet tung ky tu, bo qua khoang trang, tra ve false ngay khi gap chu so
bool kiemtraten(string s){
    if(s.empty()) return false;
    for(char c : s){
        if(c == ' '){
            continue;
        }
        if(isdigit(c)){
            return false;
        }
    }
    return true;
}

// getter lay ngay sinh cua nhan vien
// output: doi tuong Date la ngay sinh
Date nhanvien::getDate(){
    return D1;
}

// constructor mac dinh
// khoi tao nhan vien voi ho ten rong va ngay sinh mac dinh
nhanvien::nhanvien(){
    hoten = "";
    D1 = Date();
}

// constructor co tham so
// input: ho ten va ngay sinh can khoi tao
nhanvien::nhanvien(string hoten,Date D1){
    this->hoten = hoten;
    this->D1 = D1;
}

nhanvien::~nhanvien(){}

// nhap thong tin co ban cua nhan vien tu ban phim
// giai thuat: dung getline de lay ca ho ten co dau cach, validate ten qua ham kiemtraten,
//             sau do goi D1.nhap() de lay ngay sinh
void nhanvien::nhap(){
    cout<<"NHap thong tin nhan vien: "<<endl;
    cout<<"NHap ho va ten: "; 
    cin.ignore();
    do{
        getline(cin,hoten);
        if(!kiemtraten(hoten)){
            cout<<"Ho ten khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap ngay thang nam sinh: "; D1.nhap();
}

// in thong tin co ban cua nhan vien ra man hinh
void nhanvien::xuat(){
    cout<<"Thong tin nhan vien: "<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Ngay sinh: ";
    D1.xuat();
    cout<<endl;
}