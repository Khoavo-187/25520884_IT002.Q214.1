#ifndef CHUNGCU_H
#define CHUNGCU_H
#include "giaodich.h"
using namespace std;


class chungcu : public giaodich{
private:
    string macan;
    int vitri;
public:
    chungcu();
    chungcu(string magiaodich,string ngaygiaodich,long long dongia,double dientich,string macan,int vitri);

    chungcu* clone() override;
    long double Thanhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif