#ifndef SANXUAT_H
#define SANXUAT_H
#include "Nhanvien.h"
using namespace std;

class sanxuat : public nhanvien{
private:
    int luongcoban;
    int sanpham;
public:
    sanxuat();
    sanxuat(string hoten,Date D1,int luongcoban,int sanpham);

    long long Tinhluong() override;
    void nhap() override;
    void xuat() override;
};

#endif