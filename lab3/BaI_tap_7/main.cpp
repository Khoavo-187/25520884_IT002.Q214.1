#include <bits/stdc++.h>
#include "Date.h"
#include "cNhanVienVP.h"
#include "cListNhanVien.h"
#include "cListNhanVien.cpp"
#include "cNhanVienVP.cpp"
#include "Date.cpp"
using namespace std;

int main(){
    cListNhanVien N1;
    cout<<"Nhap danh sach nhan vien: "<<endl;
    // ham nhap thong tin nhan vien
    N1.nhap();

    // ham xuat danh sach nhan vien
    N1.xuat();
    
    // nhan vien van phong co luong cao nhat
    cout<<"Luong cao nhat la: "<<N1.max_salary()<<endl;
    // ham xuat ra thong tin luong cao nhat cua nhan vien
    N1.luongcaonhat();

    cout<<endl;
    cout<<"Tong luong ma cong ty phai tra cho tat ca nhan vien la: "<<N1.total_salary()<<endl;

    // nhan vien cao tuoi nhat
    N1.old_age();


    cout<<"Danh sach nhan vien khi da sap xep tang dan la: ";
    N1.tangdan();
    N1.xuat();
    return 0;
}