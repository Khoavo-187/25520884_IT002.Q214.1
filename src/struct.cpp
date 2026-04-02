// nhập xuất phấn số
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
struct phanso
{
    int tu;
    int mau;
};
int UCLN(int a, int b){
    if(b == 0) return a;
    return UCLN(b,a%b);
}
phanso rutgon(phanso ps){
    phanso ketqua;
    int  temp = UCLN(ps.tu,ps.mau);
    ketqua.tu=ps.tu / temp;
    ketqua.mau=ps.mau / temp;
    return ketqua;
}

phanso cong(phanso ps1, phanso ps2) {
    phanso ketqua;
    ketqua.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ketqua.mau = ps1.mau * ps2.mau;
    return rutgon(ketqua);
}
phanso tru(phanso ps1,phanso ps2){
    phanso ketqua;
    ketqua.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    ketqua.mau = ps1.mau * ps2.mau;
    return rutgon(ketqua);
}
phanso nhan(phanso ps1,phanso ps2){
    phanso ketqua;
    ketqua.tu = ps1.tu * ps2.tu;
    ketqua.mau = ps1.mau * ps2.mau;
    return rutgon(ketqua);
}
phanso chia(phanso ps1,phanso ps2){
    phanso ketqua;
    if(ps2.tu == 0){
        ketqua.tu = 0;
        ketqua.mau = 1;
        return ketqua;
    }
    ketqua.tu = ps1.tu * ps2.mau;
    ketqua.mau = ps2.tu * ps1.mau;
    return rutgon(ketqua);

}
void xuat(phanso ps){
    cout<<"xuat phan so: "<<ps.tu<< "/" <<ps.mau;

}
// sosanh
int sosanh(phanso ps1,phanso ps2){
    int a=ps1.tu * ps2.mau;
    int b=ps2.tu * ps1.mau
    if (a > b) {
        return 1;
    }
    else if (a < b) {
        return -1;
    } else return 0;
}

void nhapmang(phanso a[],int n){
    
}
int main() {
    phanso ps1,ps2;
    cout<<"nhap tu so 1: "; cin>>ps1.tu;

    cout<<"nhap mau so 1: "; cin>>ps1.mau;
    
    cout<<"nhap tu so 2: "; cin>>ps2.tu;
    cout<<"nhap mau so 2: "; cin>>ps2.mau;

    
    xuat(cong(ps1,ps2));
    xuat(tru(ps1,ps2));
    xuat(nhan(ps1,ps2));
    xuat(chia(ps1,ps2));
    return 0;
} 