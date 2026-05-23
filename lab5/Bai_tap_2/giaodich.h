#ifndef GIAODICH_H
#define GIAODICH_H
#define ll long long
using namespace std;


class giaodich{
protected:
    string magiaodich;
    string ngaygiaodich;
    ll dongia;
    double dientich;
public:
    giaodich();
    giaodich(string magiaodich,string ngaygiaodich,ll dongia,double dientich);

    virtual int getNgay();
    virtual int getThang();
    virtual int getNam();
    virtual ~giaodich();
    virtual giaodich* clone()= 0;
    virtual long double Thanhtien() = 0; // pure virtual
    virtual void nhap();
    virtual void xuat();
};

#endif