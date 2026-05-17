#ifndef CBVC_H
#define CBVC_H
#include <string>
using namespace std;

class CBVC{
protected:
    string macanbo;
    string hoten;
    string gioitinh;
public:
    virtual double Tinhluong() = 0; // cho bien tinh luong bang 0 de tu tinh 
    CBVC(); // constructor
    CBVC(string macanbo,string hoten,string gioitinh);
    // ham nhap xuat cua input
    virtual void nhap();
    virtual void xuat();
};

#endif