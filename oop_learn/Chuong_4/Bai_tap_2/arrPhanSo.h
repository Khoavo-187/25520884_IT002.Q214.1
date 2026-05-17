#ifndef PHANSO_ARR
#define PHANSO_ARR
#include "cPhanso.h"

class arrPhanSo{
private:
    cPhanso* arr;
    int n;
public:
    arrPhanSo();
    ~arrPhanSo();

    void nhapmang();
    void xuatmang();
    void psngaunhien(int soluong);
    cPhanso max_ps();
    void sapxeptangdan();
    int demtunguyento();
};

#endif