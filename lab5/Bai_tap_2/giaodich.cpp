#include <bits/stdc++.h>
#include "giaodich.h"
#define ll long long
using namespace std;

// constructor mac dinh
// khoi tao giao dich voi cac truong rong va gia tri 0
giaodich::giaodich(){
    magiaodich = "";
    ngaygiaodich = "";
    dongia = 0;
    dientich = 0.0;
}

// constructor co tham so
// input: ma giao dich, ngay giao dich (dang chuoi "dd mm yyyy"), don gia va dien tich
giaodich::giaodich(string magiaodich,string ngaygiaodich,ll dongia,double dientich){
    this->magiaodich = magiaodich;
    this->ngaygiaodich = ngaygiaodich;
    this->dongia = dongia;
    this->dientich= dientich;
}

// lay ngay tu chuoi ngay giao dich
// output: so nguyen la ngay trong thang
// giai thuat: dung stringstream de tach chuoi "dd mm yyyy" thanh 3 phan, lay phan ngay
int giaodich::getNgay(){
    stringstream ss(ngaygiaodich);
    int ngay,thang,nam;
    ss >> ngay >> thang >> nam;
    return ngay;
}

// lay thang tu chuoi ngay giao dich
// output: so nguyen la thang trong nam
// giai thuat: tuong tu getNgay, tach chuoi va lay phan thang
int giaodich::getThang(){
    stringstream ss(ngaygiaodich);
    int ngay,thang,nam;
    ss >> ngay >> thang >> nam;
    return thang;
}

// lay nam tu chuoi ngay giao dich
// output: so nguyen la nam
// giai thuat: tuong tu getNgay, tach chuoi va lay phan nam
int giaodich::getNam(){
    stringstream ss(ngaygiaodich);
    int ngay,thang,nam;
    ss >> ngay >> thang >> nam;
    return nam;
}

giaodich::~giaodich(){} // destructor ao, cho phep lop con tu giai phong bo nho dung cach

// nhap thong tin giao dich co ban tu ban phim
// giai thuat: doc ma giao dich, validate ngay thang nam bang cach tach chuoi qua stringstream,
//             kiem tra tung truong hop khong hop le truoc khi chap nhan
void giaodich::nhap(){
    cout<<"Nhap thong tin giao dich: \n";
    cout<<"Nhap ma giao dich: "; cin>>magiaodich;
    cout<<"Nhap ngay giao dich: ";
    int ngay,thang,nam;
    cin.ignore();
    do{
        getline(cin,ngaygiaodich);
        stringstream ss(ngaygiaodich);
        ss >> ngay >> thang >> nam;
        if(ngay < 1 || ngay > 31){
            cout<<"Ngay khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        else if(thang < 1 || thang > 12){
            cout<<"Thang khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        else if(nam < 1 || nam > 2026){
            cout<<"Nam khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap don gia: "; 
    do{
        cin>>dongia;
        if(cin.fail()){
            cout<<"Sai kieu du lieu cho don gia, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
    cout<<"Nhap dien tich giao dich: "; cin>>dientich;
}

// in thong tin co ban cua giao dich ra man hinh
void giaodich::xuat(){
    cout<<"Thong tin giao dich: "<<endl;
    cout<<"Ma giao dich: "<<magiaodich<<endl;
    cout<<"Ngay giao dich: "<<ngaygiaodich<<endl;
    cout<<"Don gia: "<<dongia<<endl;
    cout<<"Dien tich: "<<dientich<<endl;
}