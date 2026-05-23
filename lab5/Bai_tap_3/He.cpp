#include <bits/stdc++.h>
#include "He.h"
using namespace std;

// kiem tra ten hop le
// input: chuoi ho ten can kiem tra
// output: true neu hop le, false neu chua ky tu khong phai chu cai hoac chuoi rong
// giai thuat: duyet tung ky tu, bo qua khoang trang, tra ve false ngay khi gap ky tu khong phai alpha
bool checkname(string s){
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

// constructor mac dinh
// khoi tao sinh vien voi cac truong rong va gia tri 0
he::he(){
    MSSV = "";
    hoten = "";
    diachi = "";
    tinchi = 0;
    diemtb = 0.0;
}

he::~he(){}

// getter lay diem trung binh cua sinh vien
// output: diem trung binh kieu double
double he::getDiem(){
    return diemtb;
}

// constructor co tham so
// input: MSSV, ho ten, dia chi, tong tin chi va diem trung binh
he::he(string MSSV,string hoten,string diachi,int tinchi,double diemtb){
    this->MSSV = MSSV;
    this->hoten = hoten;
    this->diachi = diachi;
    this->tinchi = tinchi;
    this->diemtb = diemtb;
}

// nhap thong tin co ban cua sinh vien tu ban phim
// giai thuat: dung getline cho ho ten va dia chi vi co the chua khoang trang,
//             validate ho ten qua checkname(), tin chi va diem tb doc truc tiep bang cin
void he::nhap(){
    cout<<"Nhap thong tin cua sinh vien: "<<endl;
    cout<<"Nhap MSSV: "; cin>>MSSV;
    cout<<"Nhap ho va ten: "; 
    cin.ignore();
    do{
        getline(cin,hoten);
        if(!checkname(hoten)){
            cout<<"Ho va ten khong hop le, nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cin.ignore();
    cout<<"Nhap dia chi: ";
    getline(cin,diachi);
    cout<<"NHap tong so tin chi dang ki: "; 
    cin>>tinchi;
    cout<<"Nhap diem trung binh: ";
    cin>>diemtb;
}

// in thong tin co ban cua sinh vien ra man hinh
void he::xuat(){
    cout<<"Thong tin cua sinh vien: "<<endl;
    cout<<"MSSV: "<<MSSV<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Dia chi: "<<diachi<<endl;
    cout<<"tong so tin chi: "<<tinchi<<endl;
    cout<<"diem trung binh: "<<diemtb<<endl;
}