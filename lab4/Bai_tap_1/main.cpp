#include <bits/stdc++.h>
#include "sophuc.h"
#include "sophuc.cpp"
using namespace std;


int main() {
    
    sophuc P1(4.5),P2(7.8,-9.6); // khoi tao 2 lop so phuc P1,P2 co tham so truoc de test truong hop dac biet
    cout<<"So phuc P1: "<<P1<<endl;
    cout<<"So phuc P2: "<<P2<<endl;

    //  cac phep toan
    cout<<"P1 + P2 = "<<P1 + P2<<endl;
    cout<<"P1 - P2 = "<<P1 - P2<<endl;
    cout<<"P1 * P2 = "<<P1 * P2<<endl;
    cout<<"P1 / P2 = "<<P1 / P2<<endl;

    // phuong thuc kiem tra 2 so phuc
    if(P1 == P2){
        cout<<"Hai so phuc nay bang nhau"<<endl;
    }
    else if(P1 != P2){
        cout<<"Hai so phuc nay khong bang nhau"<<endl;
    }

    // Den voi khoi tao so phuc bang nhap input
    sophuc P3,P4;
    cout<<"Nhap so phuc cho P3: "<<endl;
    cin>>P3;
    cout<<"So phuc P3: "<<P3<<endl;

    cout<<"Nhap so phuc cho P4: "<<endl;
    cin>>P4;
    cout<<"So phuc P4: "<<P4<<endl;

    // cac phep toan
    cout<<"P3 + P4 = "<<P3 + P4<<endl;
    cout<<"P3 - P4 = "<<P3 - P4<<endl;
    cout<<"P3 * P4 = "<<P3 * P4<<endl;
    cout<<"P3 / P4 = "<<P3 / P4<<endl;
    // phuong thuc so sanh
    if(P3 == P4){
        cout<<"Hai so phuc nay bang nhau"<<endl;
    }
    else if(P3 != P4){
        cout<<"Hai so phuc nay khong bang nhau"<<endl;
    }
    return 0;
}