
//#include <iostream>

//using namespace std;

//int main(){
  //  string name;


    /*while(name.empty()){ // it will check the name is empty, if true it will execute the output enter your name
        cout<<"Enter your name: ";
        getline(cin,name);
    }

    cout<<"Hello "<<name;
    */


    // do while loop = do some block of code first,
                    // then repeat again if condition is true
    /*int n;
    do{
        cout<<"Enter a positive number: ";
        cin>>n;
    }while(n < 0);
    cout<<"The number is "<<n;
    */


    // for loop
    /*
    for(int i = 10;i >= 1;i--){
        cout<<i<<" ";
    }
    cout<<"Happy new year";


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
    long long f1 = 0,f2 =1;
    long long temp;
    int ketqua;
    if(n ==0){
        cout<<0;
        return 0;
    }
    while(f2 <= n){
        ketqua = f2;
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    cout<<ketqua;

    
    
    return 0;
}
    




// ai 1

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[100],B[100],C[100];
    int n,m;

    cin>>n>>m;

    for(int i =0;i < n;i++){
        cin>>A[i];
    }
    for(int j =0;j < m;j++){
        cin>>B[j];
    }
    int last = n + m;
    int k = last -1;
    int h = n-1;
    int l = m-1;

    if(n == 0 && m == 0){
        cout<<"EMPTY";
        return 0;
    }
    while(h >= 0 && l >= 0){
        if(A[h] < B[l]){
            C[k] = B[l];
            l--; 
        }
        else{
            C[k] = A[h];
            h--;
        }
        k--;
    }
    while(h >= 0){
        C[k] = A[h];
        h--;
        k--;
    }
    while(l >= 0){
        C[k] = B[l];
        l--;
        k--;
    }
    xuatmang(C,last);
    return 0;
}
    

    // bai 2
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0;i< n;i++){
        sort(A[i],A[i] + m);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    


    // cau 3

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
string xoakhoangtrang(string s){
    string result = "";
    for(int i =0;i < s.length();i++){
        if(result == "" && s[i] == ' '){
            continue;
        }
        if(s[i] == ' ' && result[result.length()-1] == ' '){
            continue;
        }
        result += s[i];
    }
    if(result.length() > 0 && result[result.length()-1] == ' '){
        result.erase(result.length()-1);
    }
    return result;

}

string viethoakitudau(string s){
    for(int i = 0;i < s.length();i++){
        if(s[i] <= 'Z' && s[i] >= 'A'){ 
            s[i] += 32; // chuen het ve ki tu thuong
        }
    }
    for(int i =0;i < s.length();i++ ){
        if(i == 0 && s[i] <= 'z' && s[i] >= 'a'){
            s[i] -=32;
        }
    }
    return s;
}
string chuanhoachuoi(string s){
    s  =xoakhoangtrang(s);
    s = viethoakitudau(s);
    return s;
}
int main() {

    string s;
    getline(cin,s);
    string ketqua = chuanhoachuoi(s);
    cout<<ketqua;
    
    return 0;
}

// cau 1

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void xuatmang(int *parr,int n){  
    for(int i =0;i< n;i++){
        cout<<*(parr + i)<<" ";
    }
}
int tong(int *parr,int n){
    int tong = 0;
    for(int i =0;i< n;i++){
        tong += *(parr+ i);
    }
    return tong;
}
void manggiamdan(int *parr,int n){
    for(int i =0;i <n-1;i++){
        for(int j = i+1;j < n;j++){
            if(*(parr + i) < *(parr + j)){
                int temp = *(parr + i);
                *(parr + i) =*(parr + j);
                *(parr + j) = temp; 
            }
        }
    }
}
int main() {
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    xuatmang(parr,n);
    cout<<endl;
    int res = tong(parr,n);
    cout<<res<<endl;
    manggiamdan(parr,n);
    xuatmang(parr,n);

    return 0;
}



// su dung phuong phap tim max r chong cheo len nhau
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i< n;i++){
        cin>>A[i];
    }
}
void sapxep(int A[],int n){
    sort(A,A+n); // sau khi co sap xep r thi neu co 1 so am thi lay 3 phan tu lon nhat o cuoi
}
void xuatmang(int A[],int n){
    for(int i=0;i< n;i++){
        cout<<A[i]<<" ";
    }
}
long long res(int A[],int n){
    long long max_value = INT_MIN;
    int max1 = INT_MIN,max2 = INT_MIN,max3 = INT_MIN;
    int min1 = INT_MAX,min2 = INT_MAX;
    for(int i =0;i< n;i++){
        int x = A[i];
        if(max1 < x){
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if(max2 < x){
            max3 = max2;
            max2 = x;
        }
        else if(max3 < x){
            max3 = x;
        }
        if(min1 > x){
            min2 = min1;
            min1 = x;
        }
        else if(min2 > x){
            min2 = x;
        }
    }
    long long result = max(max1 * max2 * max3,max1 * min1 * min2);
    if(result > max_value){
        max_value = result;
    }

    return max_value;
}
int main() {
    int A[10000],n;
    nhapmang(A,n);
    sapxep(A,n);
    long long ketqua = res(A,n);
    cout<<ketqua;
    
    return 0;
}
    */



