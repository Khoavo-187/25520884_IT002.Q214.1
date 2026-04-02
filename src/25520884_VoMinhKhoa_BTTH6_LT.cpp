#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// cau 1
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>*(parr + i);
    }
}
void phantulon(int *parr,int n){ 
    int max_value = *(parr + 0);
    for(int i =0;i < n;i++){
        if(*(parr + i) > max_value){
            max_value = *(parr + i); 
        }
    }
    cout<<"gia tri lon mhat co trong mng la: "<<max_value<<endl;
}

// cau 2
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>*(parr + i);
    }
}

void phantube(int *parr,int n){
    int min_value = *(parr + 0);

    for(int i =0;i < n;i++){
        if(min_value > *(parr + i)){
            min_value = *(parr + i);
        }
    }
    cout<<"phan tu be nhat co trong mang la : "<<min_value<<endl;
}

// cau 3
bool sochan(int n){
    return n % 2 == 0;
}
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void demsochan(int *parr,int n){
    // de dem so chan trong mang thi
    int total = 0;
    for(int i =0;i < n;i++){
        if(sochan(*(parr + i))){
            total++;
        }
    }
    cout<<"so phan tu chan co trong mang la: "<<total<<endl;
}

// cau 4
bool sole(int n){
    return n % 2 != 0;
}
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void demsole(int *parr,int n){
    // de dem so le trong mang thi
    int total = 0;
    for(int i =0;i < n;i++){
        if(sole(*(parr + i))){
            total++;
        }
    }
    cout<<"so phan tu le co trong mang la: "<<total<<endl;
}
// cau 5
bool songuyento(int n){
    if(n < 2) return false;

    for(int i =2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i = 0;i< n;i++){
        cin>>*(parr + i);
    }
}
void demsonguyento(int *parr,int n){
    int total  =0;
    for(int i =0;i < n;i++){
        if(songuyento(*(parr + i))){
            total++;
        }
    }
    cout<<"tong so nguyen to co trong mang la "<<total<<endl;
}

// cau 6
bool sohoanhao(int n){
    if(n < 1) return false;
    int total = 0;
    for(int i = 1;i * i <= n;i++){
        if(n % i ==0){
            total += i;
            if(i != n / i){
                total += n/i;
            }
        }
    }
    total -= n;
    return total == n;
}

void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>*(parr + i);
    }
}
void demsohoanhao(int *parr,int n){
    int dem  =0;
    for(int i =0;i< n;i++){
        if(sohoanhao(*(parr + i))){
            dem++;
        }
    }
    cout<<"so luong so hoan hao co trong mang la: "<<dem<<" so "<<endl;
}
// cau 7
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i = 0;i< n;i++ ){
        cin>>*(parr + i);
    }
}
void kiemtramangtangdan(int *parr,int n){
    if(n < 1 || n == 0) return;   
    bool istrue = true;
    for(int i = 0;i< n;i++){
        if(*(parr + i) >= *(parr + i + 1)){
            cout<<"day la mang khong  tang dan";
            istrue = false;
            break;
        }   
    }
    if(istrue){
        cout<<"day la mang tang dan ";
    }
}// cau 8
void nhapmang(int *parr,int &*n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>*(parr + i);
    }
}
void kiemtramanggiam(int *parr,int n){
    if(n == 0 || n  < 2) return;
    bool istrue = true;
    for(int i = 0;i< n;i++){
        if(*(parr + i) <= *(parr + i + 1)){
            cout<<"day khong phai la mang giam dan";
            istrue = false;
            break;
        }
    }
    if(istrue){
        cout<<"day la mang giam dan";
    }
}

// cau 9

void nhapmang(int *parr,int &*n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>*(parr + i);
    }
}
void daonguocmang(int *parr,int n){
    for(int i = n;i >= 0;i--){
        cout<<*(parr + i)<<" ";
    }
}
// cau 10
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void xuatmang(int *parr,int n){
    for(int i  =0;i <n;i++){
        cout<<*(parr + i)<<" ";
    }
}
void xoaphantu(int *parr,int &n,int k){
    for(int i =k;i < n;i++){
        *(parr + i) = *(parr + i + 1);
    }
    n--;
}
// cau 11
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>*(parr + i);
    }
}
void xuatmang(int *parr,int n){
    for(int i =0;i < n;i++){
        cout<<*(parr + i)<<" ";
    }
}
void chenso(int *parr,int &n,int k,int value){
    for(int i = n;i > k;i--){
        *(parr + i) = *(parr + i -1);
    }
    *(parr + k) = value;
    n++;
}
// cau 12
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void xuatmang(int *parr,int n){
    for(int i  =0;i < n;i++){
        cout<<*(parr + i)<<" ";
    }
}
void ghepmang(int *parr1,int n,int *parr2,int m,int *parr3,int &k){
    for(int i = 0;i < n;i++){
        *(parr3 + k) = *(parr1 + i);
        k++;
    }
    for(int j =0;j < m;j++){
        *(parr3 + k) = *(parr2 + j);
        k++;
    }
    
}
// cau 13
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void xuatmang(int *parr,int n){
    for(int i  =0;i < n;i++){
        cout<<*(parr + i)<<" ";
    }
}
bool sochan(int n){
    return n % 2 ==0;
}
bool sole(int n){
    return n %  2 != 0;
}
void tachmang(int *parr1,int n,int *parr2,int &m,int *parr3,int &k){
    for(int i =0;i < n;i++){
        if(sochan(*(parr1 + i))){
            *(parr2 + m) = *(parr1 + i);
            m++;
        }
        if(sole(*(parr1 + i))){
            *(parr3 + k) = *(parr1 + i);
            k++;
        }
    }
}
// cau 14
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}


