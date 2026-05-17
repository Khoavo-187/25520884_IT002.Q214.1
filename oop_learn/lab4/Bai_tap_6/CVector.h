#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class CVector{
private:
    int n; //nhap vao so luong thanh phan muon tao bat ky
    double* vector;
public:
    CVector(); // khoi tao mac dinh
    CVector(int n); // khoi tao co tham so
    CVector(const CVector& other); // copy constructor

    ~CVector(); // destructor

    // cac phep tinh toan
    CVector operator+(CVector V2) const;
    CVector operator-(CVector V2) const;
    double operator*(CVector V2) const;

    // cac phuong thuc so sanh giua cac vector
    bool operator==(CVector V2) const;
    bool operator!=(CVector V2) const;
    bool operator>(CVector V2) const;
    bool operator<(CVector V2) const;

    // Nhan voi so thuc
    CVector total(double x);

    // cong thuc tinh norm cua vector khi biet duoc so chieu trong vector(do dai vector)

    double norm() const;

    // cac phuong thuc display
    friend istream& operator>>(istream& is,CVector &V1);
    friend ostream& operator<<(ostream& os,CVector V1);
};

#endif