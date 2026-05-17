#include <bits/stdc++.h>
#include "cNhanVienSX.h"
#include "Date.h"
using namespace std;

/*
Ham: kiemtraten(string)
Input : s (string) - chuoi ho ten can kiem tra
Output: bool - true neu hop le, false neu khong hop le
Giai thuat: Duyet tung ki tu trong chuoi.
            Neu gap dau cach thi bo qua (continue).
            Neu gap ki tu khong phai chu cai (isalpha = false) thi tra ve false.
            Neu duyet het ma khong gap ki tu sai thi tra ve true.
            Truong hop chuoi rong => tra ve false ngay.
 */
bool kiemtraten(string s){
    if(s.empty()) return false;

    for(char c : s){
        if(c == ' '){
            continue;
        }     
        if(!isalpha(c)){
            return false;
        }
    }
    return true;
}
// ham khoi tao mac dinh

cNhanVienSX::cNhanVienSX(){
    ID = "";
    hoten = "";
    ngaysinh = Date();
    sanpham = 0;
    dongia = 0;
}

// ham khoi tao co tham so
cNhanVienSX::cNhanVienSX(string ID,string hoten,Date ngaysinh,int sanpham,int dongia){
    this->ID = ID;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->sanpham = sanpham;
    this->dongia = dongia;
}

// cac ham set 
// Input: Lay tu tham so ben trong ham gia tri muon thay cho object ben trong ham class
void cNhanVienSX::setID(string ID){
    this->ID = ID;
}
void cNhanVienSX::setName(string hoten){
    this->hoten = hoten;
}
void cNhanVienSX::setDate(Date ngaysinh){
    this->ngaysinh = ngaysinh;
}
void cNhanVienSX::setSP(int sanpham){
    this->sanpham = sanpham;
}
void cNhanVienSX::setGia(int dongia){
    this->dongia = dongia;
}

// cac ham get
// khong co input nhung se tra ve gia tri hien tai cua thuoc tinh minh dam luu truoc do
string cNhanVienSX::getID(){
    return ID;
}
string cNhanVienSX::getName(){
    return hoten;
}
Date cNhanVienSX::getDate(){
    return ngaysinh;
}
int cNhanVienSX::getSP(){
    return sanpham;
}
int cNhanVienSX::getGia(){
    return dongia;
}

 
/*
Phuong thuc: nhap()
Input : Nguoi dung nhap tu ban phim: ID, ho ten, ngay sinh, san pham, don gia
Output: void - cap nhat day du cac thuoc tinh cho doi tuong
Giai thuat:
B1. Doc ID bang cin, goi cin.ignore() de xoa '\n' con lai trong bo dem.
B2. Doc ho ten bang getline(), goi kiemtraten() kiem tra hop le,
yeu cau nhap lai neu chuoi rong hoac chua ki tu khong phai chu cai.
B3. Goi ngaysinh.nhap() de doc va kiem tra ngay thang nam sinh.
B4. cin gia tri cua san pham va don gia , goi cin.fail() de check xem lieu  input co sai
kieu du lieu khong. Dong thoi loai truong hop sanpham < 1 va don gia < 1
 */
void cNhanVienSX::nhap(){
    cout<<"Nhap thong tin cho cac nhan vien san xuat: "<<endl;
    cout<<"Nhap ID: "; cin>>ID;
    cin.ignore();
    do{
        cout<<"nhap ho va ten: "; getline(cin,hoten);
        if(!kiemtraten(hoten)){
            cout<<"Ten nhap sai input , yeu cau nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap ngay sinh: "; ngaysinh.nhap();
    cout<<endl;
    do{
        cout<<"nhap so luong san pham duoc va don gia cho moi san pham: ";
        cin>>sanpham>>dongia;
        if(cin.fail()){
            cout<<"Input nhap sai kieu du lieu vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(sanpham < 1 || dongia < 1){
            cout<<"Cac input co gia tri khong duoc be hon 1, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}

// ham tinh luong cho moi nhan vien
// lay so san pham * don gia tung san pham
long long cNhanVienSX::salary(){
    return sanpham * dongia;
}

// ham xuat ra thong tin cho tung nhan vien san xuat
void cNhanVienSX::xuat(){
    cout<<"Thong tin nhan vien: "<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Ngay sinh: ";
    ngaysinh.xuat();
    cout<<endl;
    cout<<"So san pham: "<<sanpham<<" cai"<<endl;
    cout<<"Don gia: "<<dongia<<" dong/sanpham"<<endl;
    cout<<"Luong: "<<salary()<<" dong"<<endl;
}