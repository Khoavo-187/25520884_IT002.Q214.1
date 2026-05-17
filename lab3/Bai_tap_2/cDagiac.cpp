#include <bits/stdc++.h>
#include "cDagiac.h"
#define PI 3.14

using namespace std;

cDagiac::cDagiac(){
    n = 0;
    arr = NULL;
}

cDagiac::cDagiac(int n){
    this->n = n;
    arr = new Diem[n];
}

cDagiac::~cDagiac(){
    delete[] arr;
}

void cDagiac::nhap(){
    cout<<"nhap so dinh muon nhap cho da giac la: "<<endl;
    cin>>n;
    delete[] arr;
    arr = new Diem[n];
    for(int i = 0;i < n;i++){
        cout<<"nhap toa do cho dinh thu "<<i + 1<<" la: ";
        arr[i].nhapdiem();
        cout<<endl;
    }
}

void cDagiac::xuat(){
    cout<<"cac toa do dinh cua da giac la: "<<endl;
    for(int i = 0;i < n;i++){
        arr[i].xuatdiem();
    }
}
// ham kiem tra da giac xem da giac nay la hinh j

double distance(Diem A,Diem B){
    double dx = pow((B.GetX() - A.GetX()),2);
    double dy = pow((B.GetY() - A.GetY()),2);
    return sqrt(dx + dy);
}




// ta can cong thuc tich vo huong de co the tinh duoc xem day co phai la hinh vuong khong, tinh tung cai theo vector toa do diem
// VD vector AB va BC
double tichvohuong(Diem A,Diem B,Diem C){
    double x1 = B.GetX() - A.GetX();
    double y1 = B.GetY() - A.GetY();
    // tinh AB = B - A
    double x2 = C.GetX() - B.GetX();
    double y2 = C.GetY() - B.GetY();
    // tinh BC = C - B
    return x1 * x2 + y1 * y2;
}

// tiep theo tinh dua tren cac cap canh song song ==> suy ra duoc tu giac do la hinh binh hanh
bool songsong(Diem A,Diem B,Diem C,Diem D){
    // doi voi song song dua tren 2 duong thang vector song song voi nhau 
    // AB va CD
    double x1 = B.GetX() - A.GetX();
    double y1 = B.GetY() - A.GetY();

    double x2 = D.GetX() - C.GetX();
    double y2 = D.GetY() - C.GetY();

    return abs(x1 * y2 - y1 * x2) < 1e-6;
}
int cDagiac::kiemtradagiac(){
    if(n == 3){
        // check xem day la loai tam giac gi neu no co 3 diem
        double A = distance(arr[0],arr[1]);
        double B = distance(arr[1],arr[2]);
        double C = distance(arr[0],arr[2]);
        // tinh ra do dai 3 canh cua da giac tren
        if(A + B <= C || A + C <= B || B + C <= A){
            cout<<"day khong phai la 1 tam giac hop le";
            return -1;
        }
        if(A == B && B == C){
            cout<<"day la tam giac deu ";
        }
        else if(A == B || A == C || C == B){
            cout<<"day la tam giac can ";
        }
        else{
            cout<<"day la tam giac thuong ";
        }

        double new_arr[] = {A,B,C};
        sort(new_arr,new_arr + 3);
        double check = new_arr[0] * new_arr[0] + new_arr[1] * new_arr[1] - new_arr[2] * new_arr[2];
        if(abs(check) <= 1e-6){
            cout<<"va day la tam giac vuong"<<endl;
        }
        else if(check < 0){
            cout<<"va day la tam giac tu"<<endl;
        }
        else{
            cout<<"va day la tam giac nhon"<<endl;
        }
        return 1;
    }
    if(n == 4){
        // ta dat cac diem dua vao n = 4 cho de theo doi
        Diem A = arr[0], B = arr[1],C = arr[2],D = arr[3];

        // tinh ra khoang cach 
        double AB = distance(A,B);
        double BC = distance(B,C);
        double CD = distance(C,D);
        double AD = distance(A,D);
        // tim ra quan he song song tu cac cap vector
        bool AB_ss_CD = songsong(A,B,C,D); // TH AB song song CD
        bool BC_ss_AD = songsong(A,D,B,C); // Th AD song song BC
        bool HBH = AB_ss_CD && BC_ss_AD; // truong hop la hinh binh hanh neu no co 2 duong thang song song voi nhau

        // bat dau kiem tra tu giac nay lieu co goc vuong khong
        bool vuong1 = abs(tichvohuong(A,B,C)) < 1e-6;
        bool vuong2 = abs(tichvohuong(D,A,B)) < 1e-6;
        bool vuong3 = abs(tichvohuong(B,C,D)) < 1e-6;
        bool vuong4 = abs(tichvohuong(C,D,A)) < 1e-6;
        bool vuonggoc = vuong1 && vuong2 && vuong3 && vuong4;
        // truong hop la hinh vuong neu no co du 4 goc la 90 do

        bool canhbang =  abs(AB - BC) < 1e-6 && abs(BC - CD) < 1e-6 && abs(CD - AD) < 1e-6;

        if(canhbang && vuonggoc && HBH){
            cout<<"day la hinh vuong"<<endl;
        }
        else if(vuonggoc && HBH){
            cout<<"day la hinh chu nhat"<<endl;
        }
        else if(canhbang && HBH){
            cout<<"day la hinh thoi"<<endl;
        }
        else if(HBH){
            cout<<"day la hinh binh hanh"<<endl;
        }
        else{
            cout<<"day la tu giac thuong"<<endl;
        }
        return 1;
    }
    if(n == 5){
        cout<<"day la hinh ngu giac"<<endl;
        return 1;
    }
    if(n == 6){
        cout<<"day la hinh luc giac"<<endl;
        return 1;
    }
    if(n == 7){
        cout<<"day la hinh that giac"<<endl;
        return 1;
    }
    if(n == 8){
        cout<<"day la hinh bat giac"<<endl;
        return 1;
    }
    if(n == 9){
        cout<<"day la hinh cuu giac"<<endl;
        return 1;
    }
    if(n == 10){
        cout<<"day la hinh thap giac"<<endl;
        return 1;
    }
    else{
        cout<<"day la hinh da giac nhieu diem"<<endl;
        return 1;
    }

}

