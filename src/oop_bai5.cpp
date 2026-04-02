#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
struct Student
{
    int ID;
    string hoten;
    double toan;
    double van;
    double ly;
    double hoa;
    
    Student(){
        ID = 123;
        hoten = "Nguyen Van A";
        toan = 5.0;
        van = 5.0;
        ly = 5.0;
        hoa = 5.0;
    }
    void nhapthongtin(){
        string hovaten;
        int mahocsinh;
        double t,v,l,h;
        cout<<"nhap ho va ten hoc sinh: ";
        getline(cin,hovaten);
        cout<<"nhap ma hoc sinh: "; cin>>mahocsinh;
        cout<<"nhap diem toan: "; cin>>t;
        cout<<"nhap diem van: "; cin>>v;
        cout<<"nhap diem ly: "; cin>>l;
        cout<<"nhap diem hoa: "; cin>>h;

        hoten = hovaten;
        ID = mahocsinh;
        toan = t;
        van = v;
        ly=l;
        hoa = h;
    }
    double diemtrungbinh(){
        return (toan + van + ly + hoa) / 4.0;
    }
    void xuatthogntin(){
        cout<<"thong tin sinh vien: "<<endl;
        cout<<"Ho va ten: "<<hoten<<endl;
        cout<<"Ma hoc sing: "<<ID<<endl;
        cout<<"diem toan: "<<toan<<endl;
        cout<<"diem van: "<<van<<endl;
        cout<<"diem ly: "<<ly<<endl;
        cout<<"diem hoa: "<<hoa<<endl;        
    }
};


int main() {
    Student d1;
    cout<<"nhap thong tin cho sinh vien: "<<endl;
    d1.nhapthongtin();
    double dtb = d1.diemtrungbinh();
    d1.xuatthogntin();
    cout<<"diem trung binh la: "<<dtb;
    return 0;
}