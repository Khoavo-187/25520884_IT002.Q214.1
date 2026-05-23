#ifndef CONGTY_H
#define CONGTY_H
#include <vector>
#include "Nhanvien.h"
#include "kiemchung.h"
#include "laptrinh.h"

class congty{
private:
    int n;
    vector<nhanvien*> danhsachnhanvien;
    vector<laptrinh*> danhsachlaptrinh;
    vector<kiemchung*> danhsachkiemchung;
public:
    congty();
    congty(const congty& other);
    ~congty();

    void nhapdanhsach();
    void xuatdanhsach();

    vector<laptrinh*> GetLT();
    vector<kiemchung*> GetKC();
    double luongTB();
    vector<nhanvien*> Luong_thap();
    nhanvien* max_luong();
    nhanvien* min_luong();

    laptrinh* Luong_cao(vector<laptrinh*> LT);
    kiemchung* Luong_thap(vector<kiemchung*> KC);
};

#endif