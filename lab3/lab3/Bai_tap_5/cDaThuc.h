#ifndef DATHUC_H
#define DATHUC_H

class cDaThuc{
private:
    int bac;
    double* heso; 
public:
    cDaThuc();
    cDaThuc(int n);
    cDaThuc(const cDaThuc& other);
    ~cDaThuc();

    void nhap();
    void xuat();

    long double giatri(int x);
    // operator
    cDaThuc tong(cDaThuc D2);
    cDaThuc hieu(cDaThuc D2) ;
};

#endif