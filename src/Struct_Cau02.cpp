
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

typedef struct mangOXY
{
    double x,y;
    string ten;
}Oxy;

void toadodiem(Oxy &d){
    cout<<"nhap ten cua toa do diem"; 
    getline(cin,d.ten);
    cin.ignore();
    cout<<"nhap toa do x: "; cin>>d.x;
    cout<<"nhap toa do y: "; cin>>d.y;

}
void nhapmangtoado(Oxy A[],int &n){
    cout<<"nhap so mang ";
    cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"---"<<"nhap mang toa do thu "<<i+1<<"---\n";
        toadodiem(A[i]);
    }
}
void xuattoadodiem(Oxy d){
    cout<<d.ten<<"("<<d.x<<";"<<d.y<<")";
}
void xuatmangtoado(Oxy A[],int n){
    for(int i = 0;i < n;i++){
        cout<<"---"<<"mang toa do thu "<<i+1<<"---\n";
        xuattoadodiem(A[i]);
        cout<<endl;
    }
}
double khoangcach2diem(Oxy diema,Oxy diemb){
   double dx = diemb.x - diema.x;
   double dy = diemb.y - diema.y;
   return sqrt(dx * dx + dy * dy);
}
double khoangcach(Oxy diem){
    return sqrt(diem.x * diem.x + diem.y * diem.y);
}
int vitrigannhat(Oxy A[],int n){
    int vitri =0;
    double khoangcachmin = khoangcach(A[0]);
    for(int i =1;i < n;i++){
        double kc = khoangcach(A[i]);
        if(kc < khoangcachmin){
            khoangcachmin = kc;
            vitri = i;
        }
    }
    return vitri;
}
int vitrixanhat(Oxy A[],int n){
    int vitri = 0;
    double khoangcachmax = khoangcach(A[0]);
    for(int i = 1;i  < n;i++){
        double kc = khoangcach(A[i]);
        if(kc > khoangcachmax){
            khoangcachmax = kc;
            vitri =i;
        }
    }
    return vitri;
}
int main() {
    mangOXY diema,diemb;
    int n;
    mangOXY A[100];

    nhapmangtoado(A,n);
    xuatmangtoado(A,n);
    cout<<"khoang cach 2 diem toa do: "<<endl;
    cout<<"nhap diem 1:"<<endl;
    toadodiem(diema);
    cout<<"nhap diem 2"<<endl;
    toadodiem(diemb);
    cout<<"khoang cach giua 2 diem la "<<khoangcach2diem(diema,diemb)<<endl;

    int toadogannhat = vitrigannhat(A,n);
    cout<<"toa do co vi tri gan toa nhat la: ";
    xuattoadodiem(A[toadogannhat]);
    cout<<endl;
    int toadoxanhat = vitrixanhat(A,n);
    cout<<"toa do co vi tri xa toa do nhat la: ";
    xuattoadodiem(A[toadoxanhat]);
   cout<<endl;
    return 0;
}



