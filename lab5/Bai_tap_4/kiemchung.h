#ifndef KIEMCHUNG_H
#define KIEMCHUNG_H
#include "Nhanvien.h"
#include <string>
using namespace std;


class kiemchung : public nhanvien{
private:
    int loiphathien;
public:
    kiemchung();
    kiemchung(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban,int loiphathien);

    kiemchung* clone() override;
    double Tinhluong() override;
    void nhap() override;
    void xuat() override;
};

#endif