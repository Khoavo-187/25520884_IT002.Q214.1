#include <bits/stdc++.h>
#include "CTime.h"
using namespace std;

void CTIME::normalize(){
    // xu li cac truong hop bi tran so giay , so phut, so gio neu vuot qua so toi da
    int total = gio * 3600 + phut * 60 + giay; 

    // luon luon xu li ngay sau khi cap nhat lai thoi gian khi nap chong toan tu
    gio = total / 3600;
    phut = (total % 3600) / 60;
    giay = total % 60;
}

void CTIME::set(int gio,int phut,int giay){
    this->gio = gio;
    this->phut= phut;
    this->giay= giay;
    normalize();
}

CTIME::CTIME(int gio,int phut,int giay){
    set(gio,phut,giay);
}

// cac toan tu cong tru cac so nguyen giay

CTIME CTIME::operator+(int s) const{
    return CTIME(gio,phut,giay + s); // cong thuc tra ve thoi gian sau khi cong so nguyen s
    // goi constructor cua CTIME de cong vao s , sau do la normalize lai
}
CTIME CTIME::operator-(int s) const{
    return CTIME(gio,phut,giay - s); // cong thuc tra ve thoi gian sau khi tru so nguyen s
}

CTIME CTIME::operator++() {
    // su dung prefix de cong thang vao thoi gian
    giay++;
    normalize(); // do day la ham nam trong private nen se tu dong lay input trong ham class de tu xu li cac input
    return *this; // tra ve thoi gian hien tai sau khi da cap nhat va duoc normalize
}

CTIME CTIME::operator--() {
    giay--;
    normalize();
    return *this; // tuong tu nhu phep tinh cong 1 o tren
}

// nhap cac phuong thuc display

istream& operator>>(istream& is,CTIME &T1){
    cout<<"Nhap thoi gian gio , phut,giay cho input: ";
    do{
        is>>T1.gio>>T1.phut>>T1.giay;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        if(T1.gio < 0 || T1.phut < 0 || T1.giay < 0){
            cout << "Khong duoc nhap so am, nhap lai: ";
            continue;
        }
        if(T1.gio > 23 || T1.phut > 59 || T1.giay > 59){
            cout << "Gia tri vuot qua gioi han, nhap lai: ";
            continue;
        }
        // truoc khi dong lai thi ta yeu cau phai normalize 1 lan nua cac moc thoi gian 1 cach hop li
        T1.normalize();
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,CTIME T1){
    string second = to_string(T1.giay);
    string min = to_string(T1.phut);
    string hour = to_string(T1.gio);

    if(second.length() != 2){
        second = '0' + second;
    }
    if(min.length() != 2){
        min = '0' + min;
    }
    if(hour.length() != 2){
        hour = '0' + hour;
    }
    os<<hour<<":"<<min<<":"<<second;
    return os;
} 