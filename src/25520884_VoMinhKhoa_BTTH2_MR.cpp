
// bài 2
/*
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long x,n;
    cin>>x>>n;

    long long giaithua = 1;
    long long luythua= 1;
    double total = 1;
    for(long long i = 1; i<= n;i++){
        giaithua *= i;
        luythua *= x;
        total += (double) luythua / giaithua;
    }
    cout<<(double)total;
    

    // bài 1
    
    int n;
    cin>>n;
    int total = 0;
    for(int i = 1;i <= n;i++){
        if(n % 2 == 0){
            total -= (double)1/(2*n) * (2*n);
        }
        else{
            total +=(double) 1/(2*n) *(2*n);
        }
        // hoặc là 
        total += t/(2*n) * (2*n);
        t = -t;
    }
    cout<<total;
     
    
    // bài 3
    
    long long n, k;
    cin>>n>>k;
    if(k > n- k){
        k = n-k;
    }
    long long res = 1;

    for(long long i = 1;i <= k;i++){
        res *= n / i;
        n--;
    }
    cout<<res;
    

    // bài 5 bài về hàm số finobacci
    long long a = 1,b = 1,c = 0;
    int n;
    cin>>n;

    for(int i = 2; i < n;i++){
        c = a+ b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
        

    long long n;
    cin>>n;
    long long sodu;
    
    for(long long i = n;i >= 1;i /= 10){
        sodu = i % 10;
        cout<<sodu;

    }
    */


    // bài 6 số armstrong
    //  cho 1 số n bất kỳ với tổng của các số con với số mũ bằng với bao nhiêu số có trong n bằng với số đã cho
    /*
    string n;
    getline(cin,n);
    int sodu;
    int total = 0;

    // đầu tiên mình chuyển các số đó qua str rôi đếm cố bao nhiêu thể hiện bao nhieu số mũ
    
    for(int i = stoi(n);i >= 1;i /= 10){
        sodu = i % 10;
        total += pow(sodu,n.size());
    }
    int num = stoi(n);
    if(total == num){
        cout<<"đây là thuật toán armstrong";
    }
    else{
        cout<<"đay không phải thuật toán armstrong";
    }
    
    return 0;
}
    */


//  đệ quy
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
int gcd(int a,int b){
    if(b ==0 ) return a;

    else{
        return gcd(b,a%b);
    }
}
int de_quy(int x,int n){
    if(n ==1) return x;
    else{
        return x * de_quy(x,n-1);
    }
}
int main(){
    cout<<de_quy(2,4)<<endl;
    cout<<gcd(8,10);
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
    
    int t;
    cin>>t;


    while(t--){
        string s;
        int n;
        cin>>n>>s;
        int s1 = 0;
        int sum = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == '('){
                s1++;
            }
            else {
            if(s1 > 0){
                s1--;
            }
            else{
                sum++;
            }
        }

        }
        cout<<sum<<endl;
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


    for(int i = 0;i < n;i++){
        long long nums;
        cin>>nums;
        string binary_nums = "";
        if(nums == 0){
            cout<<"0\n";
            continue;
        }
        while(nums > 0){ 
            binary_nums += to_string(nums % 2);
            nums /= 2;
        }
        reverse(binary_nums.begin(),binary_nums.end());
        cout<<binary_nums<<endl;
        
    }
    
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
    int n;
    cin>>n;
    int a[n];

    for(int i = 0;i < n;iz++){
        cin>>a[i];
    }
    int max_value= a[0];
    for(int i = 1;i < n;i++){
        if(a[i] > max_value){
            max_value = a[i];
        }
    }
    cout<<max_value;

    return 0;
}