#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Duongtron{
private:
    double x;
    double y; // 2 toa do x va y 
    double bankinh;
public:
    Duongtron(){
        x = 0;
        y = 0;
        bankinh = 1;
    }
    void nhap(){
        cout<<"nhap toa do va ban kinh cho duong tron";
        cin>>x>>y>>bankinh;
    }
    
    double dientich(){
        return PI * bankinh * bankinh;
    }
    double chuvi(){
        return 2 * PI * bankinh;
    }
    void xuat(){
        cout<<"Toa do duong tron la : "<<"("<<x<<";"<<y<<")"<<endl;
        cout<<"ban kinh duong tron la "<<bankinh<<endl;
    }
};  
int main() {
    Duongtron H1;
    H1.nhap();
    //tinh dien tich va chu vi
    double dtich = H1.dientich();
    double cvi = H1.chuvi();
    // xuat thong tin ra
    cout<<"thong tin duong tron la: "<<endl;
    H1.xuat();
    cout<<"dien tich hinh tron la: "<<dtich<<endl;
    cout<<"chu vi hinh tron la: "<<cvi;
    
    return 0;
}