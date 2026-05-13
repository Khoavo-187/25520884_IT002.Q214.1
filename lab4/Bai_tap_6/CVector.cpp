#include <bits/stdc++.h>
#include "CVector.h"
using namespace std;

CVector::CVector(){
    n = 0;
    vector = nullptr; // neu khong co bat ki phan tu nao thi loai bo
}

CVector::CVector(int n){
    this->n = n;
    vector = new double[n];
    for(int i = 0;i < n;i++){
        vector[i] = 0.0;
    }
}
CVector::CVector(const CVector& other){
    n = other.n;
    vector = new double[n];
    for(int i = 0;i < n;i++){
        vector[i] = other.vector[i];
    }
}

CVector::~CVector(){
    delete[] vector;
}


// cac cong thuc tinh toan giua cac chieu trong vector

CVector CVector::operator+(CVector V2) const{
    if(n != V2.n){
        cout<<"Loi! 2 vector khac chieu nhau nen khong the cong lai duoc"<<endl;
        return *this;
    }
    CVector res(n);
    for(int i = 0;i < n;i++){
        res.vector[i] = vector[i] + V2.vector[i];
    }
    return res;
}

CVector CVector::operator-(CVector V2) const{
    if(n != V2.n){
        cout<<"Loi! 2 vector khac chieu nhau nen khong the cong lai duoc"<<endl;
        return *this;
    }
    CVector res(n);
    for(int i = 0;i < n;i++){
        res.vector[i] = vector[i] - V2.vector[i];
    }
    return res;
}

// phep nhan

double CVector::operator*(CVector V2) const{
    if(n != V2.n){
        cout<<"Loi! 2 vector khac chieu nhau nen khong the cong lai duoc"<<endl;
        return 0.0; 
    }
    double sum = 0;
    for(int i = 0;i < n;i++){
        sum += (vector[i] * V2.vector[i]);
    }
    return sum;
}

// cac phep toan vector nhan voi so double x ra ket qua

CVector CVector::total(double x){
    CVector res(n);
    for(int i = 0;i < n;i++){
        res.vector[i] = vector[i] * x;
    }
    return res;
}

// phep tinh norm , do dai cua vector

double CVector::norm() const{
    double total =0;
    for(int i = 0;i < n;i++){
        // de tinh duoc do dai vector thi su dung binh phuong cua vector cong lai het va sqrt ra
        total += (vector[i] * vector[i]);
    }
    total = sqrt(total);
    return total;
}


// cac phuogn thuc so sanh 
bool CVector::operator==(CVector V2) const{
    if(n != V2.n){ 
        return false;
    }
    for(int i = 0;i< n;i++){
        if(vector[i] != V2.vector[i]){
            return false;
        }
    }
    return true;
}

bool CVector::operator!=(CVector V2) const{
    return !(*this == V2);
}

bool CVector::operator>(CVector V2) const{
    return this->norm() > V2.norm();
}

bool CVector::operator<(CVector V2) const{
    return this->norm() < V2.norm();
}

// cac phuong thuc display , xuat output

istream& operator>>(istream& is,CVector& V2){
    cout<<"Nhap so chieu cho vector: "<<endl;
    cout<<"Nhap so luong chieu muon co trong vector: "; 
    // kiem tra xem lieu so n co duoc nhap dung hay khong
    
    do{
        is>>V2.n;
        if(is.fail()){
            cout<<"Sai kieu du lieu cho so chieu"<<endl;
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        if(V2.n < 0){
            cout<<"So chieu khong duoc am"<<endl;
            continue;
        }
        break;
    }while(true);
    delete[] V2.vector;
    V2.vector= new double[V2.n];
    for(int i = 0;i < V2.n;i++){
        cout<<"Nhap so chieu thu "<<i + 1<<" trong vector: "; 
        do{
            is>>V2.vector[i];
            if(is.fail()){
                cout<<"Sai kieu du lieu, vui long  nhap lai"<<endl;
                is.clear();
                is.ignore(1000,'\n');
                continue;
            }
            break;
        }while(true);
    }
    return is;
}

ostream& operator<<(ostream& os,CVector V2){
    os<<"( ";
    for(int i = 0;i <  V2.n;i++){
        if(i > 0) os<<" ; ";
        os<<V2.vector[i];
    }
    os<<")";
    return os;
}
