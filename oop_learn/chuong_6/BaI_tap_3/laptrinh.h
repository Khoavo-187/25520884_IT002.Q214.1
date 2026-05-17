#ifndef LAPTRINH_H
#define LAPTRINH_H
#include "Nhanvien.h"
using namespace std;

class laptrinh : public Nhanvien{
private:
    double overtime;
public:
    laptrinh();
    laptrinh(string manhanvien,string hoten,int age,string tel,string email,double luongcoban,double overtime);
    double long Tinhluong() override;
    void nhap() override;
    void xuat() override;
};

#endif