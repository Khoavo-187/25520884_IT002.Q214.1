#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "Date.h"
using namespace std;

class nhanvien{
protected:
    string hoten;
    Date D1;
public: 
    nhanvien();
    nhanvien(string hoten,Date D1);

    virtual nhanvien* clone() = 0;
    // cac bien getter
    Date getDate();
    virtual ~nhanvien();
    virtual long long Tinhluong() = 0;

    virtual void nhap();
    virtual void xuat();
};

#endif