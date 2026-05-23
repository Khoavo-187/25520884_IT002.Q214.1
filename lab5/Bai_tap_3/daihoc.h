#ifndef DAIHOC_H
#define DAIHOC_H
#include <iostream>
#include <string>
#include "He.h"
using namespace std;


class daihoc : public he{
private:
    string tenluanvan;
    double diemluan;
public:
    daihoc();
    daihoc(string MSSV,string hoten,string diachi,int tinchi,double diemtb,string tenluanvan,double diemluan);
    
    daihoc* clone() override;
    bool totnghiep() override;
    void nhap() override;
    void xuat() override;
};

#endif