#ifndef SOPHUC_H
#define SOPHUC_H
#include <iostream>
using namespace std;
class sophuc{
private:
    double thuc;
    double ao;
public:
    sophuc(); // constructor
    sophuc(double thuc,double ao);
    void set(double thuc,double ao);
    // truong hop 1 so phuc dac biet co phan ao = 0
    sophuc(double thuc);
    // cac ham operator
    sophuc operator+(sophuc P2) const; // phep cong
    sophuc operator-(sophuc P2) const; // hieu
    sophuc operator*(sophuc P2) const; // nhan
    sophuc operator/(sophuc P2) const; // chia

    // ham so sanh giua cac so phuc voi nhau
    bool operator==(sophuc P2) const;
    // phep toan  nhap va xuat
    friend istream& operator >> (istream &is,sophuc &P);
    friend ostream& operator << (ostream &os,sophuc P);
};


#endif