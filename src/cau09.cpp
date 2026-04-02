#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}

void thututangdan(int A[],int n){
    for(int i=0;i < n;i++){
        for(int j =i+1;j < n;j++){
            if(A[i] >A[j]){
            int temp = A[i];
            A[i] = A[j];
            A[j] =temp; 
            }
        }
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[100],n;
    nhapmang(A,n);

    thututangdan(A,n);

    cout<<"mang tang dan la: ";
    xuatmang(A,n);
    
    return 0;
}