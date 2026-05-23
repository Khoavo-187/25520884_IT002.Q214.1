#ifndef DAT_H
#define DAT_H
#include "giaodich.h"
using namespace std;

class dat : public giaodich{
private:
    char loaidat;
public:
    dat();
    dat(string magiaodich,string ngaygiaodich,long long dongia,double dientich,char loaidat);

    dat* clone() override;
    long double Thanhtien() override;
    void nhap() override;
    void xuat() override;
};

#endif