#include <bits/stdc++.h>
#include "Sanxuat.h"
using namespace std;

// constructor mac dinh
// khoi tao nhan vien san xuat voi luong co ban va so san pham bang 0
sanxuat::sanxuat(){
    luongcoban = 0;
    sanpham = 0;
}

// constructor co tham so
// input: ho ten, ngay sinh, luong co ban va so san pham lam duoc
sanxuat::sanxuat(string hoten,Date D1,int luongcoban,int sanpham) : nhanvien(hoten,D1){
    this->luongcoban  = luongcoban;
    this->sanpham = sanpham;
}

// tinh luong nhan vien san xuat
// output: tong tien luong theo don vi dong
// giai thuat: luong = luong co ban + so san pham * 5000 dong/san pham
long long sanxuat::Tinhluong(){
    return luongcoban + sanpham * 5000;
}

// nhap thong tin nhan vien san xuat tu ban phim
// giai thuat: goi nhanvien::nhap() cho phan thong tin chung, sau do nhap them
//             luong co ban va so san pham, co validate gia tri am va sai kieu du lieu
void sanxuat::nhap(){
    cout<<"Nhap thong tin cua nhan vien san xuat: "<<endl;
    nhanvien::nhap();
    cout<<"Nhap luong co ban: ";
    do{
        cin>>luongcoban;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(luongcoban < 0){
            cout<<"Luong khong duoc be hon 0"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap so san pham: ";
    do{
        cin>>sanpham;
        if(cin.fail()){
            cout<<"Sai kieu du lieu, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(sanpham < 0){
            cout<<"san pham khong duoc be hon 0"<<endl;
            continue;
        }
        break;
    }while(true);
}

// in thong tin nhan vien san xuat ra man hinh
// giai thuat: goi nhanvien::xuat() cho phan chung, in them luong co ban, so san pham va tong tien luong
void sanxuat::xuat(){
    cout<<"Thong tin cua nhan vien san xuat: "<<endl;
    nhanvien::xuat();
    cout<<"Luong co ban: "<<luongcoban<<" dong"<<endl;
    cout<<"So san pham: "<<sanpham<<endl;
    cout<<"Tien luong: "<<Tinhluong()<<" dong"<<endl;
}