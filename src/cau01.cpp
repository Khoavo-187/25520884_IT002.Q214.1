// bài tập mảng
// câu 1
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
int songuyento(int n){
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;

    for(int i = 3;i * i <= n;i+=2){
        if(n % i == 0 ){
            return 0;
        }
    }
    return 1;
}

void xuatsonguyento(int A[],int n){
    cout<<"cac so nguyen to co trong mang la: ";
    int cosonguyento = 0;

    for(int i = 0;i< n;i++){
        if(songuyento(A[i]) == 1){
            cout<<A[i]<<" ";
            cosonguyento = 1;
        }
    }
    if(cosonguyento == 0){
        cout<<"khong co so nguyen to";
    }
    cout<<endl;
}

void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu: ";
    cin>>n;
    cout<<"Nhap cac phan tu";
    for(int i =0 ;i < n;i++){
        cin>>A[i];
    }
}

int main() {

    int A[100],n;

    nhapmang(A,n);
    xuatsonguyento(A,n);
    
    
    return 0;
}