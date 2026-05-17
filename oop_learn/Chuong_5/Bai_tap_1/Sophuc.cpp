#include <bits/stdc++.h>
#include "Sophuc.h"
using namespace std;

// bat dau voi cac constructor va set
sophuc::sophuc(){
    thuc = 0.0;
    ao = 0.0;
}
// bat dau voi set cho tung phan thuc va ao
void sophuc::set(double thuc,double ao){  // phan de nhap vao so thuc va ao
    this->thuc = thuc;
    this->ao = ao;
}

sophuc::sophuc(double thuc,double ao){
    set(thuc,ao);
}
sophuc::sophuc(double thuc){
    set(thuc,0.0); // so phuc dac biet
}

sophuc sophuc::operator+(sophuc P2) const{
    return sophuc(thuc + P2.thuc,ao + P2.ao);
}

sophuc sophuc::operator-(sophuc P2) const{
    return sophuc(thuc - P2.thuc,ao - P2.ao);
}
sophuc sophuc::operator*(sophuc P2) const{
    return sophuc(thuc * P2.thuc - ao * P2.ao,thuc * P2.ao + ao * P2.thuc);
}
sophuc sophuc::operator/(sophuc P2) const{
    return sophuc((thuc * P2.thuc + ao * P2.ao) / (pow(P2.thuc,2)  + pow(P2.ao,2)),(ao * P2.thuc - thuc * P2.ao) / (pow(P2.thuc,2)  + pow(P2.ao,2))); 
} 
bool sophuc::operator==(sophuc P2) const{
    // so sanh 2 sophuc neu bang nhau
    if(thuc == P2.thuc && ao == P2.ao){
        return true;
    }
    return false;
}

// phep nhap cac input vao
istream& operator>>(istream& is,sophuc &P){
    do{
        is>>P.thuc>>P.ao; // nhap cac input hop le cho thuc va ao
        if(is.fail()){
            cout<<"input nhap khong hop le,  vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,sophuc P){
    os<<"so phuc la: ";
    if(P.ao < 0){
        os<<P.thuc<<"-"<<-P.ao<<"i";
    }
    else if(P.ao == 0){
        os<<P.thuc;
    }
    else{
        os<<P.thuc<<"+"<<P.ao<<"i";
    }
    return os;
}