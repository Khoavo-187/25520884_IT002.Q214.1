#include <bits/stdc++.h>
#include "Diem.h"

using namespace std;

bool kiemtrainp(string s){
    for(char c : s){
        if(c == '-'){
            continue;
        }
        if(c == '.'){
            continue;
        }
        if(!(isdigit(c))){
            return false;
        }
    }
    return true;
}
Diem::Diem(){
    // phuong thuc khoi tao mac dinh
    x = 0.0;
    y = 0.0;
}
Diem::Diem(double x,double y){
    // phuong thuc khoi tao co tham so
    this->x = x;
    this->y = y;
}
// ham setter de tinh tien tam giac
void Diem::SetX(double x){
    this->x = x;
}
void Diem::SetY(double y){
    this->y = y;
}
// lay cac so x va y getter
double Diem::GetX(){
    return x;
}
double Diem::GetY(){
    return y;
}
void Diem::nhap(){
    // dau tien la chuyen cac hoanh do va tung do ve string de de xac dinh kieem tra input
    string dx = to_string(x);
    string dy = to_string(y);
    do{
        cout<<"nhap hoanh do va tung do cho dinh: "<<endl;
        cin>>dx>>dy;
        // kiem tra xem lieu co dung voi yeu cau nhap vao tu ham bool kiemtrainp khong
        // khong chap nhan cac ki tu chu cai nao
        if(!(kiemtrainp(dx)) || !(kiemtrainp(dy))){
            cout<<"nhap sai input, vui long nhap lai"<<endl;
            continue;
        }
        // neu thoa thi bien doi string -> double == stod()
        x = stod(dx);
        y= stod(dy);
        break;
    }while(true);
}

void Diem::xuat(){
    cout<<"hoanh do va tung do cua dinh la: "<<"("<<x<<";"<<y<<")"<<endl;
}