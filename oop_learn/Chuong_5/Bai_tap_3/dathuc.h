#ifndef DATHUC_H
#define DATHUC_H
#include <iostream>
using namespace std;

class dathuc{
private:
    double* heso; // nhap cac he so la mang de luu vao
    int bac;
public:
    dathuc(int bac = 0); // xet truong hop neu n = 0
    dathuc(const dathuc& p); // them 1 copy constructor
    ~dathuc();
    // nhap mang dua vao operator
    friend istream& operator>>(istream &is,dathuc &p) ;
    friend ostream& operator<<(ostream &os,dathuc p);

    // cac operator cong tru da thuc
    dathuc operator+(dathuc p) const; 
    dathuc operator-(dathuc p) const;

    // gia tri da thuc sau khi biet x;
    long double giatri(int x);
};

#endif