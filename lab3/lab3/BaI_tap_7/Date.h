#ifndef DATE_H
#define DATE_H

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int day,int month,int year);
    int songaytrongthang();
    int sosanh(Date D2); // ham so sanh giua cac ngay sinh lon tuoi nhat
    void nhap();
    void xuat();
};

#endif