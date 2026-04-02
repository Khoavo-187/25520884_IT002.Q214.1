#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159;
 

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// phần 1
// câu 1
double dientichhinhtron(int bankinh){
    return bankinh * bankinh *PI;
}
// câu 2
bool sochan(int n){
    return n % 2 == 0;
}
// câu 3
int solonnhat(int a,int b){
    int lonnhat = (a > b ? a : b);
    return lonnhat;
}
// câu 4
int tong(int n){
    int total =0;
    for(int i = 1;i <= n;i++){
        total += i;
    }
    return total;
}
// câu 5
int giaithua(int n){
    int factorial = 1;
    for(int i = 1;i <= n;i++){
        factorial *= i;
    }
    return factorial;
}
// câu 6
bool songuyento(int n){
    if(n < 2) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        } 
    }
    return true;
}
// câu 7
int chuso(int n){
    int total = 0;
    for(int i = n;i >= 1;i /= 10){
        int sodu = i % 10;
        total += sodu;
    }
    return total;   
}
// câu 8
int demso(int n){
    int dem = 0;
    for(int i = n;i >= 1;i /= 10){
        int sodu = i % 10;
        dem++;
    }
    return dem;   
}
// câu 9
void daonguoc(int n){
    for(int i = n;i >= 1;i /= 10){
        int sodu = i % 10;
        cout<<sodu;
    }
    cout<<endl;
}
// câu 10
bool sodoixung(int n){
    int daonguoc = 0;
    int songuyen = n;
    while(n > 0){
        daonguoc = daonguoc * 10 + n %10;
        n /= 10;
    }
    return daonguoc == songuyen;
}
// câu 11
int UCLN(int a,int b){
    return __gcd(a,b);
}
// câu 12
int BCNN(int a,int b){
    int ucln = UCLN(a,b);
    int boichung = a * b / ucln;
    return boichung;
}
// câu 13
int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    long long F0 = 0,F1 = 1;
    long long Fn;
    for(int i =2;i < n;i++){
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
    }
    return F1;
}
// câu 14
bool sohoanhao(int n){
    if(n == 0) return false;
    int total =1;
    int songuyen = n;
    for(int i  = 2;i *i <= n;i++){
        if(n % i == 0){
            total += i;
            if(i != n/i && i *i != n){
                total += n/i;
            }
        }
    }
    return total == songuyen;
}
// câu 15
bool soarmstrong(int n){
    string s = to_string(n);
    int total =0;
    for(int i = stoi(s);i > 0;i /= 10){
        int sodu = i % 10;
        total += pow(sodu,s.length());
    }
    return total == n;
}
// câu 16
int nhietdo(int C){
    int F = (C * 1.8) + 32;
    return F;
}
// câu 17
int nhiphan(int n){
    string s = to_string(n);
    int total =0;
    int base =1;
    for(int i = s.length()-1;i >= 0;i--){
        if(s[i] == '1'){
            total += base;
        }
        base *= 2;
    }
    return total;
}
// câu 18
int dientichhcn(int dai,int rong){
    return dai * rong;
}
// câu 19
int chuvitamgiac(int a,int b,int c){
    return a+b+c;
}
// câu 20
string viethoa(string s){
    for(int i  = 0;i < s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    for(int i =0;i < s.length();i++){
        if(i == 0 && s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
        if(i > 0 && s[i-1] == ' ' && s[i] >= 'a' && s[i]<='z'){
            s[i] -= 32;
        }
    }
    return s;
}
string chuanhoachuoi(string s){
    s = viethoa(s);
    return s;
}

// câu 21
bool  sochantrongmang(int n){
    return n % 2 ==0;
}
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 
int demsochan(int A[],int n){
    int total = 0;
    for(int i =0;i < n;i++){
        if(sochantrongmang(A[i])){
            total++;
        }
    }
    return total;
}
// câu 22
bool chucai(char ch){
    if((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <='Z')){
        return true;
    }
    else{
        return false;
    }
}
// câu 23
bool chuoipalindrome(string s){
    for(int i = 0;i < s.length();i++){
        if(s[i] != s[s.length()-i -1]){
            return false;
        }
    }
    return true;
}
// câu 24
string xoakhoangtrang2dau(string s){
    string result = "";
    for(int i =0;i < s.length();i++){
        if(result == "" && s[i] == ' '){
            continue;
        }
        result += s[i];
    }
    if(result.length() > 0 && result[result.length()-1] == ' '){
        result.erase(result.length()-1);
    }
    return result;
}
string chuanhoachuoi(string s){
    s = xoakhoangtrang2dau(s);
    return s;
}
 // câu 25
void hoandoi(int &a,int &b){
    swap(a,b);
    cout<<"so a bay gio la "<<a<<endl;
    cout<<"so b bay gio la "<<b<<endl;
}
// câu 26
int tonguocso(int n){
    int total =0;
    for(int i = 1;i * i <= n;i++){
        if(n % i == 0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    return total;
}
// câu 27
bool viethoakitu(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return true;
    }
    else{
        return false;
    }
}
// câu 28
bool vietthuongkitu(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return true;
    }
    else{
        return false;
    }
}
// cau 29
int demchuso(string s){
    int total  =0;
    for(int i =0;i < s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            total++;
        }
    }
    return total;
}
// câu 30
string xoakhoangtranggiua(string s){
    string result = "";
    for(int i = 0;i < s.length();i++){
        if(result == "" && s[i] == ' '){
            continue; // xoa khoang trang dau chuoi;
        }
        if(s[i] == ' ' && result[result.length() - 1] == ' '){
            continue; // xoa khoang trang giua chuoi
        }
        result += s[i];
    }
    if(result.length() > 0 && result[result.length()-1] == ' '){
        result.erase(result.length()-1); // xoa khaong trang cuoi chuoi
    }
    return result;
}
string chuanhoachuoi(string s){
    s = xoakhoangtranggiua(s);
    return s;
}

// phân 2
// câu 1
int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}
// câu 2
int sofibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
// câu 3
int tongso(int n){
    if(n == 1) return 1;
    return n + tongso(n-1);
}
// câu 4
int tongchuso(int n){
    if(n == 0) return 0;
    return n % 10 + tongchuso(n/10);
}
// câu 5
int demchuso(int n){
    if(n == 0) return 0;
    return 1 + demchuso(n/10);
}

