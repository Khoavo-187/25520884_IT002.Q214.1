#ifndef CDATE_H
#define CDATE_H
using namespace std;

class CDate{
private:
    int ngay;
    int thang;
    int nam;
    void normalize(); // ham chuan hoa ngay thang nam sau khi cap nhat 
    bool namnhuan() const;
    int ngaytrongthang() const;
public:
    CDate(int ngay = 1,int thang = 1,int nam = 1);
    void set(int ngay,int thang,int nam);

    int totaldays() const;
    //cac phuong thuc cong ngay
    CDate operator+(int s) const; // cong them s ngay
    CDate operator-(int s) const; // tru di s ngay
    CDate& operator++(); // prefix them 1 ngay
    CDate& operator--(); // prefix bot di 1 ngay
    int operator-(const CDate& D2) const; // khoang cach giua 2 ngay

    // display
    friend istream& operator>>(istream& is, CDate &D2);
    friend ostream& operator<<(ostream& os,CDate D2);
};

#endif