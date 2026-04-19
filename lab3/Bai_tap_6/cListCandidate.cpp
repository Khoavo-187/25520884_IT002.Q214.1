#include <bits/stdc++.h>
#include "Date.h"
#include "cCandidate.h"
#include "cListCandidate.h"

using namespace std;

cListCandidate::cListCandidate(){
    n = 0;
    danhsach = nullptr; // neu khong co hoc sinh nao thi null, mang danh sach khong ton tai
}
cListCandidate::cListCandidate(int n){
    this->n = n; // cho san so luong th sinh n lam tham so cho constructor co tham so
    danhsach = new cCandidate[n];
    for(int i  =0;i < n;i++){
        //nhap vao thong tin voi so luong n cho san trong contructor
        danhsach[i].nhap();
    }
}
// copy constructor
cListCandidate::cListCandidate(const cListCandidate& other){
    n = other.n;
    // Cấp phát mảng mới thay vì copy địa chỉ
    danhsach = new cCandidate[n];
    // Copy từng phần tử sang mảng mới 
    for(int i = 0;i < n;i++){
        danhsach[i] = other.danhsach[i];
    }
}

cListCandidate::~cListCandidate(){
    delete[] danhsach;
}
void cListCandidate::nhap(){
    // ham nhap vao so luong thi sinh muon nhap vao tu nguoi dung 
    cout<<"nhap so luong thi sinh muon nhap vao: "; cin>>n;
    while(n <= 0){
        cout<<"nhap so luong thi sinh hop le, nhap lai: ";
        cin>>n;
    }
    delete[] danhsach;
    danhsach= new cCandidate[n];
    for(int i = 0;i < n;i++){
        cout<<"Thong tin thi sinh thu "<<i + 1<<" la: "<<endl;
        danhsach[i].nhap();
    }
}

void cListCandidate::xuat(){
    cout<<"thong tin cua "<<n<<" thi sinh la: "<<endl;
    for(int i =0;i < n;i++){
        danhsach[i].xuat();
    }
}

void cListCandidate::xuatlonhon15(){
    for(int i = 0;i < n;i++){
        if(danhsach[i].max_diem() > 15){
            // dieu kien de xuat ra thong tin sinh vien co tong diem lon hon 15 
            // lay dieu kien tu max_diem tinh tong ra
            danhsach[i].xuat();
        }
    }
}

double cListCandidate::max_cao_nhat(){
    if(n == 0) return 0;
    double max_value = danhsach[0].max_diem();
    for(int i = 1;i < n;i++){
        if(danhsach[i].max_diem() > max_value){
            // so sanh gia tri max diem cua thi sinh dau tien so voi cac thi sinh con lai de cap nhat 
            max_value = danhsach[i].max_diem();
        }
    }
    return max_value;
}

void cListCandidate::xuatcaonhat(){
    // luu gia tri lon nhat vao bien max 
    double max = max_cao_nhat();
    for(int i = 0;i < n;i++){
        // su dung sai so nho nhat(1e-9) de co the tim ra so lon nhat vi kieu du lieu o day la double nen khong tim ra duoc cac so tiem can voi max
        if(abs(max - danhsach[i].max_diem()) < 1e-9){
            danhsach[i].xuat();
        }
    }
}
void cListCandidate::giamdan(){
    if(n <= 1) return;
    // cong thuc giam dan 
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(danhsach[i].max_diem() < danhsach[j].max_diem()){
                swap(danhsach[i],danhsach[j]);
            }
        }
    }
}



