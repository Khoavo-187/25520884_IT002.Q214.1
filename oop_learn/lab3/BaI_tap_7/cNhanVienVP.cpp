#include <bits/stdc++.h>
#include "Date.h"
#include "cNhanVienVP.h"
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
// ham khoi tao tham so mac dinh cho class cNhanVienVP
cNhanVienVP::cNhanVienVP(){
    ID = "";
    hoten = "";
    ngaysinh = Date(); // Date() la tham so mac dinh cho ngaysinh
    salary = 0;
}
// ham khoi tao co tham so 
cNhanVienVP::cNhanVienVP(string ID,string hoten,Date ngaysinh,int salary){
    this->ID = ID;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->salary = salary;
}

// cac ham setter
// Voi moi ham setter thi se luon thay input tu thong tin moi dua vao tham so moi minh chen vao
// Sau do thi cap nhat lai(setter) cho doi tuong nhan vien minh muon set
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

// Doi voi cac ham getter thi yeu cau tra ve thong tin cua nhan vien minh muon biet la gi 
// Cu the muon biet so tien hay ID thi phai thong qua cac ham getter de tra ve thong tin
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


 
/*
Phuong thuc: nhap()
Input : Nguoi dung nhap tu ban phim: ID, ho ten, ngay sinh, luong
Output: void - cap nhat day du cac thuoc tinh cho doi tuong
Giai thuat:
B1. Doc ID bang cin, goi cin.ignore() de xoa '\n' con lai trong bo dem.
B2. Doc ho ten bang getline(), goi kiemtraten() kiem tra hop le,
yeu cau nhap lai neu chuoi rong hoac chua ki tu khong phai chu cai.
B3. Goi ngaysinh.nhap() de doc va kiem tra ngay thang nam sinh.
B4. Doc salary trong vong lap do-while:
- Kiem tra cin.fail() neu nhap sai kieu, clear bo dem va nhap lai.
- Kiem tra salary >= 0, bao loi neu am.
 */
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
        break;
    }while(true);

    cout<<"nhap ngay thang nam sinh: "; ngaysinh.nhap();
    do{
        cout<<"Nhap luong: "; cin>>salary;
        if(cin.fail()){
            cout<<"Luong khong hop le, vui long nhap lai"<<endl;
            cin.clear(); 
            cin.ignore(1000,'\n'); 
            continue;
        }
        if(salary < 0){
            cout<<"Luong khong duoc be hon 0"<<endl;
            continue;
        }
        break;
    }while(true);
}

// Tuong tu thi cung xuat ra tat ca thong tin cua nhan vien theo thu tu ben duoi
void cNhanVienVP::xuat(){
    cout<<"Thong tin nhan vien: "<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Ngay sinh: ";
    ngaysinh.xuat();
    cout<<endl;
    cout<<"Luong: "<<salary<<endl;
}