// câu 6
int daonguocso(int n,int result =0){
    if(n == 0) return result;
    return daonguocso(n/10,result *10 + n%10); 
}
// câu 7
bool songuyentohamphu(int n,int i){
    if(i * i > n) return true;
    if(n % i == 0) return false;
    return songuyentohamphu(n,i+1);
}
bool songuyentothongthuong(int n){
    if(n < 2) return false;
    return songuyentohamphu(n,2); 
}

// caua 8
bool kiemtradoixung(string s,int left,int right){
    if(left >= right) return true;
    if(s[left] != s[right]) return false;
    return kiemtradoixung(s,left + 1;right-1);
}
bool palindrome(string s){
    return kiemtradoixung(s,0,s.length()-1);
}
// câu 9
int UCLN(int a,int b){
    if(b == 0) return a;
    return UCLN(b,a % b);
}
//câu 10
int luythua(int a,int b){
    if(b == 0) return 1;
    if(b == 1) return a;
    return a * luythua(a,b-1);
}

// câu 11
int solonnhat(int A[],int n){
    if(n == 0) return A[0];
    int maxconlai = solonnhat(A,n-1);
    if(A[n-1] > maxconlai){
        return A[n-1];
    }
    else{
        return maxconlai
    }
}
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0; i< n;i++){
        cin>>A[i];
    }
}

