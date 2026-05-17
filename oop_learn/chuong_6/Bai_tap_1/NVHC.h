#ifndef NVHC_H
#define NVHC_H
#include "CBVC.h"
using namespace std;


class hanhchinh  : public CBVC{
private:
    int ngaylamviec;
    double tien1ngay;
    double giolamthem;
    double dongia;
public:
    hanhchinh();
    hanhchinh(string macanbo,string hoten,string gioitinh,int ngaylamviec,double tien1ngay,double giolamthem,double dongia);

    double Tinhluong() override;
    void nhap();
    void xuat();
};

#endif