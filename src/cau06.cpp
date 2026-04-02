// câu 6
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu";
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n,int value){
    cout<<"mang sau khi loc la: ";
    if(n ==0){
        cout<<"mang rong(khong co phan tu nho hon "<<value<<")";
    }
    else{
        for(int i =0;i <n;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
        cout<<"so phan tu con lai la: "<<n<<endl;
    }
}
void soX(int A[],int &n,int value){
    int j =0;
    for(int i =0;i < n;i++){
        if(A[i] >= value){
            A[j] = A[i];
            j++;
        }
    }
    n = j;
}

int main() {
    int A[100],n,X;
    nhapmang(A,n);
    cout<<"nhap tham so X de loai bo: ";
    cin>>X;

    soX(A,n,X);

    xuatmang(A,n,X);

    
    return 0;
}