/*
#include <iostream>

using namespace std;

inline int findmax(int tab[], int beg, int end)
{
    int max=0;
    for (int j=beg; j<end; j++)
        if (tab[j]>max) max=j;
    return max;
}

int main(int argc, char *argv[])
{

    int len;
    cin>>len;

    int h[len];
    int l[len];
    for (int i=0; i<len; i++)
    cin>>h[i];

    int maxl=0, maxr;

    maxr=len-1;

    for (int i=len-1; i>=0; i--)
    {
        if (h[i]>h[maxr]) maxr=i;
        l[i]=h[maxr];
    }

    for (int i=0; i<len; i++)
    {
        if (h[i]>h[maxl]) maxl=i;
        cout<<h[maxl]<<" "<<l[i]<<endl;
    }
    //system("pause");
    return 0;
}
    */

/*
#include <iostream>
using namespace std;

int main() {
    
    
    int year;
    cin >> year;
    if(year >= 0){
    string chi[] = {"0","TY'", "SUU", "DAN", "MEO", "THIN", "TY.", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI"};
    int chiIndex = (year - 3) % 12;
    cout<<chi[chiIndex]<<endl;
    }
    else{
    string can[] = {"TY'", "SUU", "DAN", "MEO", "THIN", "TY.", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI"};
    int canIndex = ((year - 3) % 12 + 12) % 12;
    cout << can[canIndex] << endl;
    }
    
    return 0;
}
    */
/*
#include <iostream>
using namespace std;

int main(){
    char ch, invert;
    int shift;


    cout<<"Please enter a character: ";
    cin>>ch;

    cout<<"Would you like to convert the case? y or n: ";
    cin>>invert;

    cout<<"By how much would you like to shift the character? ";
    cin>>shift;



    if(invert == 'y'){
        if(ch >= 'A' && ch <= 'Z' ){
            ch += 32;// chuyển chữ sang thường nếu viết hoa
        }
        else if(ch >= 'a' && ch <= 'z'){
            ch -= 32;
        }
    }

    if(ch >= 'A' && ch <= 'Z'){
        ch = ((ch - 'A' + shift)%26) + 'A';
    }
    else if(ch >= 'a' && ch <= 'z'){
        ch = ((ch - 'a' + shift)%26) + 'a';
    }

    cout<<"The character is "<<ch<<"!";
    return 0;

}
    */


/*

#include <iostream>
using namespace std;


int main(){
    char invert;
    int index;

    cout<<"Uppercase: ";
    cin>>invert;
    
    cout<<"Index: ";
    cin>>index;

    char result;
    if(invert == 'y'){
        result = 'A' + index;
    }
    else{
        result = 'a' + index;
    }

    cout<<"The letter is "<<result;
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
    int month,year;
    cin>>month>>year;
    if(month >= 1 && month <= 12 && year > 0){
        switch(month){
            case 1:
                cout<<31;
                break;
            case 3:
                cout<<31;
                break;
            case 4:
                cout<<30;
                break;
            case 5:
                cout<<31;
                break;
            case 6:
                cout<<30;
                break;
            case 7:
                cout<<31;
                break;
            case 8:
                cout<<31;
                break;
            case 9:
                cout<<30;
                break;
            case 10:
                cout<<31;
                break;
            case 11:
                cout<<30;
                break;
            case 12:
                cout<<31;
                break;
            
        
        }
    if(month == 2 && (((year % 4 == 0 && year % 100 != 0)) or (((year % 400 == 0))))){
        cout<<29;
    }
    else if(month == 2 && year % 100 == 0){
        cout<<28;
    }
    }
    else{
        cout<<"INVALID";
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
    int arr[1005];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){ // đầu tiên ta xét 2 biến để chạy hết arr
        for(int j = i+1;j<n;j++){// tiếp theo ta cho j = i+1 để xét các số kế bên i 
            if(arr[i] > arr[j]){// dựa vào đk này để ta có thể dooir chỗ giữa các index nếu i  > j
                int temp = arr[i];// mình tạo biến temp nhằm lưu giát trị ban đàu của arr[i] trc
                arr[i]= arr[j];// sau đó mình hoán đỏi vị trí giũa i và j nếu i > j
                arr[j] = temp;// rồi lưu giá trị của j tức là của i vào temp đẻ xét tiếp các index tiếp theo
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
    */
