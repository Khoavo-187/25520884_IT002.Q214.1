#ifndef SOPHUC_H
#define SOPHUC_H

class Sophuc{
private:
    double iThuc;
    double iAo;
public:
    void Nhap();
    void Xuat();

    Sophuc Tong(Sophuc p2);
    Sophuc Hieu(Sophuc p2);
    Sophuc Tich(Sophuc p2);
    Sophuc thuong(Sophuc p2);

};

#endif
