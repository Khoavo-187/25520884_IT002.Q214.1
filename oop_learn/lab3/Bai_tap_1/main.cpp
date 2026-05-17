#include <bits/stdc++.h>
#include "Diem.h"
#include "Diem.cpp"
#include "cTamGiac.cpp"
#include "cTamGiac.h"

using namespace std;

int main(){
    cTamGiac T1;
    // khoi tao tam giac bang cach nhap
    T1.nhap();
    cout<<"Xuat tam giac: "; // tam giac hien tai
    T1.xuat();

    cout<<"kiem tra tam giac T1: ";
    T1.Kiemtratamgiac();

    cout<<"Chu vi tam giac la: "<<T1.ChuVi()<<endl;
    cout<<"dien tich tam giac la: "<<T1.DienTich()<<endl;

    cout<<"nhap tinh tien vecto cho tung diem cua dinh ABC: ";
    double dx,dy;
    cin>>dx>>dy;
    cout<<"tinh tien cua tam giac ABC 3 toa do la(tam giac T1): "<<endl;
    T1.TinhTien(dx,dy);
    
    double goc;
    cout<<"nhap goc can xoay"; cin>>goc;
    Diem tam;
    cout<<"nhap diem can quay quanh: ";
    tam.nhap();
    cout<<"cac toa do diem sau khi quay la: ";
    T1.Quay(goc,tam);
    T1.xuat();
    double k;
    cout<<"nhap ti le phong to cho tam giac: "; cin>>k;
    cout<<"cac toa do cua tam giac sau khi phong to ";
    T1.PhongTo(k);
    T1.xuat();
    cout<<endl;
    double tile;
    cout<<"nhap ti le thu nho cua tam giac: "; cin>>tile;
    cout<<"cac toa do cua tam giac sau khi thu nho ";
    T1.thunho(tile);
    T1.xuat();

    return 0;
    
}