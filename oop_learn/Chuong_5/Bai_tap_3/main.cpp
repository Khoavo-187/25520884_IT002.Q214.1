#include <bits/stdc++.h>
#include "dathuc.h"
#include "dathuc.cpp"

using namespace std;

int main(){
    dathuc D0; // khoi tao da thuc bac 0
    cout<<"da thuc bac 0: "<<D0<<endl;
    // gia tri n bat ki
    dathuc D1,D2;
    cout<<"nhap da thuc D1: "; cin>>D1;
    cout<<endl;
    cout<<"nhap da thuc D2: "; cin>>D2;
    cout<<endl;
    
    cout<<"da thuc D1 la: "<<D1<<endl;
    cout<<"da thuc D2 la: "<<D2<<endl;
    int x;
    cout<<"nhap gia tri cua bien x de tinh: "; cin>>x;
    long double res = D1.giatri(x);
    cout<<"D1: "<<res<<endl;
    cout<<"D1 + D2 = "<<D1 + D2<<endl;
    cout<<"D1 - D2 = "<<D1 - D2<<endl;
    return 0;
}