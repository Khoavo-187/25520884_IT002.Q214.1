#include <bits/stdc++.h>
#include "Date.h"
using namespace std;


bool namnhuan(int year){
    // ham kiem tra nam nhuan
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }
    else{
        return false;
    }
}
int Date::songaytrongthang(){
    // tao mang cac ngay toi da theo tung thang
    // dua vao thang tuong ung voi tung index trong mang ngay
    int arrthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month == 2 && namnhuan(year)){
        return 29;
    }
    //tra ve ngay tuong ung
    return arrthang[month - 1];
}

Date::Date(){
    day = 1;
    month = 1;
    year = 2026;
}

Date::Date(int day,int month,int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::nhap(){
    do{
        cin>>day>>month>>year;
        if(cin.fail()){
            // neu truong hop nhap du lieu cho ngay thang nam sai kieu thi yeu cau nhap lai
            cout<<"nhap lai input cho ngay thang va nam, vui long nhap lai"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(day < 0 || day > 31){
            cout<<"nhap ngay khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(month < 0 || month > 12){
            cout<<"thang khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(year < 0 || year > 2027){
            cout<<"nam khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(day > songaytrongthang()){
            // xet truong hop neu ngay nhap vao vuot qua ngay cho phep theo thang do thi yeu cau nhap lai
            cout<<"thang "<<month<<" co "<<songaytrongthang()<<" ngay"<<endl;
            continue;
        }
        break;
    }while(true);
}


// ham so sanh ngay thang nam sinh
int Date::sosanh(Date D2){
    // so sanh tra ve gia tri ngay sinh som hon theo tung nam, thang , ngay theo thu tu
    // tra ve 1 neu ngay sinh cua D2 > ngay sinh lay input trong ham class hien tai
    // tra ve -1 neu ngay sinh hien tai lon hon khi so voi D2
    if(year < D2.year) return 1;
    if(year > D2.year) return -1;

    if(month < D2.month) return 1;
    if(month > D2.month) return -1;

    if(day < D2.day) return 1;
    if(day > D2.day) return -1;

    return 0; // tra ve 0 neu ngay sinh giong nhau ==> cung do tuoi
}
// ham xuat
//chuyen het ve dang string va yeu cau xuat ra duoi dang "00/00/0000" sao cho dung format 
void Date::xuat(){
    string ngay = to_string(day);
    string thang = to_string(month);
    string nam = to_string(year);

    if(ngay.length() == 1){
        ngay = '0' + ngay;
    } 
    if(thang.length() == 1){
        thang = '0' + thang;
    }
    cout<<"ngay thang nam sinh: ";
    cout<<ngay<<"/"<<thang<<"/"<<nam;
}

