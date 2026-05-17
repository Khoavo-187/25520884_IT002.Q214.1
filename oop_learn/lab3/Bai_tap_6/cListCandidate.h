#ifndef LIST_CANDIDATE
#define LIST_CANDIDATE
#include "Date.h"
#include "cCandidate.h"

class cListCandidate{
private:
    int n;
    cCandidate* danhsach;
public:
    cListCandidate();
    cListCandidate(int n);
    cListCandidate(const cListCandidate& other);
    ~cListCandidate();

    void nhap();
    void xuat();
    void xuatlonhon15();

    double max_cao_nhat();
    void xuatcaonhat();
    void giamdan();
};


#endif