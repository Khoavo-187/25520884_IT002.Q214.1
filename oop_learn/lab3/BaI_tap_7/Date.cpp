#include <bits/stdc++.h>
#include "Date.h"
using namespace std;


bool namnhuan(int year){
    /*
    Ham: namnhuan(int)
    Input : year (int) - nam can kiem tra
    Output: bool - true neu la nam nhuan, false neu khong phai
    Giai thuat: Nam nhuan khi chia het cho 400, hoac chia het cho 4 nhung khong chia het cho 100.
 */
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }
    else{
        return false;
    }
}
/*
Phuong thuc: songaytrongthang()
Input : Khong co tham so (su dung month, year cua doi tuong hien tai)
Output: int - so ngay toi da trong thang (28, 29, 30 hoac 31)
Giai thuat: Khai bao mang arrthang[] chua so ngay tuong ung 12 thang.
            Kiem tra rieng truong hop thang 2 cua nam nhuan => tra ve 29.
            Con lai tra ve arrthang[month - 1].
 */
int Date::songaytrongthang(){
    
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

/*
Phuong thuc: nhap()
Input : Nguoi dung nhap tu ban phim theo thu tu: day month year (cach nhau dau cach)
Output: void - cap nhat truc tiep gia tri day, month, year cho doi tuong
Giai thuat: Vong lap do-while kiem tra tung buoc:
B1. Kiem tra kieu du lieu bang cin.fail(), clear bo dem neu sai.
B2. Kiem tra pham vi day (1-31), month (1-12), year (1-2027).
B3. Kiem tra ngay co vuot qua so ngay thuc te trong thang khong.
Neu bat ky buoc nao that bai, thong bao va yeu cau nhap lai.
 */
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
//chuyen het ve dang string va yeu cau xuat ra duoi dang "DD/MM/YYYY" sao cho dung format 
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
    cout<<ngay<<"/"<<thang<<"/"<<nam;
}

