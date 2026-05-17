#ifndef DS_PHANSO
#define DS_PHANSO
#include "Phan_so.h"


class cDSPhanSo{
private:
    int n; // nhap so luong phan so muon nhap vao;  
    Phanso* arr;
public:
    cDSPhanSo();
    cDSPhanSo(int n);
    // ta can them 1 copy constructor de khi tra ve se tra thang gia tri chu khong tra ve object luu gia tri
    cDSPhanSo(const cDSPhanSo& other);
    ~cDSPhanSo();

    void nhap();
    void xuat();
    // tim cac phuong thuc de bai yeu cau
    Phanso tong();
    Phanso max_val();
    Phanso min_val();
    Phanso max_nguyento_tu();
    static bool sosanhtang(Phanso a,Phanso b); // ham so sanh tang giua cac phan so
    static bool sosanhgiam(Phanso a,Phanso b); // ham so sanh giam giua cac phan so
    void tangdan();
    void giamdan();
};

#endif