#include <bits/stdc++.h>
#include "giaodichdat.h"
using namespace std;

// constructor mac dinh
// khoi tao giao dich dat voi loai dat la ky tu rong
dat::dat(){
    loaidat = ' ';
}

// constructor co tham so
// input: thong tin giao dich co ban kem loai dat (A, B hoac C)
dat::dat(string magiaodich,string ngaygiaodich,long long dongia,double dientich,char loaidat) : giaodich(magiaodich,ngaygiaodich,dongia,dientich){
    this->loaidat = loaidat;
}

// tao ban sao doi tuong dat (deep copy)
// output: con tro toi doi tuong dat moi co cung gia tri
dat* dat::clone(){
    return new dat(*this);
}

// tinh thanh tien giao dich dat
// output: tong tien theo don vi dong
// giai thuat: dat loai A nhan he so 1.5, loai B va C tinh theo gia goc, loai khac tra ve 0
long double dat::Thanhtien(){
    if(loaidat == 'A'){
        return dientich * dongia * 1.5;
    }
    else if(loaidat == 'B' || loaidat == 'C'){
        return dientich * dongia;
    }
    return 0;
}

// nhap thong tin giao dich dat tu ban phim
// giai thuat: goi giaodich::nhap() cho phan chung, sau do nhap them loai dat
void dat::nhap(){
    cout<<"Nhap thong tin giao dich dat: "<<endl;
    giaodich::nhap();
    cout<<"Nhap thong tin loai dat: "; cin>>loaidat;
}

// in thong tin giao dich dat ra man hinh
// giai thuat: goi giaodich::xuat() cho phan chung, in them loai dat va thanh tien
void dat::xuat(){
    cout<<"Thong tin giao dich dat: "<<endl;
    giaodich::xuat();
    cout<<"Loai dat: "<<loaidat<<endl;
    cout<<"Thanh tien: "<<Thanhtien()<<endl;
}