#include <bits/stdc++.h>
#include "Date.h"
using namespace std;

bool namnhuan(int nam){
    if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
        return true;
    }
    return false;
}
Date::Date(){
    day =  1;
    month = 1;
    year = 1;
}
Date::Date(int day,int month,int year){
    this->day  =day;
    this->month = month;
    this->year = year;
}

int Date::songaytrongthang(){
    int arrthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(namnhuan(year) && month == 2){
        return 29;
    }
    return arrthang[month - 1];
}

int Date::sosanh(Date D2){
    // dau tien la so sanh nam voi nhau truoc
    // cai nay dang so sanh la so 1 la D2 > D1 tuoi
    if(year > D2.year) return 1;
    if(year < D2.year) return -1;

    if(month < D2.month) return 1;
    if(month > D2.month) return -1; 

    if(day < D2.day) return 1;
    if(day > D2.day) return -1;

    else return 0;
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
        if(day < 1 || day > 31){
            cout<<"nhap ngay khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(month < 1 || month > 12){
            cout<<"thang khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(year < 1 || year > 2027){
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
        ngay = "0" + ngay;
    } 
    if(thang.length() == 1){
        thang = "0" + thang;
    }
    cout<<ngay<<"/"<<thang<<"/"<<nam;
}
