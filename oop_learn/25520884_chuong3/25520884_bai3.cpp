#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Toado{
private:
    double x;
    double y;
public:
    void nhap(){
        cout<<"nhap vao toa do 2 diem x va y";
        cin>>x>>y;
    }
    double khoangcach(Toado P2){
        double dx = P2.x - x;
        double dy = P2.y - y;
        return sqrt(dx * dx + dy * dy);
    }
    void xuat(){
        cout<<"toa do x:"<<x<<endl;
        cout<<"toa do y:"<<y<<endl;
    }
};  
int main() {
    Toado P1,P2; // nhap vao toa do 2 diem de tinh khoang cach
    cout<<"nhap toa do cho P1"<<endl;
    P1.nhap();
    cout<<"nhap toa do cho P2"<<endl;
    P2.nhap();
    double res = P1.khoangcach(P2);
    // xuat thong tin
    cout<<"thong tin cua P1"<<endl;
    P1.xuat();
    cout<<"thong tin cua P2"<<endl;
    P2.xuat();
    cout<<"khoang cach giua 2 diem la: "<<res;
    return 0;
}