// câu 2

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;


int doixung(int A[],int n){
    if(n == 0) return -1;
    if(n ==1) return 1;
    for(int i = 0;i < n/2;i++){
        if(A[i] != A[n-i-1]){
            return 0;
        }
    }
    return 1;
}

void nhapmang(int A[],int &n){
    cout<<"So phan tu: ";
    cin>>n;
    if(n > 0){
    cout<<"So cac phan tu: ";
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
}
int main() {
    int A[100],n;
    nhapmang(A,n);
    int res = doixung(A,n);
    if(res == -1){
        cout<<"khong ton tai";
    }
    else if(res == 1){
        cout<<"mang doi xung";
    }
    else{
        cout<<"Mang khong doi xung";
    }
    
    return 0;
}
    

