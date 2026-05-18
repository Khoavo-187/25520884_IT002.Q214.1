#include <bits/stdc++.h>
#include "CMatrix.h"
using namespace std;

int main(){
    matrix M1,M2;

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

    int n;
    cout<<"Nhap vector de nhan voi ma tran: ";
    do{
        cin>>n;
        if(n != M1.getCol() && n != M2.getCol()){
            cout<<"So chieu vector khong hop le, nhap lai";
            continue;
        }
        break;
    }while(true);
    vector<double> V1(n);
    cout<<"Nhap input cho vector: ";
    for(int i = 0;i < n;i++){
        cin>>V1[i];
    }
    cout<<endl;
    vector<double> ketqua1 = M1 * V1;
    cout << "M1 * V1 = ";
    for(int i = 0; i < ketqua1.size(); i++)
        cout << ketqua1[i] << " ";
    cout << endl;
    vector<double> ketqua2 = M2 * V1;
    cout << "M2 * V1 = ";
    for(int i = 0; i < ketqua2.size(); i++)
        cout << ketqua2[i] << " ";
    cout << endl;
    return 0;
}