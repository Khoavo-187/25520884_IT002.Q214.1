#include <bits/stdc++.h>
#include "Date.h"
using namespace std;


bool namnhuan(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }
    else{
        return false;
    }
}
int Date::songaytrongthang(){
    // tao mang cac ngay toi da theo tung thang
    int arrthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month == 2 && namnhuan(year)){
        return 29;
    }
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
            cout<<"thang "<<month<<" co "<<songaytrongthang()<<" ngay"<<endl;
            continue;
        }
        break;
    }while(true);
}

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