// xoay mang, dich mang ve phai k buoc
/*
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
struct USER{
    int id;
    int ngaysinh;
};
void nhapthongtin(USER A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i].id>>A[i].ngaysinh;
    }
}

void xuatthongtin(USER d){
    cout<<"thong tin id la: "<<d.id<<endl;
    cout<<"ngay thang nam sinh: "<<setw(8)<<setfill('0')<<d.ngaysinh;
}
int sosanh(USER A[],int n){
    // minh phai so sanh tungvi trri index trong mang
    int B[100];
    int m = 0;
    for(int i =0;i < n;i++){
        B[m++] = A[i].ngaysinh; // da luu tat ca cac phan tu ngay sinh vao mang phu moi 
    }
    int max_val = B[0];
    int max_nam = max_val % 10000;
    int max_thang = (max_val / 10000) % 100;
    int max_ngay = (max_val / 1000000);
    for(int j =1;j < m;j++){
        int nam = B[j] % 10000; // ra ngay sinh
        int thang = (B[j] / 10000) % 100; // ra thang
        int ngay = B[j] / 1000000; // ra ngay
        //thang > ((max_val / 10000) % 100) && ngay > (max_val / 1000000)

        if(nam > max_nam || (nam == max_nam && thang > max_thang) || (nam == max_nam && thang == max_thang) && (ngay > max_ngay)){
            max_val = B[j];
            max_nam = nam;
            max_thang = thang;
            max_ngay = ngay;
        }
    }
    return max_val;
}
USER min_sinh(USER A[],int n){
    int res = sosanh(A,n);
    USER min_val = A[0];
    for(USER *p = A + 1;p < A + n;p++){
        if(p->ngaysinh == res){
            min_val = *p;
        }
    }
    return min_val;
}
int main() {
    USER A[100];
    int n;
    nhapthongtin(A,n);
    USER min_res = min_sinh(A,n);
    xuatthongtin(min_res);
    return 0;
}
    
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void giamdan(int A[],int n){
    for(int i =0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(A[i] < A[j]){
                swap(A[i],A[j]);
            }
        }
    }
}
int tongsohang(int A[],int n){
    int total = 0;
    for(int i =0;i < n;i++){
        total += A[i];
    }
    return total;
}
int main() {
    int A[100],B[100];
    int n,m;
    nhapmang(A,n);
    // dau tien la nhap so luong hang can phai cho trong 1 chuyen
    nhapmang(B,m);
    // tiep theo so xe can thiet de cho het dong hang
    giamdan(B,m);
    // dau tien la sort mang lon nhat co the cho
    int tong = tongsohang(A,n);
    int count = 0;
    int sum = 0;
    for(int j =0;j < m;j++){
        sum += B[j]; // noi chung la bien sum nay se o day cho den khi cong don len ma no vuot qua cai tong thi se break cai vong for nay
        count++;
        if(sum >= tong) break;
    }
    if(sum < tong){
        cout<<-1;
        return 0;
    }
    cout<<count;
    return 0;
}
    
#include <bits/stdc++.h>
using namespace std;

void nhapmang(int A[], int n){
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
}

int main() {
    int A[100005];
    int n, p;
    cin >> n >> p;
    nhapmang(A, n);

    // Bước 1: Tìm vùng ban đầu từ cây gốc đổ
    int index = p - 1;  // Chuyển sang 0-indexed
    int L = index - A[index] + 1;  // Biên trái
    int R = index + A[index] - 1;  // Biên phải
    
    // Giới hạn trong [0, n-1]
    L = max(L, 0);
    R = min(R, n - 1);
    
    // Bước 2: Mở rộng vùng đổ (hiệu ứng domino)
    int new_l, new_r;
    do {
        new_l = L;  // Lưu giá trị cũ
        new_r = R;
        
        // Duyệt tất cả cây trong vùng hiện tại
        for(int i = new_l; i <= new_r; i++){
            // Mỗi cây i làm đổ từ i-A[i]+1 đến i+A[i]-1
            L =     (L, i - A[i] + 1);  // Mở rộng trái
            R = max(R, i + A[i] - 1);  // Mở rộng phải
        }
        
        // Giới hạn lại
        L = max(L, 0);
        R = min(R, n - 1);
        
    } while(L != new_l || R != new_r);  // Lặp đến khi không mở rộng nữa
    
    // Bước 3: Đếm số cây đổ
    int count = R - L + 1;
    cout<<count;
    
    return 0;
}
    */



