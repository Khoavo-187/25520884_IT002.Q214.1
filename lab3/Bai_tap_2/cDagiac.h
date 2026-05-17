#ifndef DAGIAC_H
#define DAGIAC_H
#include "Diem.h"

class cDagiac{
private:
    int n; // cho so luong dime muon nhap vao de tao thnah da  giac
    Diem* arr; // tao 1 mang arr de biet duoc so dinh muon tao ra de tao thanh 1 da giac moi tu diem cac toa do (cap phat dong cho mang arr)
public:
    // constructor
    cDagiac();
    cDagiac(int n);
    // destructor
    ~cDagiac(); 
    void nhap();
    void xuat();
    int kiemtradagiac();
    double chuvi();
    double dientich();
    void tinhtien(double dx,double dy);
    void quay(double goc,Diem tam);
    void phongto(double ti_le);
    void thunho(double ti_le);
};


#endif