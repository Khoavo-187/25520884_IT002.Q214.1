#ifndef ARRAY_H
#define ARRAY_H


class cArray{
private:
    int n; // nhap vao so luong so nguyen 
    int* arr; // mang so nguyen luu tru
    void mergedtang(int l,int mid,int r); // ham tang dan
    void mergedgiam(int l,int mid,int r); // ham giam dan

    // ham merged sort dung de de quy va truy van cho tung ham
    void mergedSorttang(int l,int r);
    // ta dua cac ham bo tro cho viec sap xep tang dan, giam dan vao trong phan private dam bao ap dung cho moi mang 1 chieu nhap vao
    void mergedSortgiam(int l,int r);
public:
    cArray();
    cArray(int n);
    ~cArray();

    void nhap();
    void xuat();

    void mangngaunhien();
    int dem(int x);
    bool kiemtratangdan();
    int min_value_le();
    int max_songuyento();
    void saptangdan();
    void sapgiamdan();
};

#endif