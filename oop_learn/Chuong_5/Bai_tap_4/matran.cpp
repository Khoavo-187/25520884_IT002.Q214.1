#include <bits/stdc++.h>
#include "matran.h"
using namespace std;

void matran::capphat(){
    arr = new int*[m];// cap phat cho moi hang m them con tro de cap phat them cac thanh phan n phan tu tu cot
    for(int i = 0;i < m;i++){
        arr[i] = new int[n]; // voi moi hang m thi se co n phan tu cot
    }
}
void matran::giaiphong(){
    if(arr == nullptr) return;
    for(int i =0;i < m;i++){
        delete[] arr[i]; // xoa tung hang voi n cot
    }
    delete[] arr; // sau do moi xoa cac mang hang ben ngoai
    arr = nullptr;
}


matran::matran(){
    m = n = 0;
    arr = nullptr;
}
matran::matran(int m,int n){
    this->n = n;
    this->m = m;
    capphat(); // su dung cap phat de cap phat theo luong hang va cot duoc cho
    for(int i =0;i < m;i++){
        for(int j= 0;j < n;j++){
            arr[i][j] = 0; // khoi tao tat ca phan tu = 0 do chua co input nhap vao
        }
    }
}
matran::matran(const matran& other){
    arr = nullptr;
    n = other.n;
    m = other.m;
    capphat();
    for(int i = 0;i < m;i++){
        for(int j =0;j < n;j++){
            arr[i][j] = other.arr[i][j];
        }
    }
}
matran::~matran(){
    giaiphong();
}

istream& operator>>(istream& is,matran &M){
    M.giaiphong(); // dau tien ta se giai phong cac input con sot lai trong bo nho dem tranh overflow
    // tao ma tran ngau nhien tu m dong va n cot
    cout<<"Nhap dong va cot cho ma tran: "; is>>M.m>>M.n;

    // khoi tao ma tran voi m dong va n cot
    M.capphat(); // dau tien van phai cap phat m hang va n cot
    for(int i = 0;i < M.m;i++){
        for(int j = 0;j < M.n;j++){
            cout<<"arr["<<i<<"]"<<"["<<j<<"] = ";
            is>>M.arr[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream &os,matran M){
    os<<"ma tran la: "<<endl;
    for(int i = 0 ;i < M.m;i++){
        for(int j = 0;j < M.n;j++){
            os<<M.arr[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}

// tao ma tran ngau nhien tu thoi gian thuc
void matran::ngaunhien(){
    giaiphong();
    cout<<"nhap hang va cot muon khoi tao ngau nhien: "; cin>>m>>n;

    capphat();
    srand(time(NULL));
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            arr[i][j] = rand() % 100; // lay gia tri tu 0 - 99;
            // khoi tao ma tran ngau nhien
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

matran matran::operator+(const matran M2){
    if(M2.n != n || M2.m != m){ 
        cout<<"khong the cong 2 ma tran khac kich thuoc nhau"<<endl;
        return matran();
    } // muon cong 2 ma tran ta can su dung cung kich thuoc ma tran, tra ve ma tran rong
    // tao 1 ma tran phu de luu ketqua cong cac phan tu trong ma tran
    matran ketqua(m,n);
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            ketqua.arr[i][j] = arr[i][j] + M2.arr[i][j];
        }
    }
    return ketqua;
}

matran matran::operator-(const matran M2){
    if(M2.n != n || M2.m != m){
        cout<<"khong the tru 2 ma tran khac kich thuoc"<<endl;
        return matran();
    }
    matran ketqua(m,n);
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            ketqua.arr[i][j] = arr[i][j] - M2.arr[i][j];
        }
    }
    return ketqua;
}

matran matran::operator*(const matran M2){
    if(n != M2.m) return matran();
    // de nhan 2 ma tran thi phai cung bac
    matran ketqua(m,M2.n);
    //  su dung bien k de truy cap them tung so cua tung dong
    for(int i = 0;i < m;i++){
        for(int j = 0;j < M2.n;j++){
            for(int k = 0;k < n;k++){
                ketqua.arr[i][j] += arr[i][k] * M2.arr[k][j];
            }
        }
    }
    return ketqua;
}