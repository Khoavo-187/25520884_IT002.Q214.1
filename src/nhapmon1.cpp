
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

    for(int i = 2;i <= n/2; i++){ // khúc này mình check xem n là số nguyên tố với đk bắt dầu từ 2 , do số nào cx có thể chia hết cho 1. Xét i chạy từ 2 -> n/2 (thật ra là sqrt(2) mới đúng nhưng do cx đưa về 1 nửa của n)
        if(n % i == 0){ // Nếu trong trường hợp này số n có thê chia hết cho i cho chạy từ i -> n/2, vậy thì số đó sai
            cout<<"n không phải là số nguyên tố";
            break;
        }
        else{
            cout<<"N là số nguyên tố";
        }
    }
    
    return 0;
}
    */

// tìm ra ước chung lớn nhất của a,b
// dùng thuật toán euclid
// ta biết được rằng nếu ta cho UCLN(a,b) . Lấy phần dư của a%b. rồi tiếp tục thế vào a,b với a = b và b = a%b
//tiếp tục làm cho tới khi b = 0 và UCLN là a

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
    cách 1
    int gcd = __gcd(a,b);
    cout<<"uoc chung la "<<gcd;
    
    // cách 2
    int x = a;int y = b;
    while(y != 0){
        int r = x % y;
        x = y;
        y = r;
    }
    cout<<"uoc nguyen laf "<<x;
    
    // cách 3
    int i = min(a,b);
    while(int i >= 1){
        if(a % i ==0 && b % i ==0){
            cout<<"uoc so nguyen la "<<i;
            break;
        }
        i--;
    }
    
    return 0;
}
    */

// cho  nhập 1 số n và kêu cout ra các giai thừa cho đến n
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
    int factorial = 1; // nhập giai thừa bắt đầu với 1 !
    int sum = 0;
    for(int i = 1;i <= n;i++){ // khúc này cho i chạy cho đến giới hạn của n
        factorial *= i; // dùng giai thùa nhân với từng i và nhân tiếp
        sum += factorial; //kiểu xét từng khoảng i với i = 1 thì giai thuaf bằng 1 rồi + cho sum, tiếp tục với giai thừa = 2 thì cứ cộng tiếp

    }
    cout<<sum;
    
    return 0;
}
    */


// tìm bối số chung nhỏ nhất của 2 số
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

    //đầu tiên tìm gcd của 2 số
    int gcd = __gcd(a,b);
    // bước tiếp theo tìm BSCNN là (a * b) / gcd(a,b)

    int LCM = (a * b) / gcd;
    cout<<"boi so chung nhỏ nhât là "<<LCM;
    
    return 0;
*/




// bài 1 
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
    if(n > 0){
        cout<<"Số dương";
    }
    else if(n < 0){
        cout<<"Số âm";
    }
    else{
        cout<<"Bằng 0";
    }
    
    return 0;
}
    */

// bài 2
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
    if(n % 2 == 0){
        cout<<"Chẵn";
    }
    else{
        cout<<"Lẻ";
    }
    
    return 0;
}
    */


// bài 3
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int nam;
    cin>>nam;
    if(((nam % 4 == 0 && nam % 100 != 0)) or (((nam % 400 == 0)))){
        cout<<"Năm nhuận";
    }
    else{
        cout<<"không phải năm nhuận";
    }
    
    return 0;
}
    */

// bài 4
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int kwh;
    cin>>kwh;

    int total = 0;
    if(kwh >= 0 && kwh <= 50){
        int tien1 = 1800;
        total = tien1 * kwh;
    }
    else if(kwh >= 51 && kwh <= 100){
        int tien2 =2000;
        int tien1= 1800;
        total = tien1 * 50 + tien2 * (kwh - 50);
    }
    else if(kwh > 100){
        int tien3 = 2500;
        int tien2 =2000;
        int tien1= 1800;
        total = tien1 * 50 + tien2 * 50 + (kwh - 100) * tien3;
    }
    cout<<total;
    
    
    return 0;
}
*/


//bài 5
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double diem;
    cin>>diem;

    if(diem >=0 && diem < 5.0){
        cout<<"Yếu";
    }
    else if(diem >= 5.0 && diem <= 6.4){
        cout<<"Trung bình";
    }
    else if(diem >= 6.5 && diem <= 7.9){
        cout<<" Khá";
    }
    else if(diem >= 8.0 && diem <= 10.0){
        cout<<"Giỏi";
    }
    return 0;
}
*/


//bài 6
/*
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char ch;
    cin>>ch;
    if(isalnum(ch)){
    if(ch >= 'a' && ch <= 'z'  || ch >= 'A' && ch <='Z'){
        cout<<"Chữ cái";
    }
    else{
        cout<<"Chữ số";
    }
    }
    else{
        cout<<"Ký tự đặc biệt";
    }


    
    return 0;
}
    */


//bài 7
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int max = (a > b && a>c && a>d)?a:(b>c&&b>d)?b:(c>d?c:d);
    cout<<max;
    
    
    return 0;
}
    */


//baì 8
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
    if(n >= 0 && n <= 10){
        cout<<"Điểm hợp lệ";
    }    
    else{
        cout<<"Điểm không hợp lệ";
    }
    return 0;
}
*/

//bài 9
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a,b,c;
    cin>>a>>b>>c;

    if(a + b > c && a + c > b && b + c > a){
        if(a == sqrt((b*b) + (c*c)) || b == sqrt((a*a) + (c*c))|| c == sqrt((a*a) + (b*b))){
            if( c == sqrt((a*a) + (b*b)) && a == b || 
                a == sqrt((b*b) + (c*c)) && b == c || 
                b == sqrt((a*a) + (c*c)) && a == c){
                cout<<"Tam giác vuông cân";
            }
        }
        else{
            cout<<"không phải tam giác vuông cân";
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
bool check(int n){
    for(int i = n/2; i > 1;i--){
        if( n % i == 0){
            return false;
        }
        else{
            return true;
        }
    }
}
int GCD(int a,int b){
    return __gcd(a,b);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cout<<"Nhap n"<<endl;
    cin>>n;
    if(check(n)){
        cout<<"Yes"<<endl;
    
    }
    else{
        cout<<"No"<<endl;
    }
    int a,b;
    cout<<"nhap a,b: "<<endl;
    cin>>a>>b;

    cout<<"USCLN" << " "<<GCD(a,b);
    
    
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
    
    
    
    return 0;
}