#ifndef DANHSACH_H
#define DANHSACH_H
#include "He.h"
#include "caodang.h"
#include "daihoc.h"
using namespace std;


class danhsach{
private:
    int n;
    vector<he*> danhsachsinhvien;
    vector<daihoc*> danhsachdaihoc;
    vector<caodang*> danhsachcaodang;
public:
    danhsach();
    danhsach(const danhsach& other);
    ~danhsach();

    void nhapdanhsach();
    void xuatdanhsach();

    vector<he*> danhsachtotnghiep();
    vector<he*> danhsachconlai();

    daihoc* max_diem();
    caodang* max_tb_diem();

    vector<daihoc*> getDH();
    vector<caodang*> getCD();

    int ko_tot_nghiep_cao_dang(vector<caodang*> CD);
    int ko_tot_nghiep_dai_hoc(vector<daihoc*> DH);
};

#endif