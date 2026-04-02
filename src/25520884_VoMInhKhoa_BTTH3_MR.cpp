//nhóm 1 

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // câu 1
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        cout<<i<<" ";
        // câu 2
        if(i % 2 == 0){
            cout<<i<<" ";
        }
        // câu 3
        if(i % 2 != 0){
            cout<<i<<" ";
        }
        // câu 4
        int total = 0;
        total += i;
        cout<<total;

        // câu 5
        int mutiply = 1;
        mutiply *= i;
        cout<<mutiply;
        // câu 6
        int binhphuong =0;
        i *= i;
        binhphuong += i;
        cout<<binhphuong<<" ";
        //câu 7
        if(i % 3 == 0 && i % 5 != 0){
            cout<<i<<" ";
        }
    

    }
    // câu 8
    int total1 = 0;
    for(int i= 1;i < n;i++){
        if(i % 2 != 0){
            total1 += i;
        }
        // câu 9
        else if(i %2 ==0){
            total1 += i;
        }
        // câu 10
        int count = 0;
        else if(i % 7 == 0){
            count += 1;
        }
        cout<<count;

    }
    cout<<total1;



    
    return 0;
}
*/
// nhóm 2
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // câu 11
    int n;
    cin>>n;
    double total = 0;
    for(int i = 1;i <= n;i++){
        int binhphuong = i * i;
        total += binhphuong;
    }
    cout<<total;
    //câu 12
    for(int i = 1;i <= n;i++){
        int mu_3 = pow(i,3);
        total += mu_3; 
    }
    cout<<total;
    // câu 13
    for(double long i= 1;i <= n;i++){
        total += 1/i;
    }
    cout<<(double)total;
    // câu 14
    for(int i= 1;i <= n;i++){
        int value = i *(i+1);
        total += value;
    }
    cout<<total;
    // câu 15
    int giaithua = 1;
    for(int i = 1;i <= n;i++){
        giaithua *=i;
    }
    cout<<giaithua;
    // câu 16
    int count = 0;
    for(int i = n;i >= 1;i/=10){
        int du = i % 10;
        count += du;
    }
    cout<<count;
    // câu 17
    int count = 0;
    for(int i = n;i >= 1;i /= 10){
        count += 1;
    }
    cout<<count;
    //câu  18
    for(int i = n;i >= 1;i /= 10){
        int du = i % 10;
        cout<<du;
    }
    // câu 19
    int n;
    cin>>n;

    int temp = n;
    int count = 0;
    while(temp < 0){
        count++;
        temp /= 10;
    } 
    int A[count];
    for(int i = count -1;i >= 0;i--){
        A[i]= n % 10;
        n /= 10;
    }
    bool doixung = false;
    for(int i = 0; i < count/2;i++){
        if(A[i] == A[count -i -1]){
            doixung = true;
            break;
        }
    }
    if(doixung){
        cout<<"day la so doi xung";
    }
    else{
        cout<<"khong phai so doi xung";
    }
    // câu 20
    string s;
    getline(cin,s);

    int total = 0;
    for(int i = stoi(s);i >= 1;i /= 10){
        int sodu = i % 10;
        total += pow(sodu,s.size());
    }
    int num = stoi(s);
    if(num == total){
        cout<<"đây là thuật toán armstrong";
    }
    else{
        cout<<"đây ko phải thuật toán armstrong";
    }


    return 0;
}

// nhóm 3
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // câu 21
    int n;
    cin>>n;
    bool datim= false;
    for(int i = 2;i * i <= n;i++){
        if(n % i== 0){
            cout<<"n khong phai la so nguyen to";
            datim = true;
            break;
        }
    }
    if(!datim){
        cout<<"n la so nguyen to";
    }
    // câu 22
    int n;
    cin>>n;
    for(int i =2;i <= n;i++){
        bool songuyento = true;
        for(int j= 2;j * j <= i;j++){
            if(i % j == 0){
                songuyento = false;
                break;
            }
        }
        if(songuyento){
            cout<<i<<" ";
        }
    }
    //câu 23
    int n;
    cin>>n;
    int total =0;
    for(int i =2;i <= n;i++){
        bool songuyento = true;
        for(int j= 2;j * j <= i;j++){
            if(i % j == 0){
                songuyento = false;
                break;
            }
        }
        if(songuyento){
            total += i;
        }
    }
    cout<<total;
    

    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// câu 24
