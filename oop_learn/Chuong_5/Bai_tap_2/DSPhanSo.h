#ifndef DS_PHANSO
#define DS_PHANSO
#include "Phanso.h"

class DSPhanSo{
private:
    int n;
    Phanso* arr;
public:
    // cosntructor
    DSPhanSo();
    DSPhanSo(int n);
    //copy constructor
    DSPhanSo(DSPhanSo& p);
    ~DSPhanSo();
    
    void nhapmang();
    void xuatmang();

    Phanso max_value(); // tim phan so lon nhat
    Phanso total(); // tong cac phan so

};

#endif