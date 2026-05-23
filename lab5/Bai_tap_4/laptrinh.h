#ifndef LAPTRINH_H
#define LAPTRINH_H
#include <string>
#include "Nhanvien.h"
using namespace std;

class laptrinh : public nhanvien{
private:
    double giolamthem;
public:
    laptrinh();
    laptrinh(string manhanvien,string hoten,int tuoi,string sdt,string email,int luongcoban,int giolamthem);

    laptrinh* clone() override;
    double Tinhluong() override;
    void nhap() override;
    void xuat() override;
};


#endif