/*  
#include<iostream>

using namespace std;

int main() {
	int arr[100][100];
	int n, m;

    int sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
            sum += arr[i][j];
		}
	}

	
	

	cout << sum;

	return 0;
}
    



#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Phanso{
private:
    long tuso;
    long mauso;
public:
    Phanso(){
        tuso = 0;
        mauso = 1;
    }
    Phanso(long a,long b){
        set(a,b);
    }
    Phanso(long a){
        set(a,1);
    }
    int UCLN(int a,int b){
        return __gcd(a,b);
    }
    void uocluong(){
        int g = UCLN(abs(tuso),abs(mauso));
        tuso /= g;
        mauso /= g;
        if(mauso < 0){
            tuso = -tuso;
            mauso = -mauso;
        } 
    }
    void set(long a,long b){
        if(b){
            tuso = a;
            mauso = b;
            uocluong();
        }
    }
    Phanso operator+(Phanso b){
        return {(tuso * b.mauso + mauso * b.tuso),(mauso * b.mauso)};
    }
    Phanso operator-(long a){
        return Phanso(tuso - a * mauso,mauso);
    }
    //friend Phanso operator+(Phanso a,Phanso b);
    friend ostream& operator<<(ostream& out, Phanso p){
        out<<p.tuso<<"/"<<p.mauso;
        return out;
    }
    friend Phanso operator+(int a,Phanso b){
        return Phanso(a * b.mauso + b.tuso,b.mauso);
    }
};
int main() {
    Phanso a(8,-9),b(6,-5),c(0),d(0),e;
    c = a + b;
    d = 8 + c;
    e = d - 9;
    cout<<c<<" "<<d<<" "<<e;
    return 0;
}
    


    #include <bits/stdc++.h>
    using namespace std;

    const int MAXN = 1e5 + 5;
    const int MOD = 1e9 + 7;
    const long long INF = 1e18;
    int main() {
        // so coprime la yeu cau cac so thua so nguyen to 
        //test case
        freopen("CHENHLECH.INP","r",stdin);
        freopen("CHENHLECH.OUT","w",stdout);
        // su dung map de truy cap key va luu so lan xuat hien cho value
        map<int,int> arr;
        vector<pair<int,int>> count;
        int t;
        cin>>t;
        while(t--){
            int x,y;
            cin>>x>>y;
            count.push_back({x,y}); // cho push back ve 1 cap trng vecto pair 
            // bta dau dem so lan xuat hien cua diff giua x va y
            int diff = abs(x - y);
            arr[diff]++; // bay dau dem len dua vao key
        }

        // truy cap key co value xuat hien nhieu nhat
        int max_val = 0;
        int best_fre = 0;
        for(const auto& pair : arr){
            if(max_val < pair.second){
                max_val = pair.second;
                best_fre= pair.first; // pair.first tra ve key cua diff con second la so lan xuat hien
            }
        }
        cout<<best_fre<<endl;
        for(const auto& p : count){
            if(abs(p.first - p.second) == best_fre){
                cout<<p.first<<" "<<p.second<<endl;
            }
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
    //freopen("MTABLE.INP","r",stdin);
    //freopen("MTABLE.OUT","w",stdout);
    int n,m;
    cin>>n>>m;
    int count = 0;
    for(int i = 1;i <= n;i++){
        if(m % i == 0){
            int j = m/i;
            if(j <= n){
                count++;
            }
        }
    }
    cout<<count;    
    
    
    return 0;
}