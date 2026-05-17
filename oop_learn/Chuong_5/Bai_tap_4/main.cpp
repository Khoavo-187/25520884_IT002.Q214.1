#include <bits/stdc++.h>
#include "matran.h"
#include "matran.cpp"
using namespace std;

int main(){
    matran M1,M2;

    cout<<"ma tran ngau nhien: "<<endl;
    M1.ngaunhien();

    cout<<"nhap thong so ma tran cho M1: ";
    cin>>M1;
    cout<<endl;
    cout<<"nhap thong so ma tran cho M2: ";
    cin>>M2;
    cout<<endl;
    cout<<"xuat ma tran M1: ";
    cout<<M1;
    cout<<endl;
    cout<<"xuat ma tran M2: ";
    cout<<M2;
    cout<<endl;

    cout<<"M1 + M2 = "<<M1 + M2<<endl;
    cout<<"M1 - M2 = "<<M1-M2<<endl;
    cout<<"M1 * M2 = "<<M1 * M2<<endl;
    return 0;
}