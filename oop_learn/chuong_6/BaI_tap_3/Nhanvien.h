#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <string>
#include <iostream>
using namespace std;

class Nhanvien{
protected:
    string manhanvien;
    string hoten;
    int age;
    string tel;
    string email;
    double luongcoban;
public:
    Nhanvien();
    Nhanvien(string manhanvien,string hoten,int age,string tel,string email,double luongcoban);
    virtual ~Nhanvien();
    virtual double long Tinhluong() = 0;
    virtual void nhap();
    virtual void xuat();
};

#endif