#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const double PI = 3.14159265359;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// cấu 1
double dientichtamgiac(double cao,double day){
    return 0.5 * day * cao;
}
double dientichhinhtron(double bankinh){
    return PI * bankinh * bankinh;
}
double dientichhinhvuong(double canh){
    return canh * canh;
}
double dientichhinhthang(double daylon,double daynho,double chieucao){
    return 0.5 * (daylon + daynho) * chieucao;
}


// câu 2
int UCLN(int a,int b){
    return __gcd(a,b);
}
int BCNN(int a,int b){
    int ucln = UCLN(a,b);
    int value = a * b / ucln;
    return value;
}
// câu 3
// c/
void doixung(int n){
    int temp = n;
    int count =0;
    while(temp < 0){
        count++;
        temp /= 10;
    }
    int A[count];
    for(int i = count-1;i >= 0;i--){
        A[i] = n % 10;
        n /= 10;
    }
    bool istrue = false;
    for(int i = 0;i < count/2;i++){
        if(A[i] == A[n-i-1]){
            istrue = true;
            break;
        }
    }
    if(istrue){
        cout<<"so nay la so doi xung";
    }
    else{
        cout<<"so nay khong doi xung";
    }
}
// a
int uocso(int n){
    int total =0;
    for(int i = 0;i * i <= n;i++){
        if(n % i ==0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    return total;
}
// b
void soarmstrong(string s){
    getline(cin,s);
    
    int total =0;
    for(int i = stoi(s);i >= 1;i /= 10){
        int sodu = i % 10;
        total += pow(sodu,s.size());
    }
    int num = stoi(s);
    if(total == num){
        cout<<"so nay la so armstrong";
    }
    else{
        cout<<"so nay khong phai so armstrong";
    }
}
// d
bool sochinhphuong(int n){
    if(n < 0) return false;

    int sqrtn = sqrt(n);
    return sqrtn * sqrtn == n;
}
// câu 4
int demso0(int n){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        n = -n;// th so am
    }
    int dem =0;

    for(int i =n;i >= 1;i /= 10){
        int chuso = n % 10;
        if(chuso == 0){
            dem++;
        }
    }
    return dem;
}
// câu 5
int uocson(int n){
    int total =0;
    for(int i = 1;i*i <= n;i++){
        if(n % i ==0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    return total;
}
// câu 6
bool namnhuan(int n){
    if((n % 400 ==0) || (n % 4==0 && n % 100 !=0)){
        return true;
    }
    else{
        return false;
    }
}
// câu 7
void tongcacdoan(int a,int b){
    int total1 =0;
    int total2 =0;
    int total3 = 0;
    for(int i = a;i < b;i++){
        if(i % 3==0 && i % 5 ==0){
            total3 += i;
        }
        if(i % 3 == 0){
            total1 += i;
        }
        if(i % 5 == 0){
            total2 += i;
        }   
    }
    cout<<"tong cac so chia het cho 3 la "<<total1<<endl;
    cout<<"tong cac so chia het cho 5 la "<<total2<endl;
    cout<<"tong cac so chia het cho 3 va 5 la "<<total3;
}
// câu 8
void chuyentugio(double gio,double &phut, double &giay){
    phut = gio * 60;
    giay = phut * 60;
}
void chuyentugiay(double giay,double &phut,double &gio){
    phut = giay / 60;
    gio = phut / 60;
}
// câu 9
int fibonaccci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    long long f0 =0,f1= 1;
    long long fn;

    for(int i =2;i < n;++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return f1;
    
}
// câu 10
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}
void thutugiamdan(int A[],int n){
    for(int i =0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(A[i] < A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
void thututangdan(int A[],int n){
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(A[i] >  A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
// câu 11
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}

int giatrilonnhat(int A[],int n){
    int max_value = A[0]
    for(int i =0;i < n;i++){
        if(A[i] >  max_value){
            max_value = A[i];
        }
    }
    return max_value;
}
int giatrinhonhat(int A[],int n){
    int min_value = A[0];
    for(int i = 0;i<  n;i++){
        if(A[i]  < min_value){
            min_value = A[i];
        }
    }
    return min_value;
}
// câu 12
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}
bool songuyento(int n){
    if(n < 2) return false;
    for(int i =2;i*i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int demso(int A[],int n){
    int total =0; 
    for(int i =0;i < n;i++){
        if(songuyento(A[i])){
            total++;
        }
    }
    return total;
}
// câu 13
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}
int tongphantule(int A[],int n){
    int total = 0;
    for(int i = 1;i< n;i+=2){
        total += A[i];
    }
    return total;
}
// câu 14
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}
void daonguocmang(int A[],int n){
    for(int i =0;i <= n/2;i++){
        int temp = A[n-1-i];
        int A[n-1-i] = A[i];
        A[i] = temp; 
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
// câu 15
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}

bool mangdoixung(int A[],int n){
    for(int i = 0;i < n/2;i++){
        if(A[i] != A[n-i-1]){
            return false;
        }
    }
    return true;
}
// câu 16
void nhapmang(int A[],int &n){
    cout<<"nhap so phan tu":
    cin>>n;
    for(int i =0;i  <n;i++){
        cin>>A[i];
    }
}
bool sochan(int n){
    return n % 2 ==0;
}
bool sole(int n){
    return n % 2 != 0;
}
void nhapmangchan(int A[],int &n){
    int B[100];
    int count =0;

    for(int i = 0; i < n;i++){
        if(sochan(A[i])){
            B[count] =A[i];
            count++;
        }
    }
    for(int i = 0;i <n;i++){
        A[i]  = B[i];
    }
    n = count;
}
void nhapmangle(int A[],int &n){
    int C[100];
    int count =0;
    for(int i = 0;i< n;i++){
        if(sole(A{i})){
            C[count] = A[i];
            count++;
        }
    }
    for(int i = 0;i< n;i++){
        A[i] = C[i];
    }
    n = count;
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
// câu 17
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i <n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i= 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
void merged(int A[],int n,int B[],int m,int C[],int &k){
    // ta có mảng A với n phaanfd tử và mảng B với m phân tử dùng để xét mảng trộn là C với k phân tử
    int i =0,j=0;
    int k;

    while(i < n && j < m){
        if(A[i] <= B[j]){
            C[k] = A[i];
            i++;
        }
        else{
            C[k] = B[j];
            j++;
        }
        k++;
    }
    // TH nếu số luongj của các mảng còn lại con câc phần tử còn lại
    while(i < n){
        A[i] = C[k];
        i++;
        k++;
    }
    while(j <  m){
        B[j] = C[k];
        j++;
        k++;
    }

}
// câu 18
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i <n;i++){
        cin>>A[i];
    }
}
void xuathiennhieunhat(int A[],int n){
    int max_count = 0;
    int xuathien = A[0];
    for(int i =0;i< n;i++){
        int count =0;
        for(int j =0;j <nj++){
            count++;
        }
        if(count > max_count){
            max_count= count;
            xuathien = A[i];
        }
    }
    cout<<"so xuat hien nhieu nhat la "<<xuathien<<endl;
    cout<<"so lan xuat hien la"<<max_count<<endl;
}
// câu 19
// a
void demkitu(string s,int &demchuso,int &demso,int &demkitu){
    demchuso  =0;
    demso = 0;
    demkitu =0;

    for(int i =0,i < s.length();i++){
        if((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')){
            demchuso++;
        }
        else if(s[i] <= '9' && s[i] >= '0'){
            demso++;
        }
        else{
            demkitu++;
        }
    }
}

// câu 20
string xoaKhoangTrangThua(string s) {
    string result = "";
    
    for(int i = 0; i < s.length(); i++) {
        // Bỏ qua khoảng trắng ở đầu
        if(result == "" && s[i] == ' ') {
            continue;
        }
        
        // Bỏ qua nhiều khoảng trắng liên tiếp
        if(s[i] == ' ' && result[result.length()-1] == ' ') {
            continue;
        }
        
        result += s[i];
    }
    
    // Xóa khoảng trắng cuối
    if(result.length() > 0 && result[result.length()-1] == ' ') {
        result.erase(result.length()-1);
    }
    
    return result;
}
string vietHoaChuDau(string s) {
    // Viết thường tất cả trước
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    
    // Viết hoa chữ đầu mỗi từ
    for(int i = 0; i < s.length(); i++) {
        if(i == 0 && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        else if(i > 0 && s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    
    return s;
}
string chuanhoachuoi(string s){
    s = xoaKhoangTrangThua(s);
    s = vietHoaChuDau(s);
    return s;
}
// câu 21
//a
bool palindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
            break;
        }
        left++;
        right--;
    }
    return true;
}
// b
bool chuachuso(string s){
    if(s.length()== 0) return false;
    for(int i=0;i < s.length();i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
    return true;
}
// c
bool chuoiviethoa(string s){
    if(s.length()== 0) return false;
    for(int i =0;i< s.length();i++){
        if(s[i]  < 'A' || s[i] > 'Z' ){
            return false;
        }
    }
    return true;
}
// d
bool chuoivietthuong(string s){
    if(s.length()== 0) return false;
    for(int i =0;i< s.length();i++){
        if(s[i] < 'a' || s[i] > 'z' ){
            return false;
        }
    }
    return true;
}
// câu 22
void tachhovaten(string s,string &ho,string &tendem,string &ten){
    int start =0;
    // xoa nhung khoang trang dau tien cua chuoi
    int end = s.length()-1
    while(start < s.length() && s[start] == ' ') start++;
    while(end > 0 && s[end] == ' ') end--;

    if(start > end){
        ho = tendem = ten = "";
        return; // trong truogn hop neu khong co chu nao trong chuoi
    }

    // tim vi tri khooang trang dau tien sau ho
    int first_space = -1;
    for(int i =start;i < s.length();i++){
        if(s[i] == ' '){
            first_space = i;
            break;
        }
    }
    // tim khoang trang ngc ve sau chu dau tien 
    int  last_space = -1;
    for(int i = end;i >= start;i--){
        if(s[i] == ' '){
            last_space = i;
            break;
        }
    }

    // trong th chi co 1 chu;
    if(first_space == -1){
        ho = s.substr(start,start - end-1);
        tendem = ten = "";
    }
    else if(first_space == last_space){
        ho = s.substr(start,first_space - start);
        ten = s.substr(last_space,end - last_space);
        tendem = "";
    }
    else{
        ho = s.substr(start,first_space  - start);
        tendem = s.substr(first_space + 1,last_space - first_space-1);
        ten = s.substr(last_space,end - last_space);
    }

}
// câu 23
void thaythechuoi(string &s,string tucu,string tumoi){
    string result = "";
    int i =0;

    while(i < s.length()){
        bool khop = true;
        if(i + tucu.length() <= s.length()){
            for(int j = 0;j < tucu.length();j++){
                if(s[i+j] != tucu[j]){
                    khop = false;
                    break;
                }
            }
            if(khop){
                result += tumoi;
                i += tucu.length();
            }
            else{
                result += s[i];
                i++;
            }
        }
        else{
            ressult += s[i];
            i++;
        }
    }
    s = result;
    return s;
}
// câu 24
float tinhDiemTB(float mon1, float mon2, float mon3) {
    return (mon1 + mon2 + mon3) / 3.0;
}

// Hàm xếp loại
string xepLoai(float diemTB) {
    if (diemTB >= 8.0) {
        return "Gioi";
    } else if (diemTB >= 6.5) {
        return "Kha";
    } else if (diemTB >= 5.0) {
        return "Trung binh";
    } else {
        return "Yeu";
    }
}
// câu 25 
int tongcacsochan(int n){
    if(n== 0) return 0;

    int sochucuoi = n % 10;
    if(sochucuoi % 2 == 0){
        return sochucuoi + tongcacsochan(n / 10);
    }
    else{
        return tongcacsochan(n /10);
    }
}
int tongcacsole(int n){
    if(n ==0 ) return 0;
    int chusocuoi = n % 10;
    if(chusocuoi % 2 == 1){
        return chuachuso + tongcacsole(n / 10);
    }
    else{
        return tongcacsole(n/10);
    }
} 
// câu 26
int sodaonguoc(int n,int daonguocso = 0){
    if(n == 0) return daonguocso;

    daonguocso = daonguocso * 10 + n % 10;

    return sodaonguoc(n / 10,daonguocso);
}
bool kiemtradoixung(int n){
    return n == sodaonguoc(n);
}
// câu 27
//a
int tinhdequya(int n){
    if(n == 0) return 0;

    return n + tinhdequya(n-1);
    // tính tổng đệ quy từ tổng n từ n-1 đén 1
}
int tinhdequyb(int n){
    if(n == 0) return 0;
    return n * n + tinhdequyb(n-1);
    //tính tổng đệ quy từ tổng n^2 từ n -1 đến 1
}
// câu 28
int uoclonnhat(int n,int i){
    if(n == 0) return 1;

    if(n % i == 0){
        int uoctieptheo = uoclonnhat(n,i+1);
        if(i > uoctieptheo){
            return i;
        }
        else{
            return uoctieptheo;
        }
    }
    return uoclonnhat(n,i+1);
}
// câu 29
bool lasonguyento(int n,int i = 2){
    if(n < 2) return false;

    if(i > sqrt(n)){
        return true;
    }
    if(n % i ==0 ){
        return false;
    }
    return lasonguyento(n,i+1);
}
int tinhtongnguyento(int n,int i =2){
    if(i >= n){
        return 0;
    }

    if(lasonguyento(i)){
        return i + tinhtongnguyento(n,i+1);
    }
    return tinhtongnguyento(n,i+1);
}
// câu 30
long long giaithuakep(int n){
    if(n == 0 || n == 1) return 1;

    // de quy: n * (n-2)!!
    return n * giaithuakep(n-2);
}
// câu 31
int demchuso(int n){
    if(n == 0) return 0;

    return 1 + demchuso(n/10);
}

// câu 32
void chuyennhiphan(int n){
    if(n == 0) return 0;

    chuyennhiphan(n / 2);
    cout<<n % 2;
}
// câu 33
void tangdan(int n){
    if(n == 0) return n;

    tangdan(n-1); // tang dan tu 1 den n-1
    cout<<n<<" ";
}
void giamdan(int n){
    if(n == 0) return n;

    cout<<n<<" ";
    giamdan(n-1); // giam tu n-1 den 1
}
// câu 34
double tongA(int n){
    if(n == 0) return 1.00;

    return tongA(n-1) + 1 / pow(2,n);
}
int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}
int main(){
    cout<<fixed<<setprecision(2);
    // câu 1
    double cao,day;
    cout<<"nhap cao va day cua tam giac: "<<endl;
    cin>>cao>>day;

    cout<<"dien tich tam giac la "<<dientichtamgiac(cao,day)<<endl;
    
    double bankinh;
    cout<<"nhap ban kinh cua hinh tron: "<<endl;
    cin>>bankinh;

    cout<<"dien tich hinh tron la "<<dientichhinhtron(bankinh)<<endl;

    double canh;
    cout<<"nhap canh cua hinh vuong : "<<endl;
    cin>>canh;

    cout<<"dien tich hinh vuong la "<<dientichhinhvuong(canh)<<endl;

    double daylon,daynho,chieucao;
    cout<<"nhap day lon, day be va chieu cao cua hinh thang: "<<endl;
    cin>>daylon>>daynho>>chieucao;

    cout<<"dien tich hinh thang la "<<dientichhinhthang(daylon,daynho,chieucao)<<endl;

    //câu 2
    int a,b;
    cout<<"nhap so a va b";
    cin>>a>>b;
    cout<<"uoc chung lon nhat la "<<UCLN(a,b)<<endl;
    cout<<"boi chung nho nhat la "<<BCNN(a,b);

    // câu 3
    int n;
    cout<<"nhap so: ";
    cin>>n;
    //c
    doixung(n);
    // a
    int res =uocso(n);
    res -= n;
    if(res == n){
        cout<<"so nay la so hona hao";
    }
    else{
        cout<<"so nay khong hoan hao";
    }
    // b
    string s;
    soarmstrong(s);
    // d
    int n;
    cin>>n;
    if(sochinhphuong(n)){

        cout<<"day la so chinh phuong";
    }
    else{
        cout<<"day khong phai la so chinh phuong";
    }


    // câu 4
    int n;
    cin>>n;
    int soluong = demso0(n);
    cout<<"so luong so 0 co trong n la "<<soluong<<endl;

    // câu 5
    int n;
    cin>>n
    int tong = uocson(n);
    cout<<"tong cac uoc so cua n la "<<tong<<endl;

    // câu 6
    int n;
    cin>>n;
    if(namnhuan(n)){
        cout<<"n la nam nhuan";
    }
    else{
        cout<<"n khong phai la nam nhuan";
    }


    // câu 7
    int a,b;
    cin>>a>>b;

    tongcacdoan(a,b);

    // câu 8
    //a
    double gio;
    cin>>gio;
    double phut,giay;
    chuyentugio(gio,phut,giay);
    cout<<"tu "<<gio<<"h chuyen thanh "<<phut<<"phut va "<<giay<<" giay";
    // cau b
    double giay;
    cin>>giay;
    double phut,gio;
    chuyentugiay(giay,phut,gio);
    cout<<"tu "<<giay<"s chuyen thanh "<<phut<<"phut va "<<gio;<<" gio";

    // câu 9
    int n;
    cin>>n;

    cout<<"so fibonacci lan thu "<<n<<" la "<<fibonaccci(n);

    //câu 10
    int A[100],n;
    nhapmang(A,n);

    thututangdan(A,n);
    cout<<"thu tu tang dan cua mang la "<<xuatmang(A,n)<<endl;
    thutugiamdan(A,n);
    coiut<<"thu tu giam dan cua mang la "<<xuatmang(A,n);

    // câu 11
    int A[100],n;
    nhapmang(A,n);

    int lonnhat = giatrilonnhat(A,n);
    cout<<"gia tri lon nhat co trong mang la "<<lonnhat<<endl;

    int benhat = giatrinhonhat(A,n);
    cout<<"gia tri nho nhat co trong mang la "<<benhat;
    

    // câu 12
    int A[100],n;
    nhapmang(A,n);

    int ketqua = demso(A,n);
    cout<<"so nguyen to co trong mang la "<<ketqua<<endl;
    

    // câu 13
    int A[100],n;

    nhapmang(A,n);
    cout<<"tong cac phan tu le co trong mang la "<<tongphantule(A,n)<<endl;

    //câu 14
    int A[100],n;
    nhapmang(A,n);

    daonguocmang(A,n);

    cout<<"mang sau khi dao nguoc la "<<xuatmang(A,n)<<endl;

    // câu 15
    int A[100],n;

    nhapmang(A,n);
    if(n == 0){
        cout<<"khong ton tai mang";
    }
    if(n <= 2){
        cout<<"mang khong du de xet";
    }
    if(mangdoixung){
        cout<<"day la mang doi xung";
    }
    else{
        cout<<"day khong phai la mang doi xung";
    }

    // câu 16
    int A[100],n;

    nhapmang(A,n);
        
    nhapmangchan(A,n);
    cout<<"mang chan la "<<xuatmang(A,n)<<endl;

    nhapmangle(A,n);
    cout<<"mang le la "<<xuatmang(A,n);


    // câu 17
    int A[100],B[100],C[100];
    int n,m,k
    
    cout<<"nhap mang cua A "<<nhapmang(A,n)<<endl;
    cout<<"nhap mang cua B "<<nhapmang(B,m)<<endl;

    merged(A,n,B,m,C,k);
    cout<<"mang sau khi tron lai la "<xuatmang(C,k);


    // câu 18
    int A[100],n;
    nhapmang(A,n);

    xuathiennhieunhat(A,n);


    // câu 19
    string s;
    int sochucai,sochuso,sokitukhac;
    cout<<"nhap chuoi: "; 
    getline(cin,s);

    demkitu(s,sochucai,sochuso,sokitukhac);

    cout<<"a/ so luong chu cai co trong chuoi la "<<sochucai<<endl;
    cout<<"b/ so luong chu so co trong chuoi la "<<sochuso<<endl;
    cout<<"c/ so luong ki tu khac co trong chuoi la "<<sokitukhac;
    
    // câu 20

    string s;
    cout<<"nhap chuoi ";
    getline(cin,s);

    string ketqua = chuanhoachuoi(s);
    cout<<"chuoi sau khi chuan hoa la "<<ketqua<<endl;

    // câu 21
    string s;
    getline(cin,s);

    if(palindrome(s)){
        cout<<"chuoi nay la chuoi palindrome"
    }
    else{
        cout<<"khong phai chuoi palindrome";
    }
    if(chuoichuaso(s)){
        cout<<"chuoi nay chua cac chu so toan bo";
    }
    else{
        cout<<'chuoi khong chua chu so toan bo';
    }
    if(chuoiviethoa(s)){
        cout<<"chuoi viet hoa toan bo";
    }
    else{
        cout<<"chuoi khong viet hoa toan bo";
    }
    if(chuoivietthuong(s)){
        cout<<"chuoi viet thuong toan bo";
    }

    // câu 22
    string s;
    getline(cin,s);
    string ho,tendem,ten;


    cout<<"sau khi tach ho va ten la "<<tachhovaten(s,ho,tendem,ten)<<endl;

    // câu 23
    string s;
    cout<<"nhap chuoi";
    getline(cin,s);

    string tucu;
    cout<<"nhap tu muon thay";
    getline(cin,tucu);

    string tumoi;
    cout<<"nhap tu moi thay vao";
    getline(cin,tumoi);

    cout<<"chuoi sau khi da thay the la "<<thaythechuoi(s,tucu,tumoi)<<endl;

    // câu 24
    float mon1,mon2,mon3;
    cout<<"nhap diem mon1";
    cin>>mon1;
    cout<<"nhap diem mon 2";
    cin>>mon2;
    cout<<"nhap diem mon3 ";
    cin>>mon3;

    float diemtb = tinhDiemTB(mon1,mon2,mon3);
    string loai = xepLoai(diemtb);
    cout<<"xep loai hoc luc la "<<loai<<endl;

    // câu 25
    int n;
    cin>>n;

    int tongchan =tongcacsochan(n);
    int tongle = tongcacsole(n);

    cout<<"tong cac so chan trong n la "<<tongchan<<endl;
    cout<<"tong cac so le trong n la "<<tongle;
    

    // câu 26
    int n;
    cin>>n;

    cout<<"so dao nguoc la"<<sodaonguoc(n)<<endl;

    if(kiemtradoixung){
        cout<<"so nay la so doi xung";
    }
    else{
        cout<<"so nay khong doi xung";
    }
    // câu 27
    int n;
    cin>>n;

    int ketqua1 = tinhdequya(n);
    int ketqua2 = tinhdequyb(n);

    cout<<"tong cua ham de quy a la "<<ketqua1<<endl;
    cout<<"tong cua ham de quy b la "<<ketqua2<<endl;

    // câu 28
    int n;
    cin>>n;

    int uocsocuan = uoclonnhat(n);
    cout<<"uoc so lon nhat cua n la "<<uocsocuan<<endl;

    // câu 29
    int n;
    cin>>n;

    int tongnguyento = tinhtongnguyento(n);
    cout<<"tong so ngyyen to cua n la "<<tongnguyento<<endl;

    // câu 30
    int n;
    cin>>n;
    long long ketqua = giaithuakep(n);
    if(n % 2 == 0){
        // truong hop neu n la so chan
        for(int i = n-2;i >= 2;i-=2){
            cout<<" * "<<i; 
        }
    }
    else if(n % 2 != 0){
        // truogn hop neu n la so le
        for(int i = n-2;i >= 1;i -= 2){
            cout<<" * "<<i;
        }
    }
    cout<<" = "<<ketqua<<endl; 


    // câu 31
    int n;
    cin>>n;

    cout<<" so n co "<<demchuso(n)<<"chu so";
    // câu 32
    int n;
    cin>>n;

    chuyennhiphan(n);

    // câu 33
    int n;
    cin>>n;
    cout<<"day tang dan la "<<tangdan(n)<<<endl;
    cout<<"day giam dan la "<<giamdan(n);

    // câu 34
    int n;
    cin>>n;
    cout<<"tong cua cau a la "<<tongA(n)<<endl;
    cout<<"tong cua cau b la "<<tongB(n);
    return 0;

}