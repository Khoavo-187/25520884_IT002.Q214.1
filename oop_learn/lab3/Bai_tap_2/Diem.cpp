#include <bits/stdc++.h>
#include "Diem.h"

using namespace std;

bool kiemtra(string s){
    for(char c : s){
        if(c == '.'){
            continue;
        }
        if(c == '-'){
            continue;
        }
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
// constryuctor mac dinh
Diem::Diem(){
    x = 0.0;
    y = 0.0;
}
// costructor co tham so 
Diem::Diem(double x,double y){
    this->x = x;
    this->y = y;
}

// setter
void Diem::SetX(double x){
    this->x = x;
}

void Diem::SetY(double y){
    this->y = y;
}

// getter
double Diem::GetX(){
    return x;
}

double Diem::GetY(){
    return y;
}

void Diem::nhapdiem(){
    cout<<"nhap toa do cho tung diem: "<<endl;
    string dx,dy;
    do{
        cin>>dx>>dy;
        if(!kiemtra(dx) || !kiemtra(dy)){
            cout<<"input khong hop le, vui long nhap lai";
            continue;
        }
        x = stod(dx);
        y = stod(dy);
        break;
    }while(true);
}

void Diem::xuatdiem(){
    cout<<"toa do diem cua dinh la: "<<"("<<x<<";"<<y<<")"<<endl;
}