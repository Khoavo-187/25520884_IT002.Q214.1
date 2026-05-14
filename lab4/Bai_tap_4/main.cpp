#include <bits/stdc++.h>
#include "CDate.h"
using namespace std;


int main() {
    CDate D1,D2;
    cout<<"Nhap D1: "<<endl;
    cin>>D1;
    cout<<"Nhap D2: "<<endl;
    cin>>D2;

    cout<<"D1: "<<D1<<endl;
    cout<<"D2: "<<D2<<endl;

    int s;
    cout<<"Nhap mot so ngay s de cong hoac tru vao cac ngay khac: ";
    cin>>s;
    if(s >= 0){
        cout<<D1<<" + "<<s<<" = "<<D1 + s<<endl;
        cout<<D2<<" + "<<s<<" = "<<D2 + s<<endl;
    }
    else{
        cout<<D1<<" - "<<abs(s)<<" = "<<D1 + s<<endl;
        cout<<D2<<" - "<<abs(s)<<" = "<<D2 + s<<endl;
    }

    ++D1;
    cout<<"Ngay D1 sau khi tang len 1: "<<D1<<endl;
    --D2;
    cout<<"Ngay D2 sau khi giam di 1: "<<D2<<endl;

    // bai toan tinh lai suat ngan hang hang thang dua vao tien von gui vao ngan hang sau do ngay rut so tien ra lay duoc tong so tien co von lan lai

    // vi du cho bai toan nhap so von n vao ngan hang vao ngay D1, Date D2 la ngay rut tien ra voi lai suat moi thang la k% 
    // ==> yeu cau tinh tinh tong tien nhan duoc

    CDate D3,D4;
    int n;
    double k;
    cout<<"Nhap so tien von muon dau tu vao"; cin>>n;
    cout<<"Nhap lai suat ngan hang moi nam: "; cin>>k;
    cout<<"Nhap ngay gui von: "; cin>>D3;
    cout<<"Nhap ngay rut tien ra: "; cin>>D4;

    int all_days = abs(D3 - D4);
    double t = all_days / 365.0; // tinh ti le cho tong so ngay cho rut tien
    cout<<"Tong so ngay la: "<<all_days<<" ngay"<<endl;
    double long money = n * (1 + k * t);
    cout<<"Tong so tien nhan lai duoc la: "<<money<<" dong";


    return 0;
}