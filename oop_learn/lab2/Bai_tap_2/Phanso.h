#ifndef PHANSO_H
#define PHANSO_H

class Phanso{
private:
    int iTu;
    int iMau;
public:
    void Nhap();
    void Xuat();
    void Rutgon();

    Phanso Tong(Phanso p2);
    Phanso Hieu(Phanso p2);
    Phanso Tich(Phanso p2);
    Phanso thuong(Phanso p2);

    int Sosanh(Phanso p2); // 1 : >, 0 : =, -1 : <
};

#endif
