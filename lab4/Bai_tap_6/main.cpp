#include <bits/stdc++.h>
#include "CVector.h"
using namespace std;



int main() {
    CVector V1,V2;

    cout<<"Nhap thong tin cho vector V1: ";
    cin>>V1;
    cout<<"Nhap thong tin cho vector V2: ";
    cin>>V2;

    cout<<"Vector V1: "<<V1<<endl;
    cout<<"Vector V2: "<<V2<<endl;

    cout<<"V1 + V2 = "<<V1 + V2<<endl;
    cout<<"V1 - V2 = "<<V1 - V2<<endl;
    cout<<"V1 * V2 = "<<V1 * V2<<endl;

    int x;
    cout<<"Nhap so x de nhan voi vector V1 va V2: "; cin>>x;
    CVector res1 = V1.total(x);
    CVector res2 = V2.total(x);
    cout<<"V1 nhan voi so thuc "<<x<<" la: "<<res1<<endl;

    cout<<"V2 nhan voi so thuc "<<x<<" la: "<<res2<<endl;


    cout<<"Tong do dai (norm) cua vector V1 la: "<<V1.norm()<<endl;
    cout<<"Tong do dai (norm) cua vector V1 la: "<<V2.norm()<<endl;

    if(V1 == V2){
        cout<<"2 vector nay bang nhau";
    }
    else if(V1 != V2){
        cout<<"2 vector nay khong bang nhau"<<endl;;
        if(V1 > V2){
            cout<<"Vector V1 lon hon Vector V2"<<endl;
        }
        else if(V1 < V2){
            cout<<"Vector V2 lon hon vector V1"<<endl;
        }
    }
    return 0;
}