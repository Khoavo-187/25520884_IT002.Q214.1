#ifndef PHANSO_H
#define PHANSO_H
using namespace std;

class phanso{
private:
    int tuso;
    int mauso;
public:
    phanso(int tuso = 0,int mauso = 1); 
    void set(int tuso,int mauso);
    // truong hop dac biet neu mau == 1
    
    // phuong thuc rut gon phan so
    void rutgon();
    // cac toan tu cho 2 phan so

    phanso operator+(phanso P2) const;
    phanso operator-(phanso P2) const;
    phanso operator*(phanso P2) const;
    phanso operator/(phanso P2) const;

    // phuong thuc so sanh
    bool operator==(phanso P2) const;
    bool operator<(phanso P2) const;
    bool operator>(phanso P2) const;

    // nhap va xuat cac input , output

    friend istream& operator>>(istream& is,phanso &P2);
    friend ostream& operator<<(ostream& os,phanso P2);

};

#endif