void solanxuathien(int *parr,int n,int x){
    int dem = 0;
    for(int i =0;i < n;i++){
        if(*(parr + i) == x){
            dem++;
        }
    }
    cout<<"tong so lan xuat hien cua so x la: "<<dem<<" so";
}
// cau 15
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void timsogannhat(int *parr,int n,int x){
    int min_value = abs(*(parr + 0) - x);
    int index= 0;
    for(int i = 0;i < n;i++){
        int res = abs(*(parr + i) - x);
        if(res < min_value){
            min_value = res;
            index = i;
        }
    }
    cout<<"gia trio gan voi x nhat co trong mang la :"<<*(parr + index);
}
// cau 16
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
void sapxeptangdan(int *parr,int n){
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(*(parr + i) > *(parr + j)){
                int temp = *(parr + i);
                *(parr + i) = *(parr + j);
                *(parr + j) = temp;
            }
        }
    }
}

// cau 17
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void timx(int *parr,int n,int x){
    bool isfound = false;
    int index = 0;
    for(int i =0;i < n;i++){
        if(*(parr + i) == x){
            isfound = true;
            index = i;
            break;
        }
    }
    if(!(isfound)){
        cout<<"khong tim thay so x trong mang ";
    }
    else{
        cout<<"tim thay so x o vi tri la : "<<index;
    }
    
}
// cau 18
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
void xoatrungnhau(int *parr,int n,int *parr2,int &k){
    for(int i =0;i < n;i++){
        int count = 1;
        for(int j= i+1;j < n;j++){
            if(*(parr + i) == *(parr + j)){
                count++;
            }
        }
        if(count == 1){
                *(parr2 + k) = *(parr + i);
                k++;
            }
    }
}
// cau 19
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
bool soduong(int n){
    return n > 0;
}
void mangsoduong(int *parr,int n){
    bool isduong = true;
    for(int i =0;i < n;i++){
        if(!soduong(*(parr + i))){
            isduong = false;
            break;
        }
    }
    if(!isduong){
        cout<<"mang nay  khong pahi toan so duong ";
    }
    else{
        cout<<"mang nay toan so duong";
    }
}
// cau 20
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
bool soam(int n){
    return n < 0;
}
void mangsoam(int *parr,int n){
    bool isam = true;
    for(int i =0;i < n;i++){
        if(!soam(*(parr + i))){
            isam = false;
            break;
        }
    }
    if(!isam){
        cout<<"mang nay  khong phai toan so am ";
    }
    else{
        cout<<"mang nay toan so am";
    }
}
// cau 21
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
int trungbinhcong(int *parr,int n){
    int dem = 0;
    int total = 0;
    for(int i =0;i < n;i++){
        total += *(parr + i);
        dem++;
    }
    double res = total / dem;
    return res;
}
// cau 22
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
void hoandoi2phantu(int *parr,int index1,int index2){
    if(index1 < 0 || index2 < 0) return;
    int temp = *(parr + index1);
    *(parr + index1) = *(parr + index2);
    *(parr + index2) = temp;
}
// cau 23
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

