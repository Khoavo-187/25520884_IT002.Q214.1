#include <bits/stdc++.h>
#include "CVector.h"
using namespace std;

// ham khoi tao mac dinh
// Cho thang so chieu = 0 
// Neu so chieu bang 0 thi vector khong duoc khoi tao
CVector::CVector(){
    n = 0;
    vector = nullptr; 
}

// Ham khoi tao co tham so
// Cho so chieu va lap duoc mang vector ben trong
CVector::CVector(int n){
    this->n = n;
    vector = new double[n];
    for(int i = 0;i < n;i++){
        vector[i] = 0.0;
    }
}


// copy constructor 
// Nham copy object 
CVector::CVector(const CVector& other){
    n = other.n;
    vector = new double[n];
    for(int i = 0;i < n;i++){
        vector[i] = other.vector[i];
    }
}

// destructor
CVector::~CVector(){
    delete[] vector;
}


// cac cong thuc tinh toan giua cac chieu trong vector

// Ham cong cac vector
// input: Lay input tu input luc nhap, vector V2 trong tham so
// output: Tra ve vector res sau khi da cong 2 vector V1 va V2
// giai thuat: Cong theo dung thu tu theo cung so chieu  doi voi 2 vector
// vi du: (a1 + b1,a2 + b2,a3 + b3)
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


// Ham tru cac vector
// input: Lay input tu input luc nhap, vector V2 trong tham so
// output: Tra ve vector res sau khi da tru 2 vector V1 va V2
// giai thuat: tru theo dung thu tu theo cung so chieu  doi voi 2 vector
// vi du: (a1 - b1,a2 - b2,a3 - b3)
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

// Ham nhan cac vector (dot product)
// input: Lay input tu input luc nhap, vector V2 trong tham so
// output: Tra ve gia tri double sau khi lay cung so chieu 2 vector nhan va cong lai voi nhau
// giai thuat: nhan theo dung thu tu theo cung so chieu  doi voi 2 vector va cong lai ve 1 bien
// vi du: sum = a1 * b1 + a2 * b2 + a3 * b3
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

// Ham nhan voi 1 so thuc X
// input: Lay input tu input luc nhap, lay gia tri so thuc X co trong tham so
// output: Tra ve vector res sau khi da nhan V1 * x
// giai thuat: nhan tat ca so chieu voi so x va tra lai vector sau cung
// vi du: (a1 * x,a2 * x,a3 * x)
CVector CVector::total(double x){
    CVector res(n);
    for(int i = 0;i < n;i++){
        res.vector[i] = vector[i] * x;
    }
    return res;
}

// phep tinh norm , do dai cua vector
// Ham tinh do dai cua vector\
// input: Lay tu input nhap tu ban phim
// output: Tra ve do dai cua vector 
// giai thuat : sqrt(a^2 + b^2 + c^2) neu so chieu trong 1 vector la a,b,c
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
// Ham so sanh cac vector
// input: Lay 2 vector V1 va V2 so sanh
// output: tra ve gia tri true hoac false
// giai thuat: khi so sanh 2 vector bang nhau thi phai cung so chieu(1) va cac gia tri ben trong phai bang nhau theo dung so chieu(2)
bool CVector::operator==(CVector V2) const{
    if(n != V2.n){ 
        return false; // so luong chieu 2 vector khong bang nhau ==> false
    }
    for(int i = 0;i< n;i++){
        if(vector[i] != V2.vector[i]){
            return false; // neu gia tri so chieu khac nhau ==> false
        }
    }
    return true;
}

bool CVector::operator!=(CVector V2) const{
    return !(*this == V2); // Tuong tu nhu cai operator== nhung nguoc lai
}

bool CVector::operator>(CVector V2) const{
    return this->norm() > V2.norm(); // so sanh cac V1 va V2 bang cach tinh do dai vector
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
