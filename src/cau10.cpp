#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang1(int A[],int &n){
    cout<<"nhap so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i=0;i < n;i++){
        cin>>A[i];
    }
}
bool isprime(int x){// khúc này nghĩa là mình đang rtimf kiếm các số nguyên tô có trong mang1 
    if(x < 2) return false;
    for(int i = 2;i * i <= x;i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
void tachsonguyento(int A[],int B[],int n,int &m){ // khúc này mình đang gọi các phằn tử là số nguyên tô rôi tách sang phân tử khác
    m =0;
    for(int i =0;i < n;i++){
        if(isprime(A[i])){
            B[m] = A[i];
            m++;
        }
    }

}
int main() {
    int A[100],B[100];
    int n,m;
    nhapmang1(A,n);
    cout<<endl;

    cout<<"mang a truoc khi tach la: ";
    xuatmang(A,n);
    cout<<endl;

    tachsonguyento(A,B,n,m);
    if(m == 0){
        cout<<"khong ton tai so nguyen to";
    }
    else{
        cout<<"mang B sau khi tach so nguyen to la: ";
        xuatmang(B,m);
        cout<<endl;
    }
    return 0;
}