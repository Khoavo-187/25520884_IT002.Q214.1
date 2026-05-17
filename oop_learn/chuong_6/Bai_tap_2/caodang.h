#ifndef CAODANG_H
#define CAODANG_H
#include "sinhvien.h"

class caodang : public sinhvien{
private:
    double totnghiep;
public:
    caodang();
    caodang(string masinhvien,string hoten,string diachi,int tinchi,double diemtb,double totnghiep);
    bool extracheck() override;
    void nhap();
    void xuat();
};

#endif