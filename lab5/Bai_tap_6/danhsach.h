#ifndef DANHSACH_H
#define DANHSACH_H
#include "khachhang.h"
#include "LoaiA.h"
#include "LoaiB.h"
#include "LoaiC.h"
#include <vector>
using namespace std;

class danhsach{
private:
    int x,y,z;
    vector<khachhang*> danhsachkhachhang;
public:
    danhsach();
    ~danhsach();

    double total_tien();
    void nhapdanhsach();
    void xuatdanhsach();
};

#endif