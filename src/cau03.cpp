// câu 3
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"so phan tu";
    cin>>n;
    cout<<"nhap cac phan tu";
    for(int i =0 ;i< n;i++){
        cin>>A[i];
    }
}

int xoaham(int A[],int &n,int k){
    if(k < 0 || k >= n){ 
        return 0;
    }
    for(int i = k;i < n-1;i++){
        A[i]= A[i+1];
    } 
    n--;

    return 1;
}
void xuatmang(int A[],int n){
    cout<<"Mang hien tai: ";
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main() {

    int A[100],n,k;
    nhapmang(A,n);
    xuatmang(A,n);

    cout<<"nhap vi tri k can xoa: ";
    cin>>k;

    int ketqua = xoaham(A,n,k);

    if(ketqua == 0){
        cout<<"khong xoa duoc"<<endl;
    }
    else if(ketqua == 1){
        cout<<"xoa duoc"<<endl;
        xuatmang(A,n);
    }
    
    
    return 0;
}