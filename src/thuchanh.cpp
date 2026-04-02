
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;

    int gcd = __gcd(a,b);

    // rút gọn các phần tử 
    a /= gcd;
    b /= gcd;

    // xét th nếu b == 0
    if(b == 0){
        cout<<"INVALID";
        return 0;
    }
    // xét tiếp trường hợp nếu b < 0 thì sao
    if(b < 0){
        a = -a; // đổi dấu lên tử
        b = -b; // tức là khúc này thg b còn đang âm nên -(-b) == b
    }
    // xét tiếp trg hợp nếu b = 1 thì s
    if(b == 1){
        cout<<a;
    }
    else{
        cout<<a<<" "<<b;
    }
    return 0;
}
    */
   




// hackerank
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
long long uocso(long long a){
    int total = 0;
    a = abs(a);
    for(int i = a;i > 0;i--){
        if(a % i == 0){
            total++;
        }
    }
    return total;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //  đếm số lượng ước số cho từng só
    int a;
    cin>>a;
    int res = uocso(a);

    cout<<res;
    
    return 0;
}
    */


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"in ra so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
int majorelement(int A[],int n){
    int max_count = 0;
    int phantu = A[0];
    for(int i =0 ;i <n;i++){
        int count = 0;
        for(int j = 0;j  <n;j++){
            if(A[j] == A[i]){
                count++;
            }
        }
        if(count > max_count){
                max_count = count;
                phantu = A[i];
            }
    }
    return phantu;
}
int main() {
    int A[100],n;
    nhapmang(A,n);
    xuatmang(A,n);
    int res = majorelement(A,n);
    cout<<"phan tu xuat hien nhieu nhat trong mang la "<<res;
    return 0;
}