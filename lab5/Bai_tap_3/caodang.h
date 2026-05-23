#ifndef CAODANG_H
#define CAODANG_H
#include "He.h"
#include <iostream> 
#include <string>
using namespace std;

class caodang : public he{
private:
    double diemtotnghiep;
public:
    caodang();
    caodang(string MSSV,string hoten,string diachi,int tinchi,double diemtb,double diemtotnghiep);
    
    caodang* clone() override;
    bool totnghiep() override;
    void nhap() override;
    void xuat() override;
};

#endif