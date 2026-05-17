#ifndef CTIME_H
#define CTIME_H
using namespace std;

class CTIME{
private:    
    int gio;
    int phut;
    int giay;
    void normalize(); // dung de xu li cac truong hop tran gio,phut,giay neu vuot qua so quy dinh
public:
    CTIME(int gio = 0,int phut = 0,int giay = 0);
    void set(int gio,int phut,int giay);

    // cac phuong thuc toan tu 
    CTIME operator+(int s) const;
    CTIME operator-(int s) const;
    CTIME operator++() ; // prefix
    CTIME operator--() ; // prefix

    //  cac ham display

    friend istream& operator>>(istream& is,CTIME &T1);
    friend ostream& operator<<(ostream& os,CTIME T1);
};

#endif