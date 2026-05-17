#ifndef CONGTY_H
#define CONGTY_H
#include "Nhanvien.h"
#include "laptrinh.h"
#include "kiemchung.h"
using namespace std;

class congty{
private:
    int n; // nhap so luong nhan vien muon nhap vao
    Nhanvien** danhsachnhanvien;
public:
    congty(int n = 0);

    ~congty();

    void nhapdanhsach();
    void xuatdanhsach();
    double long luongtrungbinh() const;
    void lietke() const;
};

#endif