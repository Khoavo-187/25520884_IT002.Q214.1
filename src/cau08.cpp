#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
int solonnhat(int A[],int n){ // cái này tìm số lơn nhất
    int max1 = A[0];
    for(int i =0;i < n;i++){
        if(A[i] > max1){
            max1 = A[i];
        }
    }
    return max1;
}
int timkiem(int A[],int n,int value){ // cái này là index của số lớn nhất trong mảng
    for(int i= 0;i < n;i++){
        if(A[i] == value){
            return i;
        }
    }
    return -1;
}
void themso(int A[],int &n,int vitri,int k){ // cái này dung đẻ điêu chỉnh lại thứ tụ sắp xép cho mảng nếu có thêm num
    if(vitri < 0 || vitri >= n) return;

    for(int i = n;i > vitri + 1;i--){ // ta đang xét từ các sô đằng sau số X càn chèn len 1 index
        A[i] = A[i-1];
    }
    A[vitri + 1] =k;
    n++;

}
int main() {

    int A[100],n;
    nhapmang(A,n);

    int X;
    cout<<"nhap con so can chen la : ";
    cin>>X; // nhập số cần chèn mảng , chèn phía sau có nghĩa là i+1

    int max_value = solonnhat(A,n);
    int vitri = timkiem(A,n,max_value); // tìm ra đc max value của cái mảng (index) để xét tiếp th là X nên thêm ở vị trí nào

    themso(A,n,vitri,X);
    cout<<"mang sau khi chen la: ";
    xuatmang(A,n);
    
    return 0;
}


