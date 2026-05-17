#include <bits/stdc++.h>
#include "phanso.h"
using namespace std;


int main() {
    // khoi tao co tham so truoc va test truong hop dac biet
    phanso S1(12,-45),S2(-87);
    cout<<"Phan so S1: "<<S1<<endl;
    cout<<"Phan so S2: "<<S2<<endl;

    // cac cong thuc tinh toan'
    cout<<"S1 + S2 = "<<S1 + S2<<endl;
    cout<<"S1 - S2 = "<<S1 - S2<<endl;
    cout<<"S1 * S2 = "<<S1 * S2<<endl;
    cout<<"S1 / S2 = "<<S1 / S2<<endl;
    // cac phuong thuc so sanh
    if(S1 > S2){
        cout<<"Phan so S1 lon hon S2"<<endl;
    }
    else if(S1 == S2){
        cout<<"Phan so S1 bang voi phan so S2"<<endl;
    }
    else if(S1 < S2){
        cout<<"Phan so S1 be hon S2";
    }

    // TH khac khoi tao bang input toan tu >>
    phanso S3,S4;
    cout<<"Nhap phan so S3: ";
    cin>>S3;
    cout<<"Nhap phan so S4: ";
    cin>>S4;
    
    cout<<"Phan so S3: "<<S3<<endl;
    cout<<"Phan so S4: "<<S4<<endl;

    // cac cong thuc tinh toan
    cout<<"S3 + S4 = "<<S3 + S4<<endl;
    cout<<"S3 - S4 = "<<S3 - S4<<endl;
    cout<<"S3 * S4 = "<<S3 * S4<<endl;
    cout<<"S3 / S4 = "<<S3 / S4<<endl;

    // so sanh 2 phan so
    if(S3 > S4){
        cout<<"Phan so S1 lon hon S2"<<endl;
    }
    else if(S3 == S4){
        cout<<"Phan so S1 bang voi phan so S2"<<endl;
    }
    else if(S3 < S4){
        cout<<"Phan so S1 be hon S2";
    }
    return 0;
}