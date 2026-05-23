#ifndef CONGTY_H
#define CONGTY_H
#include "giaodichdat.h"
#include "giaodichnhapho.h"
#include "canhochungcu.h"
#include <vector>
using namespace std;


class congty{
private:
    int n; // nhap so luong giao dich bat dong san
    vector<giaodich*> danhsachgiaodich;
    vector<dat*> danhsachnhadat;
    vector<nhapho*> danhsachnhapho;
    vector<chungcu*> danhsachchungcu;
public:
    congty();
    congty(const congty& other);
    ~congty();

    void nhapdanhsach();
    void xuatdanhsach();

    // tinh tong so luogn giao dich tung loai
    void So_luong();
    long double thanhtienTB();
    nhapho* max_tien();
    vector<giaodich*> thang12();
};

#endif