// câu 12
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
int tongmang(int A[],int n){
    int total =0;
    if(n == 0) return 0;

    int tongconlai = tongmang(A,n-1);

    total = A[n-1] + tongconlai;
    return total;
}
// câu 13
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
int demsochan(int A[],int n){
    int ketqua;
    if(n ==0) return 0;

    int demso = demsochan(A,n-1);

    if(A[n-1] %2 ==0){
        ketqua = 1 + demso;
    }
    else[
        ketqua = 0 + demso;
    ]
    return ketqua;
}
// câu 14
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
int timkiem(int A[],int n,int x,int vitri=0){
    if(n ==0) return -1;
    if(A[0] == x)v return vitri;
    return timkiem(A+1,n-1,x,vitri+1); // xet cac so tiep theo tu dau mang toi cuoi mang
}
int vitri(int A[],int n,int x){

}
// câu 15
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
int timkiemnhiphan(int A[],int left,int right,int x){
    if(left > right) return -1;

    int mid = (left + right) /2;
    if(A[mid] == x ) return mid;
    if(A[mid] > x) return timkiemnhiphan(A,left,mid - 1,x);
    return timkiemnhiphan(A,mid+1,right,x);
} 
int timkiem(int A[],int n,int x){
    return timkiemnhiphan(A,0,n-1,x);
}

// câu 16
void indayso(int n){
    if(n  == 0) return;
    indayso(n-1);
    cout<<n<<" ";
}

// câu 17
void innguocve(int n){
    if(n == 0) return;
    cout<<n<<" ";
    innguocve(n-1);
}

// câu 18
void chuyennhiphan(int n){
    if(n == 0) return 0;
    chuyennhiphan(n  /2);
    cout<<n % 2;
}
// câu 19
void viethoachuoi(string &s,int index = 0){
    if(index >= s.length()) return;

    s[index] = toupper(s[index]);
    viethoachuoi(s,index+1);
}
// câu 20
int tongchusochan(int n){
    if(n == 0) return 0;
    int chuso = n % 10;
    int tongconlai = tongchusochan(n / 10);
    if(chuso % 2 ==0 ){
        return chuso + tongconlai;
    }
    else{
        return tongconlai;
    }
}

// câu 21
int UCLN(int n,int i){
    if(i == 1) return 1;
    if(n % i ==0) return i;
    return UCLN(n,i-1);

}
// câu 22
int uocso(int n,int i  = 1){
    if(i > n/2) return 0;
    return (n % i == 0 ? i : 0) + uocso(n,i+1);
 }

bool sohoanhao(int n){
    return n > 0 and n == uocso(n);
}