bool songuyento(int x){
    if(x < 2) return 0;
    for(int i= 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
// câu 25
void uocso1(int n){
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            cout<<i<<" ";
            if(i != n / i){
                cout<<n/i<<" ";
            }
        }
    }
    cout<<endl;
}
// câu 26
int uocso2(int n){
    int total =0;
    for(int i = 1;i * i <= n;i++){
        if(n % i == 0){
            total++;
            if(i != n/i){
                total++;
            }
        }
    }   
    return total;
}
// câu 27
int uocso3(int n){
    int total =0;
    for(int i = 1;i * i <= n;i++){
        if(n % i == 0){
            total+=i;
            if(i != n/i){
                total+= n/i;
            }
        }
    }   
    return total;
}

// câu 28
int uocso4(int n){
    int total = 0;
    for(int i = 1;i * i<= n;i++){
        if(n % i == 0){
            total += i;
            if(i != n / i){
                total += n/i;
            }
        }
    }
    return total;
}

// câu 29
bool sohoanhao(int n){
    int total =0;
    if(n <= 1) return false;
    for(int i =2;i * i <= n;i++){
        if(n % i == 0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    return total == n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // câu 24
    int k;
    cin>>k;

    int sum =1;
    int count = 0;
    while(true){
        sum++;
        if(songuyento(sum)){
            count++;
            if(count == k){
                cout<<sum<<" ";
            }
        }
    }
    
    // câu 25
    int n;
    cin>>n;
    uocso1(n);

    //câu 26
    int n;
    cin>>n;

    int res = uocso2(n);
    cout<<res;
    // cau 27
    int n;
    cin>>n;
    int res = uocso3(n);
    cout<<res;
    return 0;
    // câu 28
    int n;
    cin>>n;
    int res = uocso4(n)
    res -= n;

    if(res == n){
        cout<<n<<" la so hoan hao";
    }
    else{
        cout<<"khong phai la so hoan hao";
    }
    // câu 29
    int n;
    cin>>n;
    bool timkiem = false;
    for(int i = 1;i < n;i++){
        if(sohoanhao(i)){
            cout<<i<<" ";
            timkiem = true;
        }
    }
    if(!timkiem){
        cout<<"khong ton tai so hoan hao";
    }
}



// câu 30
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
int UCLN(int n,int m){
    return __gcd(n,m);
}
int boichung(int n,int m){
    int gcd = __gcd(n,m);
    int BCNN = (n * m)/gcd;
    return BCNN;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    int ucln = UCLN(n,m);
    int BCNN = boichung(n,m);
    cout<<"UCLN cua so "<<n<<" va "<<m<<" la "<<ucln<<endl;
    cout<<"BCNN cua so "<<n<<" va "<<m<<" la "<<BCNN<<endl;
    
    return 0;
}


// nhóm 4
// câu 31
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<fibonacci(n);
    // câu 32
    int n;
    cin>>n;
    long long a = 0;b = 1;c;
    long long total = 0;
    for(int i = 0;i < n;i++){
        total += a;
        c = a + b;
        a = b;
        b = c;
    }
    cout<<total;

    // câu 33
    int n =0;
    int max = 10000;
    while(true){
        n++;
        int val = pow(2,n);
        if(val < max){
            cout<<val<<" ";
        }
        else break;
    }
    // câu 34
    int n;
    cin>>n;
    for(int i = 1;i < n;i++){
        long long res = (i*(i+1)) /2;
        cout<<res<<" ";
    }

    // câu 35
    int n;
    cin>>n;
    int dem = 0;
    int so =1;
    while(dem < n){
        for(int i =0;i < so && dem < n;i++){
            cout<<so;
            dem++;
            if(dem < n){
                cout<<" ,";
            }
        }
        so++;
    }
    //câu 36
    int n;
    cin>>n;
    for(int i =0;i <n;i++){
        cout<<(i % 2);
        if(i < n-1){
            cout<<" ,";
        }
    }
    // câu 37
    int n;
    cin>>n;
    int so =1;
    int dem =0;
    while(dem < n){
        cout<<so;
        dem++;
        if(dem < n){
            cout<<" ,";
        }
    }
    so =so * 10+ 1;;

    // câu 38
    int n;
    cin>>n;
    int so =1;
    int dem =0;
    int total =0;
    while(dem < n){
        total += so;
        dem++;
        so = so * 10 + 1;
    }

    cout<<total;
    // câu 39
    int max = 200;
    for(int i= 1;i <= max;i++){
        if(i % 3 == 0 || i % 5 == 0){
            if(i % 15 != 0){
                cout<<i<<" ";
            }
        }
    }
    // câu 40
    int n;
    cin>>n;
    long long f1=0,f2 =1;
    long long temp;
    int ketqua;
    if(n ==0){
        cout<<0;
        return 0;
    }
    while(f2 <= n){
        ketqua = f2;
        temp = f1 + f2;
        f1 =f2;
        f2 = temp;
    }
    cout<<ketqua
    return 0;
    
}

// nhóm 5
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

    string new_n = to_string(n);
    bool isreal=  true;
    for(int i = 0;i < new_n.length()-1;i++){
        if(new_n[i] >= new_n[i+1]){
            cout<<"day khong phai la day so tang dan";
            isreal = false;
            break;
        }
    }
    if(isreal){
        cout<<"day la day so tang dan";
    }
    // câu 42
    int n;
    cin>>n;

    string new_n = to_string(n);
    bool isreal =true;
    for(int i =0;i < new_n.length() - 1 ;i++){
        if(new_n[i] <= new_n[i+1]){
            cout<<"khong phai giam dan";
            isreal = false;
            break;
        }
    }
    if(isreal){
        cout<<"giam dan";
    }
    // câu 43
    int n;
    cin>>n;
    for(int i =1;i <= 5;i++){
        int temp = i;
        int total = 0;
        while(temp > 0){
            total += (temp % 10);
            temp /= 10;
        }
        if(total%5 == 0){
            cout<<i<<" ";
        }
    }
    // câu 44
    int n;
    cin>>n;
    int total =0;
    for(int i = 1;i <= n;i++){
        if(i % 3 == 0){
        string temp = to_string(i);
        int j = temp.length()-1;
        if(temp[j] == '6'){
            total++;
        }
        }
    }
    cout<<total;

    // câu 45
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        for(int j =1;i j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
    }
    // câu 46
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        for(int j =1;j <= i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    // câu 47
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= (n-i);j++){
            cout<<" ";
        }
        for(int k = 1;k <= (2*n-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // câu 48
    int n;
    cin>>n;

    for(int i = 1;i <= n;i++){
        cout<<endl;
        for(int j =1;j <= 10;j++){
            cout<<i<<" x "<<j<<"= "<<i*j<<endl;
        }
    }
    // câu 49
    int n;
    cin>>n;
    int total =0;
    for(int i = 1;i <= n;i++){
        if(i % 2 ==0 || i % 5 == 0){
            total += i;
        }
    }
    cout<<total;
    
    return 0; 
}

// câu 50 
\#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
bool isprime(int n){
    if(n < 2) return false;

    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
bool sodoixung(int n){
    string temp = to_string(n);
    int size = temp.length();
    for(int i = 0;i < size/2;i++){
        if(temp[i] != temp[size - i - 1]){
            return false;
        }
    }
    return true;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    bool isreal = false;
    if(sodoixung(n)){
        if(isprime(n)){
            cout<<"n la so palindrome nguyen to";
            isreal = true;
        }
    }
    if(!isreal){
        cout<<"day khong phai la so palindrome nguyen to";
    }

    return 0;
}