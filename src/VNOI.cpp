/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string result = "";
    for(int i = 1;i <= 5;i++){
        int x;
        cin>>x;
        if(x == 1){
            result = to_string(i) + result;
            // to_string có tác dụng là chuyển 1 số thành chuổi với result 
        }
    }
    cout<<result;
    
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
    
    long long a,b,c;
    cin>>a>>b>>c;

    if(a+b == c|| a+c == b|| c+b ==a){
        cout<<"yes";
    }
    else{
        cout<<"no";
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
    
    string array1;
    getline(cin,array1);
    string array2;
    getline(cin,array2);
    if(array1.size() > array2.size()){
        cout<<"No";
        return 0;
    }    
    for(int i = 0;i< array1.size();i++){
        if(array1[i] != array2[i]){
            cout<<"No";
            return 0;
        }

    }
    cout<<"Yes";
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
    
    int N;
    cin>>N;
    int sum =0;
    int i = 1;
    bool found =false;
    while(sum < N){
        sum += i;
        if(sum == N){
            cout<<"Yes";
            found = true;
            break;
        }
    
        i++;
    }
    if(!found){
        cout<<"No";
    }
    
    return 0;
}
    */



/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long sum_of_divisor(long long n){
    long long sum =0;
    for(long long i =1;i*i <= n;i++){
        if(n%i == 0){
            sum += i;
            if(i != n/i){
                sum += n/i;
            }
        }

    }
    return sum;
}

int main(){
    long long  q;
    cin>>q;
    while(q--){
        long long num;
        cin>>num;
        long long result = sum_of_divisor(num);
        cout<<result<<" ";
    }
}
    */
/*
#include <iostream>
#include <cmath> // cho sqrt
#include <iomanip> // cho setprecision
using namespace std;

int main() { int a, b, c;

    cin>>a>>b>>c;
// Trường hợp phương trình bậc nhất
if (a == 0) {
    if (b == 0) {
        if (c == 0) {
            cout << "WOW" << endl; // Vô số nghiệm
        } else {
            cout << "NO" << endl; // Vô nghiệm
        }
    } else {
        // Phương trình bậc nhất bx + c = 0
        double x = -static_cast<double>(c) / b;
        cout << fixed << setprecision(2) << x << endl; // In nghiệm
    }
} else {
    // Phương trình bậc hai ax^2 + bx + c = 0
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "NO" << endl; // Vô nghiệm
    } else if (delta == 0) {
        // Nghiệm kép
        double x = -static_cast<double>(b) / (2 * a);
        cout << fixed << setprecision(2) << x << endl; // In nghiệm
    } else {
        // Hai nghiệm phân biệt
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        // In nghiệm theo thứ tự tăng dần
        if (x1 > x2) {
            swap(x1, x2);
        }
        cout << fixed << setprecision(2) << x1 << " " << x2 << endl; // In nghiệm
    }
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
    
    long long n,k;
    cin>>n>>k;

    if(k > n - k){
        k = n-k;
    }
    long long res = 1;
    for(int i =0;i<k;i++){
        res = res * (n-i) / (i+1);
    }
    cout<<res;
    
    return 0;
}
    */
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
long long sum_of_divisor(long long n){
    long long total  =0;
    for(int i =1;i * i <= n;i++){
        if(n % i == 0){
            total += i;
        
            if(i != n / i){
                total += n / i;
            }
        }
    }
    return total;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>q;
    for(int i = 1;i<=q;i++){
        long long level;
        cin>>level;
        long long bosspower = sum_of_divisor(level);
        cout<<bosspower<<" ";
    }

    return 0;
}
    */



#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i< n;i++){
        cin>>arr[i];
    }
    unordered_set<int>s(arr.begin(), arr.end());

    if(s.size() == arr.size()){
        cout<<-1;
        return 0;
    }
    unordered_map<int,int> last_position; //cái này mình đang lưu giá trị của vị trí mới nhất của số trùng

    int min_distance = INT_MAX;

    for(int i = 0;i<n;i++){
        if(last_position.count(arr[i])){
            int distance = i - last_position[arr[i]];
            min_distance = min(min_distance,distance);
        }
        last_position[arr[i]] = i;
    }
    cout<<min_distance;


    
    
    return 0;
}