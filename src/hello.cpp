/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int size;
    cin>>size;
    int arr[size];
    for(int j = size - 1;j >= 0;j--){
        cin>>arr[j];
    }
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}
    */

/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum = 0;

    for(int i =1;i <= n;i++){
        if(n % i ==0){
            sum += 1;
        }
    }
    cout<<sum;

    
    
    return 0;
}
    */
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int i = 1;
    int b = 100;
    while(i <= b){
        if(i == 51){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    
    return 0;
}