#ifndef LIST_NHANVIEN
#define LIST_NHANVIEN
#include "cNhanVienVP.h"
class cListNhanVien{
private:
    int n; // so luong nhan vien muon nhap vao
    cNhanVienVP* arr;
public:
    cListNhanVien();
    cListNhanVien(int n);
    cListNhanVien(const cListNhanVien& other);
    ~cListNhanVien();

    void nhap();
    void xuat();
 
    int max_salary(); // luong cao nhat
    void luongcaonhat(); 

    int total_salary(); // tong tien luong

    void old_age();
    void tangdan();

};

#endif