#include <bits/stdc++.h>
#include "caodang.h"
using namespace std;

// constructor mac dinh
// khoi tao sinh vien cao dang voi diem tot nghiep bang 0
caodang::caodang(){
    diemtotnghiep = 0.0;
}

// constructor co tham so
// input: thong tin co ban cua sinh vien kem diem thi tot nghiep
caodang::caodang(string MSSV,string hoten,string diachi,int tinchi,double diemtb,double diemtotnghiep) : he(MSSV,hoten,diachi,tinchi,diemtb){
    this->diemtotnghiep = diemtotnghiep;
}

// kiem tra dieu kien tot nghiep he cao dang
// output: true neu du dieu kien, false neu thieu bat ky dieu kien nao
// giai thuat: can du ca 3 dieu kien: >= 120 tin chi, diem tb >= 5 va diem thi tot nghiep >= 5
bool caodang::totnghiep(){
    return tinchi >= 120 && diemtb >= 5 && diemtotnghiep >= 5;
}

// tao ban sao doi tuong caodang (deep copy)
// output: con tro toi doi tuong caodang moi co cung gia tri
caodang* caodang::clone(){
    return new caodang(*this);
}

// nhap thong tin sinh vien cao dang tu ban phim
// giai thuat: goi he::nhap() cho phan chung, sau do nhap them diem thi tot nghiep voi validate kieu du lieu
void caodang::nhap(){
    cout<<"Nhap sinh vien he cao dang: "<<endl;
    he::nhap();
    cout<<"Diem thi tot nghiep: ";
    do{
        cin>>diemtotnghiep;
        if(cin.fail()){
            cout<<"Sai kieu du lieu cho diem tot nghiep"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
}

// in thong tin sinh vien cao dang ra man hinh kem ket qua tot nghiep
// giai thuat: goi he::xuat() cho phan chung, in them diem tot nghiep va goi totnghiep() de xac dinh trang thai
void caodang::xuat(){
    cout<<"Thong tin sinh vine he cao dang"<<endl;
    he::xuat();
    cout<<"Diem tot nghiep: "<<diemtotnghiep<<endl;
    if(totnghiep()){
        cout<<"Sinh vien du dieu kien tot nghiep he cao dang"<<endl;
    }
    else{
        cout<<"Sinh vien khong du dieu kien tot nghiep"<<endl;
    }
}