#ifndef LIST_NHANVIENSX
#define LIST_NHANVIENSX
#include "cNhanVienSX.h"
#include "Date.h"

class cListcNhanVienSX{
private:
    int n; // nhap so luong nhan vien muon them vao
    cNhanVienSX* arr;
public:
    cListcNhanVienSX();
    cListcNhanVienSX(int n);
    cListcNhanVienSX(const cListcNhanVienSX& other);
    ~cListcNhanVienSX();

    void nhap();
    void xuat();

    int min_luong();
    void luongthapnhat();

    int total_salary();
    void caotuoi();

    void tangdan(); // sap xep tang dan theo luong
};

#endif