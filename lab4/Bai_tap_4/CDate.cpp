#include <bits/stdc++.h>
#include "CDate.h"
using namespace std;


// Hàm namnhuan() (private, kiểm tra nam qua nhiều input khác nhau)
// Input: Lấy input nam mới nhập vào để kiểm tra
// output: Trả về true hoac false liệu có phải năm nhuận
// giải thuật: Năm nhuận nếu nam % 400 == 0 hoặc nam % 4 == 0 và nam % 100 != 0
bool CDate::namnhuan() const{
    if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
        return true;
    }
    return false;
}

// Hàm ngaytrongthang()(private, kiểm tra từng ngày hợp lệ theo thang từ input)
// input: Lấy từ input
// output: Trả về đúng số ngày tương úng theo thang từ input
// giải thuật: tạo mảng list gồm các số ngày từ tháng 1 -> 12 sau đó lấy thang tu input làm index trả về số ngày tối đa của tháng đó
int CDate::ngaytrongthang() const{
    
    int arrthang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(thang == 2 && namnhuan()){
        return 29;
    }
    return arrthang[thang - 1];
}

void CDate::set(int ngay,int thang,int nam){
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
    normalize();
}

CDate::CDate(int ngay,int thang,int nam){
    set(ngay,thang,nam);
}

// ham chuan hoa so ngay,thang , nam hop le sau khi tinh toan

void CDate::normalize(){
    //điều kiện check nếu số ngày vượt qua ngày cho phép trong thang đó sau khi cộng
    while(ngay > ngaytrongthang()){
        // lấy ngày dư đó trừ ngày tối đa ra ngày của tháng mới --> thang++(cập nhật lại tháng)
        ngay -= ngaytrongthang();
        thang++;
        // Nếu vượt quá 12 tháng thì nam++
        if(thang > 12){
            thang = 1;
            nam++;
        }
    }
    while(ngay <= 0){
        // xu li trong truong hop so ngay bi lui ve(so ngay bi tru di)
        thang--; // neu ngay âm thì lùi thang trong input về
        // nếu tháng < 1 thì lùi năm 
        if(thang < 1){
            thang = 12;
            nam--;
        }
        // cập nhật lại ngày sau khi lùi về tháng mới bằng cách: ngay += ngaytrongthang (thang moi sau khi cap nhat)
        ngay += ngaytrongthang();
    }
}

// hàm cộng ngày 
// input: Lấy input lúc mới nhập vào
// output: Trả về ngày sau khi được cộng s ngày
// giải thuật: Lấy ngày + s ngày sau đó gọi lại hàm khởi tạo CDate để normalize() ngày hợp lệ 
CDate CDate::operator+(int s) const{ 
    return CDate(ngay + s,thang,nam);
}

// hàm trừ
// tương tự như hàm cộng ở trên nhưng đây thì lấy ngày - s
CDate CDate::operator-(int s) const{
    return CDate(ngay - s,thang,nam);
}

// prefix cong ngay hien tai len 1
CDate& CDate::operator++(){
    // tra ve gia tri cua ngay neu cong dan len 1
    ngay++;
    normalize();
    return *this; // chuan hoa xong thi sau do chuan hoa va tra ve gia tri hien tai cua ngay
}

CDate& CDate::operator--(){
    ngay--;
    normalize();
    return *this;
}


//Hàm tính tổng ngày 
// input: Lấy input từ lúc mới nhập vào
// output: Trả về tổng số ngày mới vừa nhập , tất cả từ ngày tháng năm --> ngày
// Giải thuât:Để tính toán khoảng cách giữa các ngày với nhau thì lấy tổng ngày theo từng năm, từ đầu đến hiện tại
// sau đó lấy tổng cả 2 trừ đi là ra được khoảng cách 2 ngày

int CDate::totaldays() const{
    // de tinh duoc khoang cach giua 2 ngay bat ki thi minh tinh tong ngay tu ngay thang nam sau do lay ca 2 tru di
    int new_arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    long long total1 = 0;
    total1 = 365 * (nam - 1); // tinh moc thoi gian truoc nam dang xet

    //cong thuc de xet nam nhuan  truoc nam y la total += (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400
    total1 = total1 + ((nam - 1) / 4) - ((nam - 1) / 100) + ((nam-1) / 400);

    //sau do cong lan luot ngay va thang 
    for(int i = 0;i < thang - 1;i++){
        total1 += new_arr[i];
    }
    // tinh kha nang truong hop neu nam dang xet la nam nhuan va co thang 2 thi ngay tang len 1
    if(namnhuan() && thang > 2){
        total1++;
    }
    total1 += ngay;

    return total1;
}

// hàm trả về khoảng cách giữa 2 ngày
int CDate::operator-(const CDate& D2) const{
    return abs(D2.totaldays() - totaldays());
}

istream& operator>>(istream& is,CDate &D2){
    cout<<"Nhap ngay thang nam cho input: ";
    do{
        is>>D2.ngay>>D2.thang>>D2.nam;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        if(D2.ngay < 1 || D2.ngay > 31){
            cout<<"Ngay khong hop le, nhap lai"<<endl;
            continue;
        }
        if(D2.thang < 1 || D2.thang > 12){
            cout<<"Thang khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        if(D2.nam < 1 || D2.nam > 2026){
            cout<<"Nam khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(D2.ngay > D2.ngaytrongthang()){
            cout<<"thang "<<D2.thang<<" co "<<D2.ngaytrongthang()<<" ngay, nhap lai"<<endl;
            continue;
        }
        D2.normalize();
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,CDate D2){
    string day = to_string(D2.ngay);
    string month = to_string(D2.thang);

    if(day.length() != 2){
        day = '0' + day;
    }
    if(month.length() != 2){
        month = '0' + month;
    }
    os<<day<<"/"<<month<<"/"<<D2.nam;
    return os;
}