double cDagiac::chuvi(){
    double sum = 0;
    for(int i = 0;i < n;i++){
        int j = (i + 1) % n;
        sum += distance(arr[i],arr[j]);
    }
    return sum;
}
double cDagiac::dientich(){
    double sum = 0;
    for(int i =0;i < n;i++){
        int j = (i + 1) % n;
        sum += ((arr[i].GetX() * arr[j].GetY()) - (arr[i].GetY() * arr[j].GetX()));
    }
    return abs(sum) / 2;
}


void cDagiac::tinhtien(double dx,double dy){
    for(int i = 0;i < n;i++){
        arr[i].SetX(arr[i].GetX() + dx);
        arr[i].SetY(arr[i].GetY() + dy);
    }
}

void cDagiac::quay(double goc,Diem tam){
    double rad = goc * PI / 180.0;
    for(int i = 0;i < n;i++){
        double oldx = arr[i].GetX();
        double oldy = arr[i].GetY();
        arr[i].SetX(tam.GetX() + (oldx - tam.GetX()) * cos(rad) - (oldy - tam.GetY()) * sin(rad));
        arr[i].SetY(tam.GetY() + (oldx - tam.GetX()) * sin(rad) + (oldy - tam.GetY()) * cos(rad));
    }
}

void cDagiac::phongto(double ti_le){
    // tim trong tam cua da giac de phong to ra
    double ox = 0,oy = 0;
    for(int i = 0;i < n;i++){
        ox += arr[i].GetX();
        oy += arr[i].GetY();
    }
    ox /= n;
    oy /= n;

    for(int i = 0;i < n;i++){
        arr[i].SetX(ox + (arr[i].GetX() - ox) * ti_le);
        arr[i].SetY(oy + (arr[i].GetY() - oy) * ti_le);
    }
}

void cDagiac::thunho(double ti_le){
    if(ti_le <= 0){
        cout<<"ti le phai lon hon 0"<<endl;
        return;
    }
    phongto(1.0/ti_le);
}