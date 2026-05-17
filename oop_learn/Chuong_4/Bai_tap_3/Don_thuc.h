#ifndef DONTHUC_H
#define DONTHUC_H

class Donthuc{
private:
    int heso;
    int hemu;

public:
    Donthuc(); // constructor
    Donthuc(int heso,int hemu); // constructor co tham so
    void nhapdonthuc();
    void thaydoi(int heso,int hemu); // ham thay doi so lieu cua input
    // setter
    void setA(int heso); // chinh he so
    void setB(int hemu); // chinh he mau
    // getter
    int getA();
    int getB();
    void xuatdonthuc();
    int giatri(int x);
    Donthuc tinhdaoham();
    Donthuc tong(Donthuc D2);
};

#endif