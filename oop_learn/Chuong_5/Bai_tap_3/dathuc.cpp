#include <bits/stdc++.h>
#include "dathuc.h"
using namespace std;


dathuc::dathuc(int bac){
    this->bac = bac;
    heso = new double[bac + 1](); // khoi tao lai tat ca bang 0
 }
dathuc::dathuc(const dathuc& p) {
    bac = p.bac;
    heso = new double[bac + 1];
    for(int i = 0;i <= bac;i++){
        heso[i] = p.heso[i];
    }
}
dathuc::~dathuc(){
    delete[] heso;
}

// nhap cac input
istream& operator>>(istream& is,dathuc &p){
    cout<<"nhap so luong bac muon nhap vao: "; is>>p.bac;
    delete[] p.heso;
    p.heso = new double[p.bac + 1];
    for(int i = 0;i <= p.bac;i++){
        cout<<"nhap cac he so thu "<<i + 1<<" la: ";
        is>>p.heso[i];
    }
    return is;
}

ostream& operator<<(ostream &os,dathuc p){
    os<<"da thuc P(x): ";
    bool isfound = true;
    for(int i = 0;i <= p.bac;i++){
        if(p.heso[i] == 0) continue;
        if(!isfound){
            // neu khong phai he so dau tien thi xet dau cho he so tiep theo
            os<<(p.heso[i] > 0 ? "+" : "-")<<" "; // xet dau cua he so truoc no
        }
        else{
            if(p.heso[i] < 0){
                os<<"-";
            }
            isfound = false;
        }
        double giatri = abs(p.heso[i]);
        int bac = p.bac - i; // dua vao bac cao nhat xong lui ve
        if(bac == 0){
            os<<giatri;
        }
        else if(bac == 1){
            if(giatri != 1) os<<giatri;
            os<<"x"<<" ";
        }
        else{
            if(giatri != 1) os<<giatri;
            os<<"x^"<<bac<<" ";
        }
    }
    return os;
}

//tinh gia tri cua da thuc khi biet so x
long double dathuc::giatri(int x){
    long double total = 0;
    for(int i = 0;i <= bac;i++){
        total += (heso[i] * pow(x,bac - i));
    }
    return total;
}
// cac gia tri operator cua da thuc
dathuc dathuc::operator+(dathuc p) const{
    // tao 1 da thuc phu de luu gia tri ban dau
    int max_num = max(bac,p.bac);
    dathuc res(max_num);
    for(int i = 0;i <= bac;i++){
        int n = bac - i;
        res.heso[max_num - n] += heso[i]; 
    }
    for(int i = 0;i <= p.bac;i++){
        int n = p.bac - i;
        res.heso[max_num - n] += p.heso[i]; 
    }
    return res;
}
dathuc dathuc::operator-(dathuc p) const{
    int max_val = max(bac,p.bac);
    dathuc res(max_val);
    for(int i = 0;i <= bac;i++){
        int n = bac - i;
        res.heso[max_val - n] += heso[i];
    }
    for(int i = 0;i <= p.bac;i++){
        int n = p.bac - i;
        res.heso[max_val - n] -= p.heso[i];
    }
    return res;
}