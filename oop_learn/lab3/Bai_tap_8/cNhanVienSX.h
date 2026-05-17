#ifndef NHANVIEN_SX
#define NHANVIEN_SX
#include "Date.h"
using namespace std;

class cNhanVienSX{
private:
    string ID;
    string hoten;
    Date ngaysinh;
    int sanpham;
    int dongia;
public:
    cNhanVienSX();
    cNhanVienSX(string ID,string hoten,Date ngaysinh,int sanpham,int dongia);
    // setter
    void setID(string ID);
    void setName(string hoten);
    void setDate(Date ngaysinh);
    void setSP(int sanpham);
    void setGia(int dongia);
    // getter
    string getID();
    string getName();
    Date getDate();
    int getSP();
    int getGia();

    void nhap();
    void xuat();

    long long salary(); // su sung long long cho luong tranh truong hop overflow neu nhan qua nhieu
};

#endif