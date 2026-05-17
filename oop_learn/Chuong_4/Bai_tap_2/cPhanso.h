#ifndef PHANSO_H
#define PHANSO_H

class cPhanso{
    friend class arrPhanSo;
private:
    int tu;
    int mau;
public:
    cPhanso();
    cPhanso(int tu,int mau);
    void set(int t,int mau);
    // getter
    int gettu();
    int getmau();
    void nhapps();
    void xuatps();
    void Rutgon();
    bool lasonguyento();
};

#endif