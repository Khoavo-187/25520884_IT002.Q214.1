#include <bits/stdc++.h>
#include "Date.h"
#include "cNhanVienSX.h"
#include "cListcNhanVienSX.h"
#include "cListcNhanVienSX.cpp"
#include "cNhanVienSX.cpp"
#include "Date.cpp"
using namespace std;

int main(){
    cListcNhanVienSX N1;
    cout<<"Nhap danh sach nhan vien san xuat: "<<endl;
    // ham nhap thong tin nhan vien
    N1.nhap();

    // ham xuat danh sach nhan vien
    N1.xuat();
    
    // nhan vien san xuat co luong thap nhat
    cout<<"Luong thap nhat la: "<<N1.min_luong()<<endl;
    // ham xuat ra thong tin luong thap nhat cua nhan vien
    N1.luongthapnhat();

    cout<<endl;
    cout<<"Tong luong ma cong ty phai tra cho tat ca nhan vien la: "<<N1.total_salary()<<endl;

    // nhan vien cao tuoi nhat
    N1.caotuoi();

    cout<<"Danh sach nhan vien san xuat khi da sap xep tang dan la: "<<endl;
    N1.tangdan();
    N1.xuat();
    return 0;
}