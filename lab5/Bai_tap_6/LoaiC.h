#ifndef LOAIC_H
#define LOAIC_H
#include "khachhang.h"
using namespace std;

class loaiC : public khachhang{
private:
public:
    loaiC();
    loaiC(string hoten,int luonghang,int dongia);
    double Tinhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif