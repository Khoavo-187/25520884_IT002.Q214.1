// câu 4
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu";
    cin>>n;
    cout<<"nhap cac phan tu";
    for(int i = 0; i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    cout<<"mang hien tai la: ";
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int sothu2(int A[],int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0;i < n;i++){
    if(A[i] > max1){
        max2= max1;
        max1 = A[i];
    }
    else if(A[i] > max2 && A[i] < max1){
        max2 = A[i];
    }
    }
    return max2;
}

int timkiem(int A[],int n,int k){
    for(int i = 0;i < n;i++){
        if(A[i] == k){
            return i;
        }
    }
    return -1;

}
int main() {
    int A[100],n;
    nhapmang(A,n);
    xuatmang(A,n);
    int max2=  sothu2(A,n);
    if(max2 == INT_MIN){
        cout<<"khong co so lon thu 2";
    }
    else{
        int vitri =  timkiem(A,n,max2);
        cout<<"so lon thu 2 la: "<<max2<<endl;
        cout<<"Vi tri so lon thu 2 la: "<<vitri;
    }
    
    
    return 0;
}