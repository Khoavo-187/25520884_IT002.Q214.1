#ifndef CONGTY_H
#define CONGTY_H
#include "Vanphong.h"
#include "Sanxuat.h"
using namespace std;

class congty{
private:
    int n; // nhap so luong nhan vien muon nhap vao
    nhanvien** danhsachnhanvien;
public:
    congty(int n = 0);
    ~congty();

    void nhapdanhsach();
    void xuatdanhsach();
    long long total_luong();
    sanxuat* min_luong() const;
    vanphong* max_tuoi() const;
};

#endif