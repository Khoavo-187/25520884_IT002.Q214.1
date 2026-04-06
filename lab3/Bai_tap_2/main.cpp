#include <bits/stdc++.h>
#include "Diem.h"
#include "cDagiac.h"
#include "Diem.cpp"
#include "cDagiac.cpp"
using namespace std;


int main(){
    cDagiac D1;
    D1.nhap();

    cout<<"xuat da giac: "<<endl;
    D1.xuat();

    cout<<"kiem tra da giac D1: ";
    D1.kiemtradagiac();

    cout<<"Chu vi da giac tren la: "<<D1.chuvi()<<endl;

    cout<<"dien tich da giac la: "<<D1.dientich()<<endl;

    cout<<"nhap tinh tien vecto cho da giac D1: ";
    double dx,dy; cin>>dx>>dy;
    cout<<"tinh tien cua da giac D1 la: "<<endl;
    D1.tinhtien(dx,dy);
    D1.xuat();
    double goc;
    cout<<"nhap goc can xoay";
    cin>>goc;
    Diem tam;
    cout<<"nhap diem can xoay quanh: ";
    tam.nhapdiem();
    cout<<"cac toa do sau khi quay la : ";
    D1.quay(goc,tam);
    D1.xuat();
    double ti_le;
    cout<<"nhap ti le phong to cho da giac: "; cin>>ti_le;
    cout<<"cac toa do cua da giac sau khi phong to ";
    D1.phongto(ti_le);
    D1.xuat();
    cout<<endl;
    double tile;
    cout<<"nhap ti le thu nho cua da giac: "; cin>>tile;
    cout<<"cac toa do cua da giac sau khi thu nho ";
    D1.thunho(tile);
    D1.xuat();
    return 0;
}