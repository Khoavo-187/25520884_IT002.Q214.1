#ifndef TAMGIAC_H
#define TAMGIAC_H
#include "Diem.h"


class cTamGiac{
private:
    // ta lay nhung gia tri khoi tao cac diem de gan vao cho 3 dinh A,B,C
    Diem A;
    Diem B;
    Diem C;
public:
    // constructor
    cTamGiac();
    cTamGiac(Diem A,Diem B,Diem C);
    // destructor
    ~cTamGiac(); 
    void nhap();
    void xuat();
    int Kiemtratamgiac();
    double ChuVi();
    double DienTich();
    void TinhTien(double dx,double dy);
    void Quay(double doc,Diem tam);
    void PhongTo(double ti_le);
    void thunho(double ti_le);
};

#endif