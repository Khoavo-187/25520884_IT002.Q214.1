#include <bits/stdc++.h>
#include "Vanphong.h"
using namespace std;

// constructor mac dinh
// khoi tao nhan vien van phong voi so ngay lam viec bang 0
vanphong::vanphong(){
    ngaylamviec = 0;
}

// constructor co tham so
// input: ho ten, ngay sinh va so ngay lam viec trong thang
vanphong::vanphong(string hoten,Date D1,int ngaylamviec) : nhanvien(hoten,D1){
    this->ngaylamviec = ngaylamviec;
}

vanphong* vanphong::clone(){
    return new vanphong(*this);
}
// tinh luong nhan vien van phong
// output: tong tien luong theo don vi dong
// giai thuat: luong = so ngay lam viec * 100.000 dong/ngay
long long vanphong::Tinhluong(){
    return ngaylamviec * 100000;
}

// nhap thong tin nhan vien van phong tu ban phim
// giai thuat: goi nhanvien::nhap() cho phan chung, sau do nhap so ngay lam viec
//             co kiem tra gia tri am va sai kieu du lieu
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

// in thong tin nhan vien van phong ra man hinh
// giai thuat: goi nhanvien::xuat() cho phan chung, in them so ngay lam viec va tong luong
void vanphong::xuat(){
    cout<<"Thong tin nhan vien van phong: "<<endl;
    nhanvien::xuat();
    cout<<"Ngay lam viec: "<<ngaylamviec<<endl;
    cout<<"Luong: "<<Tinhluong()<<endl;
}