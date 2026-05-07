#include <bits/stdc++.h>
#include "sophuc.h"
using namespace std;

void sophuc::set(double thuc,double ao){
    this->thuc = thuc;
    this->ao = ao;
}
sophuc::sophuc(double thuc,double ao){
    set(thuc,ao); // su dung phuong thuc set de khoi tao so phuc
}


// bat dau nhap cac toan tu operator
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
    return sophuc((thuc * P2.thuc + ao * P2.ao) / (pow(P2.thuc,2) + pow(P2.ao,2)), (P2.thuc * ao - thuc * P2.ao) / (pow(P2.thuc,2) + pow(P2.ao,2)));
}

// cac phuong thuc tra ve xem lieu xem coi 2 so phuc co bang nhau hay khong

bool sophuc::operator==(sophuc P2) const{
    return (thuc == P2.thuc && ao == P2.ao);
    
}

bool sophuc::operator!=(sophuc P2) const{
    return (thuc != P2.thuc || ao != P2.ao);
}

istream& operator>>(istream& is,sophuc &P2){
    cout<<"Nhap phan thuc va phan ao cho so phuc: ";
    do{
        is>>P2.thuc>>P2.ao;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai"<<endl;
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,sophuc P2){
    if(P2.ao < 0){
        os<<P2.thuc<<" - "<<-P2.ao<<"i";
    }
    else if(P2.ao == 0){
        os<<P2.thuc;
    }
    else{
        os<<P2.thuc<<" + "<<P2.ao<<"i";
    }
    return os;
}