// câu 23
void xoakitu(string &s,char c,int i = 0){
    if(i >= s.length()) return;

    if(s[i] == c){
        s.erase(i,1);
        xoakitu(s,c,i);
    }
    else{
        xoakitu(s,c,i+1);
    }
}
// câu 24
int solanxuathien(string s,char c,int i =0){
    if(i >= s.length()) return 0;

    if(s[i] == c){
        return 1 + solanxuathien(s,c,i+1);
    }
    else{
        return solanxuathien(s,c,i+1);
    }
}
// cau 25
int dequyday(int n){
    if(n == 1) return 2;
    return 3* dequyday(n-1) + 1;
}
int main() {
    // câu 1
    int r;
    cout<<"nhap ban kinh r: "; cin>>r;
    int dientich = dientichhinhtron(r);
    cout<<"dien tich hinh tron la "<<dientich<<endl;
    // câu 2
    int n;
    cin>>n;
    if(sochan(n)){
        cout<<"so n nay la so chan";
    }
    else{
        cout<<"khong phai so chan";
    }
    //câu 3
    int a,b;
    cin>>a>>b;
    int lonnhat2so = solonnhat(a,b);
    cout<<"so lon nhat trong 2 so la"<<lonnhat2so<<endl;
    // câu 4
    int n;
    cin>>n;
    int tongso = tong(n);
    cout<<"tong tu 1 den n la: "<<tongso;
    //câu 5
    int n;
    cin>>n;
    int giaithuan=giaithua(n);
    cout<<"giai thua cua n la "<<giaithuan<<endl;

    // câu 6
    int n;
    cin>>n;
    if(songuyento(n)){
        cout<<"day la so nguyen to";
    }
    else{
        cout<<"day khong phai la so nguyen to";
    }
    // câu 7
    int n;
    cin>>n;
    int tongchuso = chuso(n);
    cout<<"tong cua chu so cua n la "<<tongchuso<<endl;
    // câu 8
    int n;
    cin>>n;
    int sochuso = demso(n);
    cout<<"so chu so cua n la: "<<sochuso;
    // câu 9
    int n;
    cin>>n;
    daonguoc(n);
    //câu 10
    int s;
    cin>>s;
    if(sodoixung(s)){
        cout<<"day la so doi xung";
    }
    else{
        cout<<"day khong phai la so doi xung";
    }
    // câu 11
    int  a,b;
    cin>>a>>b;
    cout<<"uoc chung lon nhat cua 2 so la: "<<UCLN(a,b);
    // câu 12
    int a,b;
    cin>>a>>b;
    cout<<"boi chung nho nhat cua 2 so la "<<BCNN(a,b);
    //câu 13 
    int n;
    cin>>n;
    cout<<"so fibonacci thu n la "<<fibonacci(n);
    // câu 14
    int n;
    cin>>n;
    if(sohoanhao(n)){
        cout<<"day la so hoan hao";
    }
    else{
        cout<<"day khong phai la so hoan hao";
    }
    //câu 15
    int n;
    cin>>n;
    if(soarmstrong(n)){
        cout<<"day la so armstrong";
    }
    else{
        cout<<"day khong phai la so armstrong";
    }
    //câu 16
    int C;
    cin>>C;
    cout<<"doi nhiet sang do F la: "<<nhietdo(C);
    // câu 17
    int sonhiphan; cin>>sonhiphan;

    cout<<"doi sang so thap phan la: "<<nhiphan(sonhiphan)<<endl;
    //câu 18
    int dai,rong;  cin>>dai>>rong;
    cout<<"dien tich hinh chu nhat la "<<dientichhcn(dai,rong);
    // câu 19
    int a,b,c;
    cout<<"nhap 3 canh cua tam giac";
    cin>>a>>b>>c;
    cout<<"chu vi tam giac la "<<chuvitamgiac(a,b,c);
    // câu 20
    string s;
    cout<<"nhap ho va ten ";
    cin>>s;

    cout<<"chuoi sau khi chuan hoa la "<<chuanhoachuoi(s);
    
    // câu 21

    int A[100],n;
    nhapmang(A,n);

    cout<<"so phan tu chan trong mang la: "<<demsochan(A,n)<<" so";
    //câu 22

    char ch;
    cout<<"nhap ki tu vao: ";
    cin>>ch;
    if(chucai(ch)){
        cout<<"day la chu cai";
    }
    else{
        cout<<"day khong phai la chu cai";
    }
    // câu 23
    string s;
    cout<<"nhap chuoi vao";
    getline(cin,s);

    if(chuoipalindrome(s)){
        cout<<"day la chuoi palindrome";
    }
    else{
        cout<<"day khong phai la chuoi palindrome";
    }

    // câu 24
    string s;
    getline(cin,s);

    cout<<"chuoi sau khi chuan hoa la: "<<chuanhoachuoi(s);

    // câu 25
    int a,b;
    cout<"nhap 2 so nguyen a va b";
    cin>>a>>b;
    cout<<"sau khi hoan doi la "<<hoandoi(a,b);

    // câu 26
    int n;
    cin>>n;
    cout<<"tong uoc os cua n la "<<tonguocso(n)<<endl;

    // câu 27
    char ch;
    cin>>ch;

    if(viethoakitu(ch)){
        cout<<"day la ki tu viet hoa";
    }
    else{
        cout<<"day khong phai la ki tu viet hoa";
    }

    //câu 28
    char ch;
    cin>>ch;

    if(vietthuongkitu(ch)){
        cout<<"day la ki tu viet thuong";
    }
    else{
        cout<<"day khong phai la ki tu viet thuong";
    }

    // câu 29
    string s;
    getline(cin,s);

    cout<<"so chu so co trong chuoi la "<<demchuso(s);

    // câu 30
    string s;
    getline(cin,s);

    cout<<"chuoi sau khi dc chuan hoa la "<<chuanhoachuoi(s);


    //  phần 2
    //câu 1
    int n;
    cin>>n;
    cout<<"giai thua cua so "<<n<<" la "<<factorial(n)<<endl;
    // câu 2
    int n;
    cin>>n;
    cout<<"so fibonacci so thu "<<n<<" la "<<sofibonacci(n)<<endl;

    // câu 3
    int n;
    cin>>n;

    cout<<"tong so tu 1 den so "<<n<<" la "<<tongso(n)<<endl;

    // câu 4
    int n;
    cin>>n;
    cout<<"tong chu so cua n la"<<tongchuso(n)<<endl;
    // câu 5
    int n;
    cin>>n;
    cout<<"so chu so co trong n la "<<demchuso(n)<<endl;

    //câu 6
    int n;
    cin>>n;
    cout<<"so dao nguoc cua n la "<<daonguocso(n)<<endl;

    // câu 7
    int n;
    cin>>n;
    if(songuyentothongthuong(n)){
        cout<<"day la so nguyen to";
    }
    else{
        cout<<"day khong phai la so nguyen to";
    }

    // câu 8
    string s;
    getline(cin,s);

    if(palindrome(s)){
        cout<<'day la chuoi palindrome';
    }
    else{
        cout<<"day khong phai la chuoi palindrome"
    }

    // câu 9
    int a,b;
    cin>>a>>b;

    cout<<"so uoc chung lon nhat cua a va b la "<<UCLN(a,b);

    // câu 10
    int a,b;
    cin>>a>>b;
    cout<<"luy thua cua a va b la "<<luythua(a,b)<<endl;

    // câu 11
    int A[100],n;

    nhapmang(A,n);

    cout<<"so lon nhat trong mang la "<<solonnhat(A,n)<<endl;
    

    // câu 12
    int A[100],n;
    nhapmang(A,n);

    cout<<"tong cac phan tu co trong mang la "<<tongmang(A,n);<<endl;

    // câu 13
    int A[100],n;

    nhapmang(A,n);

    cout<<"phan tu chan co trong mang la "<<demsochan(A,n)<<endl;

    // câu 14
    int A[100],n;
    int x;
    cout<<"nhap so muon tim trong mang la: "; cin>>x;

    int vitritim = timkiem(A,n,x);
    cout<<"vi tri cua x can tim la o "<<vitritim<<endl;

    // câu 15
    int A[100],n;
    nhapmang(A,n);

    // su dung sort de sap xep lai mang de phu hop voi pp tim kiem nhi phan
    sort(A,A+n);

    int X;
    cout<<'nhap so x can tim co trong mang: '; cin>>X;

   int vt1 = timkiem(A,n,x);
   if(vt1 != -1){
    cout<<"vi tri can tim cua x trong mang la "<<vt1<<endl;
   }
   else{
    cout<<"khong tim thay so";
   }

   //câu 16
   int n;
   cin>>n;
   cout<<"day tu 1 den n la "<<indayso(n);
   // cau 17
   int n;
   cin>>n;
   cout<<"day tu n ve 1 la "<<innguocve(n);
   // câu 18
   int n;
   cin>>n;
   cout<<"so nhi phan la "<<chuyennhiphan(n);

   // câu 19
   string s;
   getline(cin,s);

   cout<<"chuoi sau khi viet hoa la "<<viethoachuoi(s);
   
   // câu 20
   int n;
   cin>>n;
   cout<<"tong chu so chan cong lai co trong n la "<<tongchusochan(n)<<endl;
   // câu 21
   int n;
   cin>>n;
   int uocchung = UCLN(n,n-1);
   cout<<"uoc chung lon nhat < n la "<<uocchung<<endl;

   // câu 22
   int n;
   cin>>n;

   if(sohoanhao(n)){
        cout<<"day la so hoan hao";
   }
   else{

        cout<<"day khong phai la so hoan hao";
   }

   // câu 23
   string s;
   getline(cin,s);

   char c;
   getline(cin,c);
   cout<<"nhap ki tu muon xoa trong chuoi";

   xoakitu(s,c);
   cout<<"chuoi sau khi xoa ki tu la "<<s<<endl;

   // câu 24
   string s;
   getline(cin,s);

   char c;
   getline(cin,c);

   cout<<"so lan xuat hien cua ki tu xuat hien trong chuoi la "<<solanxuathien(s,c);
   // câu 25
   int n;
   cin>>n;

   for(int i = 0;i <= n;i++){
        cout<<"day a("<<i<<") co dap an la "<<dequyday(i)<<endl;
   }
    return 0;
}