#ifndef KIEMCHUNG_H
#define KIEMCHUNG_H
#include "Nhanvien.h"
using namespace std;


class Kiemchung : public Nhanvien{
private:
    int error;
public:
    Kiemchung();
    Kiemchung(string manhanvien,string hoten,int age,string tel,string email,double luongcoban,int error);
    double long Tinhluong() override;

    void nhap();
    void xuat();
};

#endif