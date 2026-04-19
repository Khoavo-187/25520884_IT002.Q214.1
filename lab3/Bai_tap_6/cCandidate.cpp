#include <bits/stdc++.h>
#include "Date.h"
#include "cCandidate.h"

using namespace std;

cCandidate::cCandidate(){
    ID = "";
    hoten = "";
    ngaysinh = Date();
    toan = 0.0;
    van = 0.0;
    anh = 0.0;
}

cCandidate::cCandidate(string ID,string hoten,Date ngaysinh,double toan,double van,double anh){
    this->ID = ID;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->toan = toan;
    this->van = van;
    this->anh =anh;
}

void cCandidate::nhap(){
    cout<<"nhap ID cho thi sinh: "; cin>>ID;
    cin.ignore();
    cout<<"nhap ten cho thi sinh: "; getline(cin,hoten);

    cout<<"nhap ngay thang nam: "; ngaysinh.nhap();
    do{
        cout<<"nhap gia tri cho toan van anh: ";
        cin>>toan>>van>>anh;
        if(cin.fail()){
            cout<<"input cua toan, van , anh khong hop le, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(toan > 10 || toan < 0){
            cout<<"diem toan khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        if(van > 10 || van < 0){
            cout<<"diem van khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        if(anh > 10 || anh < 0){
            cout<<"diem anh khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}


double cCandidate::max_diem(){
    // tinh tong tu 3 diem cua toan van anh, toi da la 30 diem
    return toan + van + anh;
}
void cCandidate::xuat(){
    cout<<"thong tin cua thi sinh: "<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    ngaysinh.xuat();
    cout<<endl;
    cout<<"Diem toan:"<<toan<<endl;
    cout<<"Diem van: "<<van<<endl;
    cout<<"Diem anh "<<anh<<endl;
    cout<<"Tong diem 3 mon la: "<<max_diem()<<endl;
}