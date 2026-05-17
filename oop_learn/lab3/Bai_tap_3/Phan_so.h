#ifndef PHANSO_H
#define PHANSO_H

class Phanso{
private:
    int tuso;
    int mauso;
public:
    Phanso();
    Phanso(int tuso,int mauso);
    // setter
    void setTu(int tuso);
    void setMau(int mauso);
    // getter
    int getTu();
    int getMau();

    bool greater(Phanso P2);
    bool lower(Phanso P2);
    void Rutgon();
    void nhapps();
    void xuatps();
    // cac operator cho phan so
    // do de chi yeu cau nhap tong cua phan so nen chi can nhap phep cong
    Phanso operator+(Phanso P2) const;
};

#endif