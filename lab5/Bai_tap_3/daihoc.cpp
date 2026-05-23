#include <bits/stdc++.h>
#include "daihoc.h"
using namespace std;

// constructor mac dinh
// khoi tao sinh vien dai hoc voi ten luan van rong va diem luan van bang 0
daihoc::daihoc(){
    tenluanvan = "";
    diemluan = 0.0;
}

// constructor co tham so
// input: thong tin co ban cua sinh vien kem ten luan van va diem bao ve luan van
daihoc::daihoc(string MSSV,string hoten,string diachi,int tinchi,double diemtb,string tenluanvan,double diemluan) : he(MSSV,hoten,diachi,tinchi,diemtb){
    this->tenluanvan = tenluanvan;
    this->diemluan = diemluan;
}

// kiem tra dieu kien tot nghiep he dai hoc
// output: true neu du dieu kien, false neu thieu bat ky dieu kien nao
// giai thuat: can du ca 3 dieu kien: >= 170 tin chi, diem tb >= 5 va diem luan van >= 5
bool daihoc::totnghiep(){
    return tinchi >= 170 && diemtb >= 5 && diemluan >= 5;
}

// tao ban sao doi tuong daihoc (deep copy)
// output: con tro toi doi tuong daihoc moi co cung gia tri
daihoc* daihoc::clone(){
    return new daihoc(*this);
}

// nhap thong tin sinh vien dai hoc tu ban phim
// giai thuat: goi he::nhap() cho phan chung, dung getline cho ten luan van vi co the chua khoang trang,
//             sau do nhap diem luan van voi validate kieu du lieu
void daihoc::nhap(){
    cout<<"Nhap thong tin sinh vien dai hoc: "<<endl;
    he::nhap();
    cin.ignore();
    cout<<"Nhap ten luan van: ";
    getline(cin,tenluanvan);
    cout<<"Nhap diem luan van: ";
    do{
        cin>>diemluan;
        if(cin.fail()){
            cout<<"Sai kieu du lieu cho diem luan van, nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
}

// in thong tin sinh vien dai hoc ra man hinh kem ket qua tot nghiep
// giai thuat: goi he::xuat() cho phan chung, in them ten luan van, diem va goi totnghiep() de xac dinh trang thai
void daihoc::xuat(){
    cout<<"Thong tin sinh vien dai hoc: "<<endl;
    he::xuat();
    cout<<"Ten luan van: "<<tenluanvan<<endl;
    cout<<"Diem luan van: "<<diemluan<<endl;
    if(totnghiep()){
        cout<<"Sinh vien nay du dieu kien tot nghiep dai hoc"<<endl;
    }
    else{
        cout<<"Sinh vien nay khong du dieu kien tot nghiep"<<endl;
    }
}