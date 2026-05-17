#include <bits/stdc++.h>
#include "dathuc.h"
using namespace std;


Dathuc::Dathuc(){
    n = 0;
    arr = NULL;
}
Dathuc::Dathuc(int n){
    this->n = n;
    arr = new double[n + 1];
    for(int i = 0;i <= n;i++){
        arr[i] = 0.0;
    }
}
Dathuc::~Dathuc(){
    delete[] arr;
}
// copy constructor
Dathuc::Dathuc(const Dathuc& D2){
    n = D2.n;
    arr = new double[n + 1];
    for(int i = 0;i <= n;i++){
        arr[i] = D2.arr[i];
    }
}

void Dathuc::nhap(){
    cout<<"nhap so luong bac da thuc muon nhap"<<endl;
    cin>>n;
    delete[] arr;
    arr = new double[n + 1];
    for(int i =0 ;i <= n;i++){
        cout<<"nhap he so thu "<<i + 1<<" cho cac bac da thuc"<<endl;
        cin>>arr[i];
    }
}

void Dathuc::xuat(){
    cout<<"he so cua cac bac da thuc la P(x):  ";
    bool dautien = true;
    for(int i = 0;i <= n;i++){
        if(arr[i] == 0) continue;
        if(!dautien){
            // neu khong phai he so dau tien thi xet dau cho he so tiep theo
            cout<<(arr[i] > 0 ? "+" : "-")<<" "; // xet dau cua he so truoc no
        }
        else{
            if(arr[i] < 0){
                cout<<"-";
            }
            dautien = false;
        }
        double giatri = abs(arr[i]);
        int bac = n - i; // dua vao bac cao nhat xong lui ve
        if(bac == 0){
            cout<<giatri;
        }
        else if(bac == 1){
            if(giatri != 1) cout<<giatri;
            cout<<"x"<<" ";
        }
        else{
            if(giatri != 1) cout<<giatri;
            cout<<"x^"<<bac<<" ";
        }
    }
}
double Dathuc::giatri(int x){
    double sum = 0;
    for(int i  =0;i <= n;i++){
        int bac = n - i;
        sum += (arr[i] * pow(x,bac));
    }
    return sum;
}

Dathuc Dathuc::cong(Dathuc D2){
    // tim gia tri cung bac tuong ung
    int max_bac = max(n,D2.n);
    Dathuc kq(max_bac);

    for(int i = 0;i <= n;i++){
        int bac = n - i;
        kq.arr[max_bac - bac] += arr[i];
    }

    for(int i = 0;i <= D2.n;i++){
        int bac = D2.n - i;
        kq.arr[max_bac - bac] += D2.arr[i];
    }
    return kq;
}

Dathuc Dathuc::tru(Dathuc D2){
    int max_bac = max(n,D2.n);
    Dathuc kq(max_bac);
    for(int i = 0;i <= n;i++){
        int bac = n - i;
        kq.arr[max_bac - bac] += arr[i];
    }
    for(int i  =0;i <= D2.n;i++){
        int bac = D2.n - i;
        kq.arr[max_bac - bac] -= D2.arr[i];
    }
    return kq;
}