void shufflemang(int *parr,int n){
    srand(time(0));
    for(int i = n- 1;i > 0;i--){
        int j = rand() % (i + 1);

        int temp = *(parr + i);
        *(parr + i) = *(parr + j);
        *(parr + j)= temp; 
    }
}
// cau 24
void nhapmang(int *parr,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>*(parr + i);
    }
}
void phantuxuathien(int *parr,int n){
    int max_count = 0;
    int index =0;
    for(int i = 0;i< n;i++){
        int count = 0;
        for(int j =0;j < n;j++){
            if(*(parr + i) == *(parr + j)){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            index = i;
        }
    }
    cout<<"so xuat hien nhieu nhat trong mang la : "<<*(parr + index);
}
// cau 25
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
void selectionsort(int *parr,int n){
    for(int i =0;i < n-1;i++){
        int min_index = i;
        for(int j = i + 1;j < n;j++){
            if(*(parr + j) < *(parr + min_index)){
                min_index = j; // minh cho bien j bang bien cua so be hon no
            }
        }
        if(min_index != i){
            int temp = *(parr + i);
            *(parr + i) = *(parr + min_index);
            *(parr + min_index) = temp;
        }
    }
}
// cau26
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
void bubblesort(int *parr,int n){
    for(int i=0;i < n - 1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(*(parr + j) > *(parr + j + 1)){
                int temp = *(parr + j);
                *(parr + j) = *(parr + j + 1);
                *(parr + j + 1) = temp;
            }
        }
    }
}
// cau 27
int* mangdong(int &n){
    cin>>n;
    int *parr = new int[n];

    for(int i =0;i < n;i++){
        cin>>*(parr + i);
    }
    return parr;
}
void xuatmang(int *parr,int n){
    for(int i =0;i< n;i++){
        cout<<*(parr + i)<<" ";
    }
}
// cau 28
void giaiphongmang(int *parr){
    if(parr != nullptr){
        delete[] parr;
        parr = nullptr;
        cout<<"da giai phong hoan toan bo nho cho mang "<<endl;
    }
}
// cau 29
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
bool soam(int n){
    return n < 0;
}
void chuanhoamang(int *parr,int n){
    for(int i =0;i < n;i++){
        if(soam(*(parr + i))){
            *(parr + i) = abs(*(parr + i));
        }
    }
}
// cau 30
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
// tim so lon nhat
int solonnhat(int *parr,int n){
    int max_value = *(parr + 0);
    int index = 0;
    for(int i =0;i < n;i++){
        if(*(parr + i) > max_value){
            max_value = *(parr + i);
            index = i;
        }
    }
    return *(parr + index);
}
// tim so be nhat
int sobenhat(int *parr,int n){
    int min_value = *(parr + 0);
    int index=  0;
    for(int i =0;i < n;i++){
        if(*(parr + i) < min_value){
            *(parr + i) = min_value;
            index = i;
        }
    }
    return *(parr + index);
}
void duclomang(int *parr,int n,int *parr2,int &m){
    for(int i =0;i< n;i++){
        int solonnhat = solonnhat(parr,n);
        int sobenhat = sobenhat(parr,n);
        if(*(parr + i) != solonnhat && *(parr + i) != sobenhat){
            *(parr2 + m) = *(parr + i);
            m++;
        }
    }
}
// cau 30
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
// tim so lon nhat
int solonnhat(int *parr,int n){
    int max_value = *(parr + 0);
    for(int i =0;i < n;i++){
        if(*(parr + i) > max_value){
            max_value = *(parr + i);
        }
    }
    return max_value;
}
// tim so be nhat
int sobenhat(int *parr,int n){
    int min_value = *(parr + 0);
    for(int i =0;i < n;i++){
        if(*(parr + i) < min_value){
            min_value = *(parr + i);
        }
    }
    return min_value;
}
void duclomang(int *parr,int n,int *parr2,int &m){
    int max_value = solonnhat(parr,n);
    int min_value = sobenhat(parr,n);
    m =0;
    for(int i =0;i< n;i++){
        if(*(parr + i) != max_value && *(parr + i) != min_value){
            *(parr2 + m) = *(parr + i);
            m++;
        }
    }
}
// cau 1
struct phanso
{
    long long ts;
    long long ms;
};
void nhapps(phanso *p,int &n){
    cin>>n;
    for(int i =0;i< n;i++){
        cin>>m[i].ts>>m[i].ms;
    }
}
void xuatps(phanso *p,int n){
    for(int i =0;i < n;i++){
        cout<<m[i].ts<<"/"<<m[i].ms;
        cout<<endl;
    }
}
// cau 2
struct phanso
{
    long long ts;
    long long ms;
};
int UCLN(int a,int b){
    return __gcd(llabs(a),llabs(b));
}
void rutgon(phanso *p){
    if(p->ts == 0){
        p->ms = 1;
        return;
    }
    if(p->ms < 0){
        p->ts = -p->ts;
        p->ms = -p->ms;
    }
    long long g = UCLN(a,b);
    p->ts /= g;
    p->ms /= g;
}
void nhapps(phanso *p){
    cin>>p->ts>>p->ms;
}
void xuatphanso(phanso *p){
    cout<<p->ts<<"/"<<p->ms;
}
int sosanh(phanso *a,phanso *b){
    long long left = a->ts * b->ms;
    long long right = a->ms * b->ts;
    if(left > right) return 1;
    if(left < right) return -1;
    return 0;
}
phanso* timmax(phanso *a,int n){
    phanso *max = a;
    for(phanso *p = a+1;p < ++){a+n;p
        if(sosanh(p,max) > 0){
            max = p;
        }
    }
    return max;
}
// cau 3
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
struct phanso
{
    long long ts,ms;
};
void nhapdiem(phanso *d){
    cin>>d->ts>>d->ms;
    // cai nay la cho nhap tung phan tu cotrong mang
}
void xuatdiem(phanso *d){
    cout<<d->ts<<"/"<<d->ms;
}
int UCLN(int a,int b){
    return __gcd(llabs(a),llabs(b));
}
void rutgon(phanso *d){
    if(d->ts == 0){
        d->ms = 1;
        return;
    }
    if(d->ms < 0){
        d->ts = -d->ts;
        d->ms = -d->ms;
    }
    long long g = UCLN(d->ts,d->ms);
    d->ts /= g;
    d->ms /= g;
}
int sosanh(phanso *d1,phanso *d2){
    long long left = d1->ts * d2->ms;
    long long right = d1->ms * d2->ts;
    if(left < right) return 0;
    if(left > right) return 1;
    return -1;
    // cai nay de xet xem cai nao 
}
phanso* min_value(phanso *a,int n){
    phanso *min = a;
    for(phanso *d = a+1;d < a+n;d++){
        if(sosanh(min,d) > 0){
            min = d;
        }
    }
    return min;
}
// cau 4
struct phanso
{
    long long ts;
    long long ms;
};
void nhapps(phanso *p,int &n){
    cin>>n;
    for(int i  =0;i< n;i++){
        cin>>p[i].ts>>p[i].ms;
    }
}
void in1ps(phanso *p){
    cout<<p->ts<<"/"<<p->ms<<" ";
}
void xuatphanso(phanso *p,int n){
    for(int i=0;i < n;i++){
        in1ps(p[i]);
    }
}
void demphansoam(phanso *m,int n){
    int dem =0;
    for(phanso *p =m;p < m+n;p++){
        if((p->ts < 0 && p->ms > 0) || (p->ts > 0 && p->ms < 0)){
            in1p(*p);
            dem++;
        }
    }
    cout<<"tong so am trong mang la "<<dem<<" so";
}
// cau 5
struct phanso
{
    long long ts;
    long long ms;
};
void nhapps(phanso *p,int &n){
    cin>>n;
    for(int i  =0;i< n;i++){
        cin>>p[i].ts>>p[i].ms;
    }
}
void in1ps(phanso *p){
    cout<<p->ts<<"/"<<p->ms<<" ";
}
void xuatphanso(phanso *p,int n){
    for(int i=0;i < n;i++){
        in1ps(p[i]);
    }
}
void demphansoduong(phanso *a,int n){
    int dem =0;
    for(phanso *p = a,p < m + n;p++){
        if((p->ts >0 && p->ms > 0) ||(p->ts < 0 && p->ms < 0)){
            in1ps(*p);
            dem++;
        }
    }
    cout<<"tat ca co "<<dem<<" phan so duong co trong mang";
}
// cau 6
struct phanso
{
    long long ts,ms;
};
void nhapps(phanso *d){
    cin>>d->ts>>d->ms;
    // cai nay la cho nhap tung phan tu cotrong mang
}
void xuatps(phanso *d){
    cout<<d->ts<<"/"<<d->ms;
}
int UCLN(int a,int b){
    return __gcd(llabs(a),llabs(b));
}
void rutgon(phanso *d){
    if(d->ts == 0){
        d->ms = 1;
        return;
    }
    if(d->ms < 0){
        d->ts = -d->ts;
        d->ms = -d->ms;
    }
    long long g = UCLN(d->ts,d->ms);
    d->ts /= g;
    d->ms /= g;
}
int sosanh(phanso *d1,phanso *d2){
    long long left = d1->ts * d2->ms;
    long long right = d1->ms * d2->ts;
    if(left < right) return -1;
    if(left > right) return 1;
    return 0;
    // cai nay de xet xem cai nao 
}
void sapxeptangdan(phanso *a,int n){
    for(phanso *p = a;p < a + n;p++){ // a o day co  nghia la phan tu dau mang trong mang
        for(phanso *k = p + 1;k < a + n;k++){
            if(sosanh(p,k)>0){
                swap(*p,*k);
            }
        }
    }
}
// cau 7
int tongtatcaphanso(phanso *a,int n){
    int total = 0;
    for(phanso *p = a;p < a + n;p++){
        total +=*p;
    }
    return total
}
void sapxepgiamdan(phanso *a,int n){
    for(phanso *p = a;p < a + n;p++){ // a o day co  nghia la phan tu dau mang trong mang
        for(phanso *k = p + 1;k < a + n;k++){
            if(sosanh(p,k)<0){
                swap(*p,*k);
            }
        }
    }
}
// cau 8
phanso tongcacphantu(phanso *a,int n){
    phanso tong;
    tong.ts = 0;
    tong.ms = 1;
    for(phanso *p = a;p < a + n;p++){
        tong.ts = tong.ts * p->ms + tong.ms * p->ts;
        tong.ms = tong.ms * p->ms;
        rutgon(&tong);
    }
    return tong;
}
// cau 9
phanso tichphanso(phanso *a,int n){
    phanso tich;
    tich.ts = 1;
    tich.ms = 1;
    for(phanso *p =a;p < a+n;p++){
        tich.ts = tich.ts * p->ts;
        tich.ms = tich.ms * p->ms;
        rutgon(&tich);
    }
    return tich;
}
// cau 10
// doi voi bai nay thi minh nen ep qua gia tri la double lun de no lay phan thap phan de tinh toan
struct phanso
{
    long long ts,ms;
};
void nhapps(phanso *d){
    cin>>d->ts>>d->ms;
    // cai nay la cho nhap tung phan tu cotrong mang
}
void xuatps(phanso *d){
    cout<<d->ts<<"/"<<d->ms;
}
int UCLN(int a,int b){
    return __gcd(llabs(a),llabs(b));
}
void rutgon(phanso *d){
    if(d->ts == 0){
        d->ms = 1;
        return;
    }
    if(d->ms < 0){
        d->ts = -d->ts;
        d->ms = -d->ms;
    }
    long long g = UCLN(d->ts,d->ms);
    d->ts /= g;
    d->ms /= g;
}
phanso trituyetdoi(phanso *d){
    return abs((double)d->ts/d->ms);
}
phanso sogan0(phanso *a,int n){
    phanso *min_value = a;
    for(int i =0;i < n;i++){
        if(trituyetdoi(*(a+i)) < trituyetdoi(*min_value)){
            min_value = a + i;
        }
    }
    return *min_value;
}
// cau 11
phanso tusolonnhat(phanso *a,int n){
    phanso *max_tu = a;
    for(phanso *p =a;p< a+n;p++){
        if(max_tu->ts < p->ts){
            max_tu = p;
        }
    }
    return *max_tu;
}
// cau 12
phanso mausonhonhat(phanso *a,int n){
    phanso *min_mau = a;
    for(phanso *p =a;p< a+n;p++){
        if(min_mau->ms > p->ms){
            min_mau = p;
        }
    }
    return *min_mau;
}
// cau 13
struct sophuc
{
    int thuc;
    int ao;
};
void nhapnsophuc(sophuc *a,int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>a[i].thuc>>a[i].ao;
    }
}
void xuatsophuc(sophuc *a,int n){
    for(int i  =0;i < n;i++){
        if(a[i].ao > 0){
            cout<<a[i].thuc<<"+"<<a[i].ao<<"i";
        }
        else{
            cout<<a[i].thuc<<"-"<<-a[i].ao<<"i";
        }
    }
}
// cau 14
struct sophuc
{
    double thuc;
    double ao;
};
void module_phuc(sophuc *d){
    return sqrt(d->thuc * d->thuc + d->ao * d->ao);
}
sophuc maxmodule(sophuc *a,int n){
    sophuc *max_module = a;
    for(sophuc *p = a;p < a + n;p++){
        if(module_phuc(*p) > module_phuc(*max_module)){ 
            max_module = p;
        }   
    }
    return *max_module;
}
void xuat1sothuc(sophuc *a){
    if(a[i].ao > 0){
        cout<<a[i].thuc<<"+"<<a[i].ao<<"i";
    }
    else{
        cout<<a[i].thuc<<"-"<<-a[i].ao<<"i";
    }
}
// cau 15
struct sophuc
{
    double thuc;
    double ao;
};
void module_phuc(sophuc *d){
    return sqrt(d->thuc * d->thuc + d->ao * d->ao);
}
void xuat1sothuc(phanso *a){
    if(a[i].ao > 0){
        cout<<a[i].thuc<<"+"<<a[i].ao<<"i";
    }
    else{
        cout<<a[i].thuc<<"-"<<-a[i].ao<<"i";
    }
}
phanso minmodule(sothuc *a,int n){
    phanso *min = a;
    for(phanso *d = a;d < a + n;d++){
        if(module_phuc(*d) < module_phuc(*min)){
            min = a;
        }
    }
    return *min;
}
// cau 16
struct sophuc
{
    double thuc,ao;
};
void nhapsothuc(sophuc *d){
    cin>>d->thuc>>d->ao;
}
void xuat1sothuc(sophuc *d){
    if(d->ao > 0){
        cout<<d->thuc<<"+"<<d->ao<<"i";
    }
    else{
        cout<<d->thuc<<"-"<<-d->ao<<"i";
    }
}
sophuc tongcacsothuc(sophuc *a,int n){ //  cho mang cac so thuc co trong mang
    sophuc tong;
    tong.thuc = 0;
    tong.ao = 0;
    // de tinh cac so thuc cho so phan thuc
    for(int i =0;i< n;i++){
        tong.thuc += a[i].thuc;
        tong.ao += a[i].ao;
    }
    return tong;
}
// cau 17
sophuc tichsophuc(sophuc *a,int n){
    sophuc tich;
    tich.thuc = 1;
    tich.ao= 1;
    for(int i =0;i< n;i++){
        tich.thuc *= a[i].thuc;
        tich.ao *= a[i].ao;
    }
    return tich;
}
// cau 18
int phuctrentructhuc(sophuc *a,int n){
    int dem =0;
    for(int i =0;i < n;i++){
        if(a[i].ao == 0){
            dem++;
        }
    }
    return dem;
}
// cau 19
int phuctrentrucao(sophuc *a,int n){
    int dem =0;
    for(int i =0;i < n;i++){
        if(a[i].thuc == 0){
            dem++;
        }
    }
    return dem;
}
// cau 20
struct sophuc
{
    double thuc,ao;
};
void nhapsothuc(sophuc *d){
    cin>>d->thuc>>d->ao;
}
void xuat1sothuc(sophuc *d){
    if(d->ao > 0){
        cout<<d->thuc<<"+"<<d->ao<<"i";
    }
    else{
        cout<<d->thuc<<"-"<<-d->ao<<"i";
    }
}
void module_sophuc(sophuc *d){
    return sqrt(d->thuc * d->thuc + d->ao * d->ao)
}
sophuc *min_module(sophuc *a,int n){
    sophuc *min = a;
    for(sophuc *d = a;d < a + n;d++){
        if(module_sophuc(d) < module_sophuc(min)){
            min =d;
        }
    }
    return *min;
}
// cau 21
void phanthuctangdan(sophuc *a,int n){
    for(int i = 0;i < n;i++){
        for(int j= i+1;j < n;j++){
            if(a[i].thuc > a[j].thuc){
                swap(a[i],a[j]);
            }
        }
    }
}
// cau 22
void phanaogiamdan(sophuc *a,int n){
    for(int i = 0;i < n;i++){
        for(int j= i+1;j < n;j++){
            if(a[i].ao < a[j].ao){
                swap(a[i],a[j]);
            }
        }
    }
}
// III
// cau 23
struct DIEM
{
    long long x,y;
};
void nhapdiem(DIEM *a,int &n){
    for(int i =0;i < n;i++){
        cin>>a[i].x>>a[i].y;
    }
}
void xuatdiem(DIEM *a,int n){
    for(int i =0;i < n;i++){
        cout<<"("<<a[i].x<<";"<<a[i].y<<")";
    }
}
// cau 24 
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}   
double khoangcach(DIEM *d1,DIEM *d2){
    double dx = d2->x - d1->x;
    double dy = d2->y - d1->y;
    return sqrt(dx * dx + dy * dy);
}
DIEM *diemxanhat(DIEM *a,int n){
    DIEM d0;
    d0.x =0;
    d0.y = 0;
    DIEM *max_value = a;
    double max_kc = khoangcach(a,&d0);
    for(DIEM *d = a+1,d < a + n;d++){
        if(khoangcach(d,&d0) > max_kc){
            max_kc = khoangcach(d,d0);
            max_value = d;
        }
    }
    return max_value;
}
void xuat1diem(DIEM *a){
    cout<<"("<<a[i].x<<";"<<a[i].y<<")";
}
// cau 25 
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}   
double khoangcach(DIEM *d1,DIEM *d2){
    double dx = d2->x - d1->x;
    double dy = d2->y - d1->y;
    return sqrt(dx * dx + dy * dy);
}
DIEM *diemgannhat(DIEM *a,int n){
    DIEM d0;
    d0.x =0;
    d0.y = 0;
    DIEM *min_value = a;
    double min_kc = khoangcach(a,&d0);
    for(DIEM *d = a+1,d < a + n;d++){
        if(khoangcach(d,&d0) > min_kc){
            min_kc = khoangcach(d,d0);
            min_value = d;
        }
    }
    return min_value;
}
void xuat1diem(DIEM *a){
    cout<<"("<<a[i].x<<";"<<a[i].y<<")";
}

