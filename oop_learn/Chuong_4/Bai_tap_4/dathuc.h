#ifndef DATHUC_H
#define DATHUC_H

class Dathuc{
private:
    int n; // so bac da thuc muonn tao
    double* arr;
public:
    Dathuc();
    Dathuc(const Dathuc& D2);
    Dathuc(int n);
    ~Dathuc();
    void nhap();
    void xuat();
    double giatri(int x);
    Dathuc cong(Dathuc D2);
    Dathuc tru(Dathuc D2);
};

#endif