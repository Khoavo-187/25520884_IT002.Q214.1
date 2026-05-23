#include <bits/stdc++.h>
#include "canhochungcu.h"
using namespace std;

// constructor mac dinh
// khoi tao can ho chung cu voi ma can rong va vi tri tang bang 0
chungcu::chungcu(){
    macan = "";
    vitri = 0;
}

// constructor co tham so
// input: thong tin giao dich co ban kem ma can ho va vi tri tang
chungcu::chungcu(string magiaodich,string ngaygiaodich,long long dongia,double dientich,string macan,int vitri) : giaodich(magiaodich,ngaygiaodich,dongia,dientich){
    this->macan = macan;
    this->vitri = vitri;
}

// tao ban sao doi tuong chungcu (deep copy)
// output: con tro toi doi tuong chungcu moi co cung gia tri
chungcu* chungcu::clone(){
    return new chungcu(*this);
}

// tinh thanh tien giao dich can ho chung cu
// output: tong tien theo don vi dong
// giai thuat: tang 1 (tret) nhan he so 2, tu tang 15 tro len nhan he so 1.2 (view cao), tang 2-14 tinh gia goc
long double chungcu::Thanhtien(){
    if(vitri == 1) return dientich * dongia * 2;
    else if(vitri >= 15) return dientich * dongia * 1.2;
    else return dientich * dongia;
}

// nhap thong tin can ho chung cu tu ban phim
// giai thuat: goi giaodich::nhap() cho phan chung, nhap them ma can va vi tri tang,
//             validate vi tri tang phai la so nguyen duong
void chungcu::nhap(){
    cout<<"Nhap thong tin chung cu: "<<endl;
    giaodich::nhap();
    cout<<"Nhap ma can: "; cin>>macan;
    cout<<"Nhap vi tri tang: ";
    do{
        cin>>vitri;
        if(cin.fail()){
            cout<<"sai kieu du lieu cho vi tri tang, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(vitri <= 0){
            cout<<"Vi tri tang khong hop le, nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}

// in thong tin can ho chung cu ra man hinh
// giai thuat: goi giaodich::xuat() cho phan chung, in them ma can va vi tri tang
void chungcu::xuat(){
    cout<<"Thong tin chung cu can ho: "<<endl;
    giaodich::xuat();
    cout<<"Ma can: "<<macan<<endl;
    cout<<"Vi tri tang: "<<vitri<<endl;
}