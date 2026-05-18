#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class matrix{
private:
    double** arr; // cap phat mang cho n hang va m cot cho mang 2 chieu
    int row;
    int col;
    void capphat(); // cho bien cap nhat vao ma tran de co the cap phat de hon
    void giaiphong(); // giai phong cho mang 2 chieu
public:
    matrix();
    matrix(int row,int col);
    matrix(const matrix& other);
    ~matrix();

    int getCol();
    int getRow();
    // cac phep toan can thiet cho ma tran
    matrix operator+(matrix M2) const;
    matrix operator-(matrix M2) const;
    matrix operator*(matrix M2) const; // ma tran x ma tran
    vector<double> operator*(const vector<double>& V1) const; // ma tran x vector

    friend istream& operator>>(istream& is,matrix &M1);
    friend ostream& operator<<(ostream& os, matrix M1);
};

#endif