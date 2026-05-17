#include <bits/stdc++.h>
#include "Dathuc.h"
using namespace std;

int main(){
    dathuc D1,D2;

    cout<<"Nhap da thuc D1: "<<endl;
    cin>>D1;
    cout<<"Nhap da thuc D2: "<<endl;
    cin>>D2;

    cout<<"Da thuc D1(x): "<<D1<<endl;
    cout<<"Da thuc D2(x): "<<D2<<endl;

    double x;
    cout<<"Nhap so x: "; cin>>x;

    cout<<"Ket qua D1("<<x<<"): "<<D1.total(x)<<endl;
    cout<<"Ket qua D2("<<x<<"): "<<D2.total(x)<<endl;

    cout<<"D1 + D2 = "<<D1 + D2<<endl;
    cout<<"D1 - D2 = "<<D1 - D2 <<endl;
    cout<<"D1 * D2 = "<<D1 * D2<<endl;


    if(D1 == D2){
        cout<<"Hai da thuc bang nhau";
    }
    else if(D1 != D2){
        cout<<"Hai da thuc khong bang nhau"<<endl;
        if(D1 > D2){
            cout<<"D1 lon hon D2";
        }
        else if(D1 < D2){
            cout<<"D1 be hon D2";
        }
    }
}