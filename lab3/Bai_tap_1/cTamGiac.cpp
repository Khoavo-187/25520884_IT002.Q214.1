#include <bits/stdc++.h>
#include "cTamGiac.h"
#define PI 3.14

using namespace std;

cTamGiac::cTamGiac(){
    A = Diem();
    B = Diem();
    C = Diem();
}

cTamGiac::cTamGiac(Diem A,Diem B,Diem C){
    this->A = A;
    this->B = B;
    this->C = C;
}

cTamGiac::~cTamGiac(){
    // khong can thiet do day khong phai la cap phat dong ==> Khi xoa se tu dong huy cac object thuong 
}

void cTamGiac::nhap(){
    cout<<"nhap toa do cho dinh A"<<endl;
    A.nhap();
    cout<<endl;
    cout<<"nhap toa do cho dinh B: "<<endl;
    B.nhap();
    cout<<"nhap toa do cho dinh C: "<<endl;
    C.nhap();
}

void cTamGiac::xuat(){
    cout<<"xuat toa do cho tam giac ABC: "<<endl;
    cout<<"toa do A: ";
    A.xuat();
    cout<<endl;
    cout<<"toa do B: ";
    B.xuat();
    cout<<endl;
    cout<<"toa do C: ";
    C.xuat();
}
// ham rieng de tinh khoang cach
double distance(Diem A,Diem B){
    double dx = pow((B.GetX() - A.GetX()),2);
    double dy = pow((B.GetY() - A.GetY()),2);
    return sqrt(dx + dy);
}
int cTamGiac::Kiemtratamgiac(){
    // dau tien tinh cac do dai cac canh de phan loai
    double AB = distance(A,B);
    double BC = distance(B,C);
    double AC = distance(A,C);

    // dau tien la dieu kien kiem tra co phai la tam giac hay khong
    if(AB + BC <= AC || BC + AC <= AB || AB + AC <= BC){
        cout<<"khong phai la tam giac hop le!"<<endl;
        return 0; // ==> false khong ton tai
    }
    if(AB == BC &&  BC == AC){
        cout<<"Day la tam giac deu ";
    }
    else if(AB == BC || AB == AC || BC == AC){
        cout<<"day la tam giac can ";
    }
    else{
        cout<<"day la tam giac thuong ";
    }

    // bat dau phan loai theo goc bang cach xet canh nao dai nhat de xet
    double arr[] = {AB,BC,AC}; // cho cac do dai canh vao mang de xac dinh
    // sap xep tang dan
    sort(arr,arr + 3);
    // dieu kien de check tam giac vuong la a^2 + b^2 == c^2 ==> c^2 la so lon nhat
    double max_val = arr[2];
    double check = arr[0] * arr[0] + arr[1] * arr[1] - max_val * max_val;
    if(abs(check) <= 1e-9){
        cout<<"va la tam giac vuong"<<endl;
    }
    else if(check < 0){
        cout<<"va day la tam giac tu"<<endl;
        // vi tam giac tu co canh lon nhat luon lon hon so voi 2 canh con lai
    }
    else{
        cout<<"va la tam giac nhon"<<endl;
    }

    return 1;
}

double cTamGiac::ChuVi(){
    return distance(A,B) + distance(B,C) + distance(A,C);
}
double cTamGiac::DienTich(){
    double p = (distance(A,B) + distance(B,C) + distance(A,C)) / 2.0;
    return sqrt(p*(p - distance(A,B)) * (p - distance(B,C)) * (p - distance(A,C)));
}

void cTamGiac::TinhTien(double dx, double dy){
    // lưu giá trị ban đầu
    double ax0 = A.GetX(), ay0 = A.GetY();
    double bx0 = B.GetX(), by0 = B.GetY();
    double cx0 = C.GetX(), cy0 = C.GetY();

    // set giá trị mới
    A.SetX(ax0 + dx);  A.SetY(ay0 + dy);
    B.SetX(bx0 + dx);  B.SetY(by0 + dy);
    C.SetX(cx0 + dx);  C.SetY(cy0 + dy);

    cout << "Toa do A sau tinh tien: ";
    A.xuat();
    cout<<endl;
    cout << "Toa do B sau tinh tien: ";
    B.xuat();
    cout<<endl;
    cout << "Toa do C sau tinh tien: ";
    C.xuat();
    cout<<endl;
}

void cTamGiac::Quay(double goc, Diem tam){
    double ox = tam.GetX(), oy = tam.GetY();
    double rad = goc * PI / 180.0;

    // lưu hết trước khi set
    double ax0 = A.GetX(), ay0 = A.GetY();
    double bx0 = B.GetX(), by0 = B.GetY();
    double cx0 = C.GetX(), cy0 = C.GetY();

    A.SetX(ox + (ax0-ox)*cos(rad) - (ay0-oy)*sin(rad));
    A.SetY(oy + (ax0-ox)*sin(rad) + (ay0-oy)*cos(rad));

    B.SetX(ox + (bx0-ox)*cos(rad) - (by0-oy)*sin(rad));
    B.SetY(oy + (bx0-ox)*sin(rad) + (by0-oy)*cos(rad));

    C.SetX(ox + (cx0-ox)*cos(rad) - (cy0-oy)*sin(rad));
    C.SetY(oy + (cx0-ox)*sin(rad) + (cy0-oy)*cos(rad));
}

void cTamGiac::PhongTo(double ti_le){
    double ox = (A.GetX() + B.GetX() + C.GetX()) / 3.0;
    double oy = (A.GetY() + B.GetY() + C.GetY()) / 3.0;

    double ax0 = A.GetX(), ay0 = A.GetY();
    double bx0 = B.GetX(), by0 = B.GetY();
    double cx0 = C.GetX(), cy0 = C.GetY();

    A.SetX(ox + (ax0 - ox) * ti_le);
    A.SetY(oy + (ay0 - oy) * ti_le);

    B.SetX(ox + (bx0 - ox) * ti_le);
    B.SetY(oy + (by0 - oy) * ti_le);

    C.SetX(ox + (cx0 - ox) * ti_le);
    C.SetY(oy + (cy0 - oy) * ti_le);
}

void cTamGiac::thunho(double ti_le){
    if(ti_le <= 0){
        cout << "ti le phai lon hon 0!" << endl;
        return;
    }
    // thu nho 2x = phong to 0.5x
    PhongTo(1.0 / ti_le);
}