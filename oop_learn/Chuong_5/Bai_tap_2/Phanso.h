#ifndef PHANSO_H
#define PHANSO_H

class Phanso{
private:
    int tuso;
    int mauso;
    void rutgon();
public:
    Phanso(int t = 0,int m = 1);
    Phanso(const Phanso &p);
    // getter
    int LayTu();
    int LayMau();   
    // setter
    void GanTu(int t);
    void GanMau(int m);
    void nhap();
    void xuat();
    bool operator>(Phanso p) const;
    Phanso operator+(Phanso p) const;
    Phanso operator-(Phanso p) const;
};

#endif