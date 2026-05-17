#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <string>
using namespace std;

class sinhvien{
protected:
    string masinhvien;
    string hoten;
    string diachi;
    int tinchi;
    double diemtb;
public:
    sinhvien();
    sinhvien(string masinhvien,string hoten,string diachi,int tinchi,double diemtb);

    virtual ~sinhvien();
    virtual bool extracheck() = 0;
    virtual void nhap();
    virtual void xuat();
};

#endif