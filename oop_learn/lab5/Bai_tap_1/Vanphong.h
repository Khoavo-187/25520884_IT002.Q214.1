#ifndef VANPHONG_H
#define VANPHONG_H
#include "Nhanvien.h"
using namespace std;

class vanphong : public nhanvien{
private:
    int ngaylamviec;
public:
    vanphong();
    vanphong(string hoten,Date D1,int ngaylamviec);
    
    long long Tinhluong() override;
    void nhap() override;
    void xuat() override;
};

#endif