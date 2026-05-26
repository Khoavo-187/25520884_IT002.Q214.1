#ifndef LOAIA_H
#define LOAIA_H
#include "khachhang.h"
using namespace std;


class loaiA : public khachhang{
private:
public:
    loaiA();
    loaiA(string hoten,int luonghang,int dongia);
    double Tinhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif