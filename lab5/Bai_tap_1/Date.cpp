#include <bits/stdc++.h>
#include "Date.h"
using namespace std;

// kiem tra nam nhuan
// input: nam can kiem tra
// output: true neu la nam nhuan, false neu khong phai
// giai thuat: nam nhuan khi chia het cho 400, hoac chia het cho 4 nhung khong chia het cho 100
bool namnhuan(int nam){
    if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
        return true;
    }
    return false;
}

// constructor mac dinh
// khoi tao ngay thang nam ve gia tri 1/1/1
Date::Date(){
    day =  1;
    month = 1;
    year = 1;
}

// constructor co tham so
// input: ngay, thang, nam can khoi tao
// output: doi tuong Date voi gia tri tuong ung
Date::Date(int day,int month,int year){
    this->day  =day;
    this->month = month;
    this->year = year;
}

// tinh so ngay trong thang
// output: so nguyen la so ngay cua thang hien tai
// giai thuat: dua vao mang so ngay co dinh cua tung thang, xu ly rieng thang 2 neu la nam nhuan thi tra ve 29
int Date::songaytrongthang(){
    int arrthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(namnhuan(year) && month == 2){
        return 29;
    }
    return arrthang[month - 1];
}

// so sanh 2 ngay de xac dinh ai lon tuoi hon
// input: D2 la ngay sinh can so sanh voi doi tuong hien tai
// output: 1 neu D2 lon tuoi hon (sinh truoc), -1 neu D2 nho tuoi hon, 0 neu bang nhau
// giai thuat: so sanh lan luot tu nam -> thang -> ngay, ai co nam nho hon la nguoi sinh truoc (lon tuoi hon)
int Date::sosanh(Date D2){
    if(year > D2.year) return 1;
    if(year < D2.year) return -1;

    if(month < D2.month) return 1;
    if(month > D2.month) return -1; 

    if(day < D2.day) return 1;
    if(day > D2.day) return -1;

    else return 0;
}   

// nhap ngay thang nam tu ban phim
// giai thuat: vong lap do-while de validate input, kiem tra tung truong hop ngay/thang/nam khong hop le
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

// in ngay thang nam ra man hinh theo dinh dang dd/mm/yyyy
// giai thuat: chuyen so nguyen sang chuoi, them so 0 phia truoc neu chi co 1 chu so
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