// cau 26
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}  
int demsodiemI(DIEM *a,int n){
    int dem = 0;
    for(DIEM *d = a;d < a + n;d++){
        if(d->x > 0 && d->y > 0){
            dem++;
        }
    }
    return dem;
}
// cau 27
int demsodiemII(DIEM *a,int n){
    int dem = 0;
    for(DIEM *d = a;d < a + n;d++){
        if(d->x < 0 && d->y > 0){
            dem++;
        }
    }
    return dem;
}
// cau 28
int demsodiemIII(DIEM *a,int n){
    int dem = 0;
    for(DIEM *d = a;d < a + n;d++){
        if(d->x < 0 && d->y < 0){
            dem++;
        }
    }
    return dem;
}
// cau 29
int demsodiemIV(DIEM *a,int n){
    int dem = 0;
    for(DIEM *d = a;d < a + n;d++){
        if(d->x > 0 && d->y > 0){
            dem++;
        }
    }
    return dem;
}
// cau 30
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}  
void xuatdiem(DIEM *a){
    cout<<"("<<a->x<<";"<<a->y<<")";
}
int khoangcach(DIEM *d1,DIEM *d2){
    double dx = d2->x - d1->x;
    double dy = d2->y - d1->y;
    return sqrt(dx * dx + dy * dy);
}
void timdiemgannhat(DIEM *a,int n,DIEM *&d1,DIEM *&d2){
    d1 = a;
    d2 = a + 1;
    double khoangcach_min = khoangcach(d1,d2);
    for(DIEM *d = a;d < a + n - 1;d++){
        for(DIEM *k = d + 1;k < a + n;k++){
            if(khoangcach(d,k) < khoangcach_min){
                khoangcach_min = khoangcach(d,k);
                d1 = d;
                d2 = k;
            }
        }
    }
}
// cau 31
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}  
void xuatdiem(DIEM *a){
    cout<<"("<<a->x<<";"<<a->y<<")";
}
int khoangcach(DIEM *d1,DIEM *d2){
    double dx = d2->x - d1->x;
    double dy = d2->y - d1->y;
    return sqrt(dx *dx + dy * dy);
}
DIEM *timdiemxanhat(DIEM *a,int n,DIEM *&d1,DIEM *&d2){
    d1 = a;
    d2 = a + 1;
    double min_kc = khoangcach(d1,d2);
    for(DIEM *p = a;p < a+ n - 1;p++){
        for(DIEM *k = p +1;k < a+n;k++){
            if(khoangcach(p,k) < min_kc){
                min_kc = khoangcach(p,k);
                d1 = p;
                d2 = k;
            }
        }
    }
}
// cau 32
struct DIEM
{
    long long x,y;
};
void nhap1diem(DIEM *a){
    cin>>a->x>>a->y;
}  
void xuatdiem(DIEM *a){
    cout<<"("<<a->x<<";"<<a->y<<")";
}
double khoangcach(DIEM *d1,DIEM *d2){
    double dx = d2->x - d1->x;
    double dy = d2->y - d1->y;
    return sqrt(dx * dx + dy * dy);
}
void khoangcachtangdan(DIEM *a,int n){
    DIEM d0;
    d0.x = 0;
    d0.y = 0;
    for(DIEM *d = a;d < a + n;d++){
        for(DIEM *k = d + 1;k< a + n;k++){
            if(khoangcach(d0,d) > khoangcach(d0,k)){
                swap(*d,*k);
            }
        }
    }
}
// cau 33
struct sinhvien
{
    int MSSV;
    string hovaten;
    double toan,li,hoa;
};
// cau 34
void nhapthongtinSV(sinhvien *a){
    cin.ignore();
    cout<<"nhap ho va ten sinh vien"; 
    getline(cin,a->hovaten);
    cout<<"nhap mssv cho sinh vien: "; cin>>a->MSSV;
    cout<<"nhap diem toan cho sinh vien: ";
    cin>>a->toan;
    cout<<"nhap diem ly cho sinh vien: "; cin>>a->li;
    cout<<"nhap diem hoa cho sinh vien: "; 
    cin>>a->hoa;
}
void xuatthongtinsinhvien(sinhvien *a){
    cout<<"Ho va ten: "<<a->hovaten;
    cin.ignore();
    cout<<endl;
    cout<<"MSSV:"<<a->MSSV;
    cout<<endl;
    cout<<"Diem toan: "<<a->toan;
    cout<<endl;
    cout<<"Diem li: "<<a->li;
    cout<<endl;
    cout<<"Diem hoa: "<<a->hoa;
}
double diemtrungbinh(sinhvien *d){
    return (d->hoa + d->li + d->toan) /3.0;
}
// cau 35
sinhvien *diemcaonhat(sinhvien *a,int n){
    sinhvien *max_diem = a;
    for(sinhvien *d = a + 1;d < a+n;d++){
        if(diemtrungbinh(max_diem) < diemtrungbinh(d)){
            max_diem = d;
        }
    }
    return max_diem;
}
int main() {
    // phan A
    // cau 1
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    
    phantulon(parr,n); 
    // cau 2
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    phantube(parr,n);

    // cau 3
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    demsochan(parr,n);
    // cau 4
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    demsole(parr,n);
    // cau 5
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    demsonguyento(parr,n);
    // cau 6
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    demsohoanhao(parr,n);

    // cau 7
    int A[100],n;
    int *parr  =A;
    nhapmang(parr,n);
    kiemtramangtangdan(parr,n);

    // cau 8
    int A[100],n;
    int *parr = A:
    nhapmang(parr,n);
    kiemtramanggiam(parr,n);
    // cau 9
    int A[100],n;
    int *parr =A;
    nhapmang(parr,n);
    cout<<"mang sau khi dao nguoc la ";
    daonguocmang(parr,n);
    // cau 10
    int A[100],n,k;
    int *parr = A;
    nhapmang(parr,n);
    cout<<"nhap vi tri phan tu muon xoa: ";
    cin>>k;
    xoaphantu(parr,n,k);
    cout<<"mang sau khi da xoa phan tu tai k la: ";
    xuatmang(parr,n);
    //cau 11
    int A[100],n;
    int k,value;
    int *parr = A;

    nhapmang(parr,n);
    cout<<"nhap vi tri phan tu can them vao cho mang la:";
    cin>>k;
    cout<<endl;
    cout<<"nhap so can chen vao la: ";
    cin>>value;
    chenso(parr,n,k,value);
    cout<<"mang sau khi them vao la ";
    xuatmang(parr,n);
    // cau 12
    int A[100],B[100],C[100];
    int n,m,k;
    int *parr1 = A;
    int *parr2 = B;
    int *parr3 = C;
    cout<<"nhap mang dau tien: ";
    nhapmang(parr1,n);
    cout<<endl;
    cout<<"nhap mang thu 2: ";
    nhapmang(parr2,m);
    cout<<endl;

    ghepmang(parr1,n,parr2,m,parr3,k);
    cout<<"mang sau khi sap xep la: ";
    xuatmang(parr3,k);
    //cau 13

    int A[190],B[100],C[100];
    int n,m=0,k=0;
    cout<<"nhap phuong trinh ban dau: ";
    int *parr1 = A;
    nhapmang(parr1,n);
    int *parr2 = B;
    int *parr3 = C;
    cout<<"mang chua toan so chan la: ";
    tachmang(parr1,n,parr2,m,parr3,k);
    xuatmang(parr2,m);
    cout<<endl;
    cout<<"mang chua toan so le la : ";
    xuatmang(parr3,k);
    cout<<endl;
    // cau 14
    int A[100],n;
    int *parr =  A;
    nhapmang(parr,n);
    int x;
    cout<<"nhap so cho x la: ";
    cin>>x;
    solanxuathien(parr,n,x);

    // cau 15
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    int x;
    cout<<"nhap so x la: ";
    cin>>x;

    timsogannhat(parr,n,x);
    // cau 16
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    sapxeptangdan(parr,n);
    cout<<"mang sau khi sap xep tang dan la : ";
    xuatmang(parr,n);
    // cau 17
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    int x;
    cout<<"nhap so x can tim trong mang la : ";
    cin>>x;
    timx(parr,n,x);

    // cau 18
    
    int A[100],B[100];
    int n,k;
    int *parr = A;
    int *parr2 = B;
    nhapmang(parr,n);
    xoatrungnhau(parr,n,parr2,k);
    xuatmang(parr2,k);
    // cau 19

    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    mangsoduong(parr,n);
    // cau 20
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    mangsoam(parr,n);
    // cau 21
    int A[100],n;
    nhapmang(parr,n);
    int ketqua = trungbinhcong(parr,n);

    cout<<"tong so trung binh cong co trong mang la ";
    cout<<ketqua;
    // cau 22
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    int index1;
    cout<<"nhap vi tri cho so muon chuyen: ";
    cin>>index1;
    int index2;
    cout<<"nhap so cho vi tri thu 2 can hoan doi";
    cin>>index2;
 
    hoandoi2phantu(parr,index1,index2);
    xuatmang(parr,n);
    // cau 23
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    cout<<"mang sau khi shuflfe ngau nhien la: ";
    shufflemang(parr,n);
    xuatmang(parr,n);
    // cau 24
    int A[100],n;
    int *parr = A;
    nhapmang(parr,n);
    phantuxuathien(parr,n); 
    // cau 25
    int A[100],n;
    int *parr= A;
    nhapmang(parr,n);
    selectionsort(parr,n);
    cout<<"mang sau khi sap xep la: ";
    xuatmang(parr,n);
    // cau 26
    int A[100],n;
    int *parr= A;
    nhapmang(parr,n);
    bubblesort(parr,n);
    cout<<"mang sau khi sap xep la: ";
    xuatmang(parr,n);

    // cau 27
    int n;
    int *parr = mangdong(n);
    xuatmang(parr,n);


    // cau 28
    int n;
    cin>>n;
    int *parr = new int[n];
    giaiphongmang(parr);
    if(parr = nullptr){
        cout<<"giai phong mang thanh cong";
    }

    // cau 29
    int A[100],n;
    int *parr = n;
    nhapmang(parr,n);
    chuanhoamang(parr,n);
    cout<<"mang sau khi chuan hoa mang la: ";
    xuatmang(parr,n);

    // cau 30
    int A[100],B[100];
    int *parr = A;
    int *parr2 = B;
    int n,m;
    nhapmang(parr,n);
    duclomang(parr,n,parr2,m);
    cout<<"mang sau khi xoa la: ";
    xuatmang(parr2,m);
    // Phan B
    // cau 1
    int n;
    phanso *m = new phanso[100];
    nhapps(m,n);
    xuatps(m,n);
    // cau 2
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
    }
    phanso *maxPS = timmax(a,n);
    cout<<"phan tu lon nhat trong mang la: ";
    xuatps(maxPS);

    // cau 3
    int n;
    cin>>n;
    phanso *a= new phanso[100];
    for(int i =0;i <n;i++){
        nhapdiem(&a[i]);
    }
    phanso *minnimize = min_value(a,n);
    cout<<"phan so be nhat co trong mang la:";
    xuatdiem(minnimize);
    // cau 4
    int n;
    phanso *m = new phanso[100];
    nhapps(m,n);
    demphansoam(m,n);
    delete[] m;

    // cau 5
    int n;
    phanso *m = new phanso[100];
    nhapps(m,n);
    demphansoduong(m,n);
    delete[] m;
    //cau 6
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i< n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    cout<<"ma tran sau khi rut gon la: ";
    for(int i =0;i< n;i++){
        xuatps(&a[i]);
        cout<<" ";
    }
    cout<<endl;
    sapxeptangdan(a,n);
    cout<<"sau khi sap xep tang dan la: ";
    for(int i =0;i < n;i++){
        xuatps(&a[i]);
        cout<<" ";
    }
    // cau 7
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i< n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    cout<<"ma tran sau khi rut gon la: ";
    for(int i =0;i< n;i++){
        xuatps(&a[i]);
        cout<<" ";
    }
    cout<<endl;
    sapxeptangdan(a,n);
    cout<<"sau khi sap xep giam dan la: ";
    for(int i =0;i < n;i++){
        xuatps(&a[i]);
        cout<<" ";
    }
    // cau 8
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    phanso tongpt = tongcacphantu(a,n);
    cout<<"tong cac phan so trong mang la: ";
    xuatps(&tongpt);
    // cau 9
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    phanso tichpt = tichphanso(a,n);
    cout<<"tich cac phan so trong mang la: ";
    xuatps(&tichpt);
    // cau 10
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    phanso min_0 = sogan0(a,n);
    cout<<"phan so gan 0 nhat la";
    xuatps(&min_0);
    // cau 11
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    phanso maxtuso = tusolonnhat(a,n);
    cout<<"tu so lon nhat trong phan so la";
    xuatps(&maxtuso);
    // cau 12
    int n;
    cin>>n;
    phanso *a = new phanso[100];
    for(int i =0;i < n;i++){
        nhapps(&a[i]);
        rutgon(&a[i]);
    }
    phanso min_mauso = mausonhonhat(a,n);
    cout<<"mau so nho nhat trong phan so la";
    xuatps(&min_mauso);

    // II so phuc
    // cau 13
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    nhapnsophuc(a,n);
    cout<<"mang so phuc la: ";
    xuatsophuc(a,n);
    // cau 14
    int n;
    cin>>n;
    sothuc *a = new sothuc[100];
    nhapnsophuc(a,n);
    sothuc max_module = maxmodule(a,n);
    xuat1sothuc(&maxmodule);
    // cau 15
    int n;
    cin>>n;
    sothuc *a = new sothuc[100];
    nhapnsophuc(a,n);
    sothuc *min_value = minmodule(a,n);
    xuat1sothuc(&min_value);

    // cau 16
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i=0;i <n;i++){
        nhapsothuc(&a[i]);
    }
    sophuc tong = tongcacsothuc(a,n);
    xuat1sothuc(&tong);
    // cau 17
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i =0;i < n;i++){
        nhapnsophuc(&a[i]);
    }
    sophuc tich = tichsophuc(a,n);
    xuat1sothuc(&tich);
    // cau 18
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i =0;i < n;i++){
        nhapnsophuc(&a[i]);
    }
    int dem = phuctrentructhuc(a,n);
    cout<<"so phuc tren truc thuc la "<<<dem<<" so";
    //  caun 19
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i =0;i < n;i++){
        nhapnsophuc(&a[i]);
    }
    int dem = phuctrentrucao(a,n);
    cout<<"so phuc tren truc ao la "<<<dem<<" so";
    // cau 20
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i=0;i <n;i++){
        nhapsothuc(&a[i]);
    }
    sophuc gangoctoado = min_module(a,n);
    cout<<"so phuc gan goc toa do nhat la";
    xuat1sothuc(&gangoctoado);
    // cau 21
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i =0;i < n;i++){
        nhapnsophuc(&a[i]);
    }
    phanthuctangdan(a,n);
    cout<<"mang so phuc co thuc tang dan la : ";
    for(int i =0;i < n;i++){
        xuat1sothuc(&a[i]);
    }
    // cau 22
    int n;
    cin>>n;
    sophuc *a = new sophuc[100];
    for(int i =0;i < n;i++){
        nhapnsophuc(&a[i]);
    }
    phanaogiamdan(a,n);
    cout<<"mang so phuc co ao giam dan la : ";
    for(int i =0;i < n;i++){
        xuat1sothuc(&a[i]);
    }
    // III
    // cau 23
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    nhapdiem(a,n);
    xuatdiem(a,n);
    //cau 24
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i< n;i++){
        nhap1diem(&a[i]);
    }
    DIEM *max_diem = diemxanhat(a,n);
    xuat1diem(&max_diem);

    // cau 25
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i< n;i++){
        nhap1diem(&a[i]);
    }
    DIEM *min_diem = diemgannhat(a,n);
    xuat1diem(&min_diem);
    // cau 26
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    int res = demsodiemI(a,n);
    cout<<"so diem o phan tu I la "<<res<<" diem";

    // cau 27
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    int res = demsodiemII(a,n);
    cout<<"so diem o phan tu II la "<<res<<" diem";
    // cau 28
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    int res = demsodiemIII(a,n);
    cout<<"so diem o phan tu III la "<<res<<" diem";
    // cau 29
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    int res = demsodiemIV(a,n);
    cout<<"so diem o phan tu IV la "<<res<<" diem";
    // cau 30
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    DIEM *d1,*d2;
    timdiemgannhat(a,n,d1,d2);
    cout<<"2 diem gan nhat co trong mang la: ";
    xuatdiem(d1);
    cout<<" ";
    xuatdiem(d2);
    delete[] a;
    // cau 31
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    DIEM *d1,*d2;
    timdiemxanhat(a,n,d1,d2);
    cout<<"2 diem xa nhat co trong mang la: ";
    xuatdiem(d1);
    cout<<" ";
    xuatdiem(d2);
    delete[] a;

    //  cau 32
    int n;
    cin>>n;
    DIEM *a = new DIEM[100];
    for(int i =0;i < n;i++){
        nhap1diem(&a[i]);
    }
    khoangcachtangdan(a,n);
    for(int i = 0;i< n;i++){
        xuatdiem(&a[i]);
    }
    delete[] a;
    a = nullptr;
    // cau 33,34,35
    int n;
    cin>>n;
    sinhvien *a= new sinhvien[100];
    for(int i =0;i< n;i++){
        nhapthongtinSV(&a[i]);
    }
    for(int i =0;i < n;i++){
        double diemtb = diemtrungbinh(&a[i]);
        xuatthongtinsinhvien(&a[i]);
        cout<<"diem trung binh cua sinh vien thu "<<i+1<<" la "<<diemtb;
    }
    sinhvien max_diem = diemcaonhat(a,n);
    cout<<"sinh vien co diem trung binh cao nhat la ";
    xuatthongtinsinhvien(&max_diem);
    cout<<"Diem trung binh la "<<diemtrungbinh(&max_diem);
    return 0;       

}