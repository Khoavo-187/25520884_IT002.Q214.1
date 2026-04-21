#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "Date.h"
using namespace std;
class cNhanVienVP{
private:
    string ID;
    string hoten;
    Date ngaysinh;
    int salary;
public:
    cNhanVienVP();
    cNhanVienVP(string ID,string hoten,Date ngaysinh,int salary);
    // setter
    void setID(string ID);
    void setName(string hoten);
    void setDate(Date ngaysinh);
    void setLuong(int salary);
    // getter
    string getID();
    string getName();
    Date getDate();
    int getSalary();
    // display
    void nhap();
    void xuat();
};

#endif