#ifndef HE_H
#define HE_H
#include <iostream>
#include <string>
using namespace std;


class he{
protected:
    string MSSV;
    string hoten;
    string diachi;
    int tinchi;
    double diemtb;
public: 
    he();
    he(string MSSV,string hoten,string diachi,int tinchi,double diemtb);

    ~he();

    double getDiem();
    virtual he* clone() = 0;
    virtual bool totnghiep() = 0;
    virtual void nhap();
    virtual void xuat();
};

#endif