// chi can quan tam so sanh giua 2 mang
/*
void trunglap(int A[],int n, int B[],int m){
    int C[100],D[100];
    int k =0,h =0;
    for(int i =0; i< n;i++){
        bool isfound = false;
        for(int j = 0;j < m;j++){
            if(A[i] == B[j]){
                isfound = true;
            }
        }
        if(!isfound && !tranhtrunglap(C,k,A[i])){
            C[k++] = A[i];
        }
    }
    for(int j =0; j< m;j++){
        bool isfound = false;
        for(int i = 0;i < n;i++){
            if(A[i] == B[j]){
                isfound = true;
            }
        }
        if(!isfound && !tranhtrunglap(D,h,B[j])){
            D[h++] = B[j];
        }
    }
    for(int i =0;i < k;i++){
        cout<<C[i]<<" ";
    }
    for(int j =0;j < h;j++){
        cout<<D[j]<<" ";
    }
}



// bai quy hoach dong 


// OOP

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    // lam theo kieu de de hinh dung hon lan sau // cai nay nghia la minh se tao 1 mang 1 chieu vector A dong vai tro co n + 1 phan tu co the chen vao
    int n,m,c;
    cin>>n>>m>>c;
    vector<int> A(n + 1);
    for(int i = 1;i <= n;i++){
        cin>>A[i]; // da cin vao mang 1 chieu vector
    }
    bool isfound = false;
    for(int i = 1;(i + m - 1) <= n;i++){
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        for(int j = i;j <= (i + m - 1);j++){
            max_val = max(max_val,A[j]);
            min_val = min(min_val,A[j]); // xet tung so lon nhat va so be nhat ben trong cai mang vector 1 chieu 
        }
        if(abs(max_val - min_val) <= c){
            cout<<i<<endl;
            isfound = true; // phai xac nhan lai 1 lan nua de tranh bi nham lan khi xet neu cung 1 index
        }
    }
    if(!isfound){
        cout<<"NONE";
    }
    return 0;
}
    



#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // bat dau tim so phan du lon nhat de chia dc cho 10 va spend dc nhieu nhat va lay dc phan du nhiu nhat
        int total = 0;
        while(n >= 10){
            // chi tinh luc neu no >= 10 con khiong neu n < 10 thi cong lai het n
            int new_n = (n / 10) * 10; // lay phan lon nhat la boi so cua 10 de co dc phan du lon nhat va so tien spend cung it hon
            total += new_n;// lay tien total + lai tien new truoc do
            n = (n % 10) + (n / 10); // cai nay la so tien con lai
        }
        total += n;
        cout<<total<<endl;
    }
    
    return 0;
}
    
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// kiem tra cac ki tu dac biet
bool kitu(char c){
    return (c == ',' || c == ':' || c == '.' || c == '?' || c == '!' || c == ';');
}
// kiem tra phai co ki tu dang sau duoc viet hoa
bool viethoa(char c){
    return (c == '.' || c == ':' || c == '!' || c == '?');
}
// de yeu cau chuan hoa chuoi bang cach space phai dc dam bao
string xoakhoangtrang(string s){
    string res = "";
    for(int i = 0;i < s.length();i++){
        if(res == "" && s[i] == ' '){
            // xoa khoang trang dau cau
            continue;
        }
        if(s[i] == ' ' && res[res.length() - 1] == ' '){
            // xoa khoang trang giua cau
            continue;
        }
        res += s[i];
    }
    // xoa khoang trang cuoi cau
    if(res.length() > 0 && res[res.length() - 1] == ' '){
        res.erase(res.length() - 1);
    }
    return res;
}
// bat dau add space cho cac tu dung sau ki tu dac biet
string chu_real(string s){
    // luu bien tam cho 1 str bat ki
    string res = "";
    for(int i = 0; i < s.length();i++){
        // check xem neu no co phai la ki tu binh thuong
        if(kitu(s[i])){
            if(!res.empty() && res.back() == ' '){
                res.pop_back();
            }
            res += s[i]; // khuc nay la minh check xem lieu no co phai la ki tu dac biet ma chu dang sau no cong don vao
            // kiem tra cach 1 doan
            if(i + 1 < s.length() && s[i + 1] != ' '){
                res += ' '; // no chi dang cap  nhat lai cho res thoi
            }
        }
        else{
            res += s[i];
        }
    }
    return res;
}
// bat dau viet hoa cho chu cai sau moi ki tu dac biet
string inhoa(string s){
    for(int i = 0;i < s.length();i++){
        // viet hoa dau cau
        if(i == 0 && s[i] <= 'z' && s[i] >= 'a'){
            s[i] -= 32;
        }
        // check ki tu viet hoa
        if(i + 2 < s.length() && (viethoa(s[i])) && s[i + 1] == ' '){
            s[i + 2] = toupper(s[i + 2]);
        } 
    }
    return s;
}
// chuan hoa chuoi sau cung
string chuanhoa(string s){
    s = xoakhoangtrang(s);
    s = chu_real(s);
    s = inhoa(s);
    return s;
}
int main() {
    freopen("Bai1.inp","r",stdin);
    freopen("Bai1.output","w",stdout);

    string s;
    getline(cin,s);
    string original = s;
    string res = chuanhoa(s);
    if(original == res){
        cout<<1<<endl<<"*"<<endl;
    }
    else{
        cout<<0<<endl<<res<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


struct Nhanvien {
    string ID;
    string hoten;
    string phongban;
    int luong;
    int thuong;
    int thuclanh;

    Nhanvien() {
        ID       = "";
        hoten    = "";
        phongban = "";
        luong    = 0;
        thuong   = 0;
        thuclanh = 0;
    }

    void nhap() {
        cout << "ID      : "; cin >> ID;
        cin.ignore(); 
        cout << "Ho ten  : "; getline(cin, hoten);
        cout << "Phong ban: "; cin >> phongban;
        cout << "Luong   : "; cin >> luong;
        cout << "Thuong  : "; cin >> thuong;
        thuclanh = luong + thuong; 
    }

    void xuat() {
        cout << "ID      : " << ID       << endl;
        cout << "Ho ten  : " << hoten    << endl;
        cout << "Phong ban: " << phongban << endl;
        cout << "Luong   : " << luong    << endl;
        cout << "Thuong  : " << thuong   << endl;
        cout << "Thuc lanh: " << thuclanh << endl;
    }
};

struct DanhSachNhanVien {
    int n;
    Nhanvien ds[1000];

    void nhap() {
        cout << "So nhan vien: "; cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "\nNhan vien thu " << i + 1 << ":\n";
            ds[i].nhap();
        }
    }
    int tongthuclanh(){
        int total = 0;
        for(int i = 0;i < n;i++){
            total += ds[i].thuclanh;
        }
        return total;
    }
    int sosanh(){
        int min_luong = ds[0].luong;
        for(int i = 1;i < n;i++){
            if(min_luong > ds[i].luong){
                min_luong = ds[i].luong;
            }
        }
        return min_luong;
    }
    void luongthapnhat(){
        int min_val = sosanh();
        for(int i = 0;i < n;i++){
            if(ds[i].luong == min_val){
                ds[i].xuat();
            }
        }
    }
    int demnhanvien(){
        int dem = 0;
        for(int i = 0;i < n;i++){
            if(ds[i].thuong >= 1200000){
                dem++;
            }
        }
        return dem;
    }
    static bool congthuc(Nhanvien a,Nhanvien b){
        if(a.phongban != b.phongban){
            return a.phongban < b.phongban;
        }
        else{
            return a.ID > b.ID;
        }
    }
    void sapxep(){
        sort(ds,ds + n,congthuc);
    }
    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << "\nNhan vien thu " << i + 1 << ":\n";
            ds[i].xuat();
        }
    }
};

int main() {
    DanhSachNhanVien ds;
    ds.nhap();
    // cau a
    int tong = ds.tongthuclanh();
    cout<<"tong thuc lanh cua ca cong ty la: "<<tong<<endl;
    // cau b
    int min_val = ds.sosanh();
    cout<<"nhan vien co luong co ban thap nhatt la: "<<endl;
    ds.luongthapnhat();
    // cau c
    int nhanvien = ds.demnhanvien();
    cout<<"co tong cong "<<nhanvien<<" co tien thuong >= 1200000"<<endl;
    // cau d
    ds.sapxep();
    cout<<"danh sach nhan vien sau khi sap xep la: ";
    ds.xuat();
    return 0;   
}




#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
vector<long long> arr;
int n;
bool kiemtra(long long x,long long m){
    // x o day la so vien keo toi da co the chia cho tung goi de co it nhat m phan keo sao cho x la lon nhat
    int tong = 0;
    for(int i = 0;i < n;i++){
        tong += arr[i] / x; // nen nho la tinh gia tri sao cho lay x phan keo tu cac keo thu i ra ma chia
    }
    return tong >= m;
}
int main() {
    long long m; // khong can
    cin>>n>>m;
    arr.resize(n); // nhap mang cho n tui keo co tui thu i co arr[i] keo
    for(int i = 0;i < n;i++){
        cin>>arr[i]; // nhap vao a[i] vien keo tuong ung voi tui keo thu i
    }
    // yeu cau tim x lon nhat de so luong keo chia deu >= m
    // lam tron xuong bang floor cho moi lan tinh --> can ban la chi su dung int thay the cho double de so sanh
    // su dug cong thuc binary search dong vai tro nhu la tim kiem thg mid tuc la x bang viec lay dau tru so cuoi lon nhat de co dc keo nam trung binh
    int left = 1; // luon luon do keo > 0
    int right = *max_element(arr.begin(),arr.end()); // nhiem vu tim so lon nhat trong n hop keo
    int res = 0; // 1 bien de keep track of the new res
    while(left <= right){
        long long mid = (left + right) / 2;
        if(kiemtra(mid,m)){
            res = mid; // tuc la can tim x vien keo sao cho chia deu de co m phan keo la lon nhat
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout<<res;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    int n;
    cin>>n;

    vector<bool> songuyento(n + 1,true);
    songuyento[0] = songuyento[1] = false;
    for(int i = 2;i * i <= n;i++){
        if(songuyento[i]){
            for(int j = i * i;j <= n;j += i){
                songuyento[j] = false;
            }
        }
    }
    vector<int> arr;
    for(int i = 2;i <= n;i++){
        if(songuyento[i]){
            arr.push_back(i);
        }
    }
    cout<<arr.size()<<endl;
    for(int num : arr){
        cout<<num<<" ";
    }
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
int firstUniqChar(string s){
    // don gian la dau tien xet ki tu do xuat hien bao nhieu lan de dem 
    vector<int> count(256,0); // tao 1 mang vector de luu cac phan tu xuat hien cua ki tu do la bao nhieu lan
    for(char c : s){
        count[c]++;
    }

    // xet nhung th xuat hien 1 lan
    int index = -1;
    for(int i = 0;i < s.length();i++){
        if(count[s[i]] == 1){
            index = i;
            break;
        }
    }
    if(index != -1){
        return index;
    }
    else{
        return -1;
    }
}
int main() {
    string s;
    cin>>s;
    // dau tien la tao mang vector de luu trang thai cua tunng ki tu trong chuoi s
    int res = firstUniqChar(s);
    cout<<res;
    return 0;
}
