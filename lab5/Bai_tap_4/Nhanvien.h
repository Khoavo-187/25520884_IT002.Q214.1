#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <string>
using namespace std;


class nhanvien{
protected:
    string manhanvien;
    string hoten;
    int tuoi;
    string sdt;
    string email;
    int luongcoban;
public:
    nhanvien();
    nhanvien(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban);

    virtual nhanvien* clone() = 0;
    virtual double Tinhluong() = 0;
    virtual void nhap();
    virtual void xuat();
};

#endif