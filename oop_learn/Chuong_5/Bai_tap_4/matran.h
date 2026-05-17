#ifndef MATRAN_H
#define MATRAN_H
#include <iostream>
using namespace std;
class matran{
private:
    int** arr; // su dung con tro doi de cap phat n phan tu cot voi moi m hang
    int m; // m hang
    int n;// n cot
    // private method de co the cap phat cho mang 2 chieu va delete
    void capphat();
    void giaiphong(); 
public:
    matran();
    matran(int n,int m);
    matran(const matran& other); // tao them 1 copy constructor de copy object nhieu hon
    ~matran();

    // su dung nap chong toan tu
    void ngaunhien();
    friend istream& operator>>(istream &is,matran &M);
    friend ostream& operator<<(ostream &os,matran M);

    matran operator+(const matran M2);
    matran operator*(const matran M2);
    matran operator-(const matran M2);
};

#endif