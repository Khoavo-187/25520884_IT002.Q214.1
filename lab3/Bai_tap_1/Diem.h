#ifndef DIEM_H
#define DIEM_H


class Diem{
private:
    double x;
    double y;
public:
    Diem();
    Diem(double x,double y);
    // setter
    void SetX(double x);
    void SetY(double y);
    // getter
    double GetX();
    double GetY();
    void nhap();
    void xuat();
};

#endif