#ifndef LOAIB_H
#define LOAIB_H
#include "khachhang.h"
using namespace std;

class loaiB : public khachhang{
private:
    int sonam;
public:
    loaiB();
    loaiB(string hoten,int luonghang,int dongia,int sonam);
    double khuyenmai();
    double Tinhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif