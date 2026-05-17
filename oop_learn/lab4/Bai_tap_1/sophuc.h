#ifndef SOPHUC_H
#define SOPHUC_H
using namespace std;

class sophuc{
private:
    double thuc;
    double ao;
public:
    // cac phuong thuc khoi tao
    // phuong thuc thiet lap duy nhat
    sophuc(double thuc = 0.0,double ao = 0.0); 

    void set(double thuc,double ao); 

    // cac toan tu operator

    sophuc operator+(sophuc P2) const;
    sophuc operator-(sophuc P2) const;
    sophuc operator*(sophuc P2) const;
    sophuc operator/(sophuc P2) const;

    // cac phuong thuc kiem tra kiem tra bang , khong bang 
    bool operator==(sophuc P2) const;
    bool operator!=(sophuc P2) const;

    // cac phuong thuc cin, cout input
    friend istream& operator>>(istream& is,sophuc &P2);
    friend ostream& operator<<(ostream& os,sophuc P2);
};

#endif