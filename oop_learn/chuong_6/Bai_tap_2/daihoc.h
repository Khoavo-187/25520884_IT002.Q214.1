#ifndef DAIHOC_H
#define DAIHOC_H
#include "sinhvien.h"


class daihoc : public sinhvien{
private:
    string luanvan;
    double diemluan;
public:
    daihoc();
    daihoc(string masinhvien,string hoten,string diachi,int tinchi,double diemtb,string luanvan, double diemluan);

    bool extracheck() override;

    void nhap();
    void xuat();
};


#endif