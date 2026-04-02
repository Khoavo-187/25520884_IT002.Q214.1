//câu 5
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"nhap phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i  =0; i < 0;i++){
        cout<<A[i]<<" ";z
    }
    cout<<endl;
}
int soamlonnhat(int A[],int n){
    int min_value = A[0];

    for(int i = 0;i < n;i++){
        if(A[i] < min_value){
            min_value = A[i];
        }
    }
    if(min_value >= 0) return 0;
    return min_value;
}
int timkiem(int A[],int n,int value){
    for(int i = 0;i< n;i++){
        if(A[i] == value){
            return i;
        }
    }
    return -1;
}
int main() {

    int A[100],n;
    nhapmang(A,n);
    xuatmang(A,n);
    int min_value = soamlonnhat(A,n);
    if(min_value == 0){
        cout<<"khong ton tai so am";
    }    
    else{
        int vitri = timkiem(A,n,min_value);
        cout<<"so am lon nhat la: "<<min_value<<endl;
        cout<<"vi tri"<<vitri;
    }
    return 0;
}