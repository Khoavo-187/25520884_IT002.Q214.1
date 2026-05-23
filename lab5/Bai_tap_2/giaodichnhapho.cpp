#include <bits/stdc++.h>
#include "giaodichnhapho.h"
using namespace std;

// constructor mac dinh
// khoi tao giao dich nha pho voi loai nha va dia chi rong
nhapho::nhapho(){
    loainha = "";
    diachi = "";
}

// constructor co tham so
// input: thong tin giao dich co ban kem loai nha ("cao cap" hoac "thuong") va dia chi
nhapho::nhapho(string magiaodich,string ngaygiaodich,long long dongia,double dientich,string loainha,string diachi) : giaodich(magiaodich,ngaygiaodich,dongia,dientich){
    this->loainha = loainha;
    this->diachi= diachi;
}

// tinh thanh tien giao dich nha pho
// output: tong tien theo don vi dong
// giai thuat: nha cao cap tinh theo gia goc, nha thuong giam 10% (he so 0.9), loai khac tra ve 0
long double nhapho::Thanhtien(){
    if(loainha == "cao cap") return dientich * dongia;
    else if(loainha == "thuong") return dientich * dongia * 0.9;
    return 0;
}

// tao ban sao doi tuong nhapho (deep copy)
// output: con tro toi doi tuong nhapho moi co cung gia tri
nhapho* nhapho::clone(){
    return new nhapho(*this);
}

// nhap thong tin giao dich nha pho tu ban phim
// giai thuat: goi giaodich::nhap() cho phan chung, validate loai nha chi chap nhan "cao cap" hoac "thuong",
//             sau do dung getline de lay dia chi co the chua khoang trang
void nhapho::nhap(){
    cout<<"Nhap thong tin giao dich nha pho: "<<endl;
    giaodich::nhap();
    cout<<"Nhap loai nha: ";
    do{
        cin.ignore();
        getline(cin,loainha);
        if(loainha != "cao cap" && loainha != "thuong"){
            cout<<"Nha khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cin.ignore();
    cout<<"Nhap dia chi giao dich: ";
    getline(cin,diachi);
}

// in thong tin giao dich nha pho ra man hinh
// giai thuat: goi giaodich::xuat() cho phan chung, in them loai nha, dia chi va thanh tien
void nhapho::xuat(){
    cout<<"Thong tin cua giao dich nha pho: "<<endl;
    giaodich::xuat();
    cout<<"Loai nha: "<<loainha<<endl;
    cout<<"Dia chi: "<<diachi<<endl;
    cout<<"Thanh tien: "<<Thanhtien()<<" dong"<<endl;
}