#ifndef KHACHHANG_H
#define KHACHHANG_H
#include <string>
using namespace std;


class khachhang{
protected:
    string hoten;
    int luonghang;
    int dongia;
public:
    static constexpr double VAT = 0.1;
    khachhang();
    khachhang(string hoten,int luonghang,int dongia);
    virtual double Tinhtien() = 0;
    virtual void nhap();
    virtual void xuat();
};

#endif