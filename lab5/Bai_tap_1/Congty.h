#ifndef CONGTY_H
#define CONGTY_H
#include "Vanphong.h"
#include "Sanxuat.h"
#include <vector>
using namespace std;

class congty{
private:
    int n; // nhap so luong nhan vien muon nhap vao
    vector<nhanvien*> danhsachnhanvien;
    vector<vanphong*> danhsachvanphong;
    vector<sanxuat*> danhsachsanxuat;
public:
    congty();
    congty(const congty& other);
    ~congty();

    vector<vanphong*> GetVP();
    vector<sanxuat*> GetSX();
    void nhapdanhsach();
    void xuatdanhsach();
    long long total_luong();
    sanxuat* min_luong(vector<sanxuat*> SX) const;
    vanphong* max_tuoi(vector<vanphong*> VP) const;
};

#endif