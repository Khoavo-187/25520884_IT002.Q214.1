#ifndef NHAPHO_H
#define NHAPHO_H
#include "giaodich.h"
using namespace std;


class nhapho : public giaodich{
private:
    string loainha;
    string diachi;
public:
    nhapho();
    nhapho(string magiaodich,string ngaygiaodich,long long dongia,double dientich,string loainha,string diachi);

    nhapho* clone() override;
    long double Thanhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif