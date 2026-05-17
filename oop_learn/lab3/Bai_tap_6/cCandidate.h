#ifndef CANDIDATE_H
#define CANDIDATE_H
#include "Date.h"
using namespace std;
class cCandidate{
private:
    string ID;
    string hoten;
    Date ngaysinh;
    double toan;
    double van;
    double anh;
public:
    cCandidate();
    cCandidate(string ID,string hoten,Date ngaysinh,double toan,double van,double anh);
    void nhap();
    void xuat();
    double max_diem();
};

#endif