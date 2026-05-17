#ifndef GV_H
#define GV_H
#include "CBVC.h"
class giangvien : public CBVC{
private:
    double gioday;
    double nghiencuu;
    double dongia;
public: 
    giangvien();
    giangvien(string macanbo,string hoten,string gioitinh,double gioday,double nghiencuu,double dongia);

    double Tinhluong() override;
    void nhap();
    void xuat();
};
#endif