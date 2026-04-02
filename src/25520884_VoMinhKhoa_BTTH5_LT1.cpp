#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// chu de 1
// cau 1

void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
void soluong(int A[],int n){
    int soduong = 0;
    int soam= 0;
    int bang0 =0;
    for(int i = 0;i < n;i++){
        if(A[i] > 0){
            soduong++;
        }
        else if(A[i] < 0){
            soam++;
        }
        else{
            bang0++;
        }
    }
    cout<<"so duong co trong mang la "<<soduong<<" so"<<endl;
    cout<<"so am co trong mang la "<<soam<<" so"<<endl;
    cout<<"so bang 0 co trong mang la "<<bang0<<" so"<<endl;
}

// cau 2
bool sochan(int n){
    return n % 2 == 0;
}
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
int trungbinhcong(int A[],int n){
    int index = 0;
    int total = 0;
    for(int i = 0;i < n;i++){
        if(sochan(A[i])){
            index++;
            total += A[i] / index;
        }
    }
    return total;
}
// cau 3
bool sole(int n){
    return n % 2 != 0;
}
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
int trungbinhcongle(int A[],int n){
    int index = 0;
    int total = 0;
    for(int i = 0;i < n;i++){
        if(sole(A[i])){
            index++;
            total += A[i] / index;
        }
    }
    return total;
}

// cau 4
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
void xuathien1lan(int A[],int n){
    for(int i =0;i < n;i++){
        int count = 1;
        for(int j =0;j < n;j++){
        if(j != i && A[i] == A[j]){
            count++;
        }
    }
        if(count == 1){
            bool dain = false;
            for(int k = 0;k < i;k++){
                if(A[k] == A[i])
                {
                    dain = true;
                    break;
                }

            }
            if(!dain){
                cout<<A[i]<<" ";
            }
        }
    }
}
// cau 5
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
void xuathiennhieunhat(int A[],int n){
    int max_count = 0;
    int result = A[0];
    for(int i =0;i < n;i++){
        int count = 0;
        for(int j = 0;j < n;j++){
            if(A[i] == A[j]){
            count++;
        }
    }
    if(count > max_count){
        max_count = count;
        result = A[i];
    }

    }
    cout<<"so xuat hien nhieu nhat co trong mang la: "<<result;
}
// cau 6
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n,i++){
        cin>>A[i];
    }
}
int tongphantu(int A[],int n){
    int total = 0;
    for(int i =0;i < n;i++){
        if(A[i] % 3 == 0 && A[i] % 5 != 0){
            total += A[i];
        }
    }
    return total;
}
// chu de 2
// cau 1
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void daonguocmang(int A[],int n){
    int B[100];
    int count = 0;

    for(int i = n-1;i >= 0;i--){
        B[count] = A[i];
        count++;
    }

    cout<<"mang dao nguoc la ";
    for(int i =0;i < count;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
}

// cau 2
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void dichtraimang(int A[],int n){
    int temp = A[0];
    for(int i = 0;i < n-1;i++){
        A[i] = A[i+1];
    }
    A[n-1] = temp;
}

void dichtraikbuoc(int A[],int n,int k){
    int temp[n];
    k = k % 5;

    for(int i = 0;i< n;i++){
        temp[i] = A[(i + k) % n];
    }
    for(int i =0;i < n;i++){
        A[i] = temp[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}

// cau 3
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void dichphaimang(int A[],int n){
    int temp = A[n-1];
    for(int i = n-1;i >= 1;i--){
        A[i] = A[i-1];
    }
    A[0] = temp;
}

void dichphaikbuoc(int A[],int n,int k){
    int temp[n];
    k = k % 5;

    for(int i = n-1;i>= 0;i--){
        temp[i] = A[(i + k) % n];
    }
    for(int i =n-1;i >= 0;i--){
        A[i] = temp[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
// cau 4
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}

bool soam(int n){
    return n < 0;
}

void xoasoam(int A[],int &n){
    int j =0;
    for(int i = 0;i < n;i++){
    if(!soam(A[i])){
        A[j] = A[i];
        j++;
    }
    }
    n = j;
    cout<<"tat ca con lai "<<n<<" so co trong mang"<<endl;
}

// cau 5

void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}

void chensochan(int A[],int &n){
    int i =0;
    while(i  <n){
        if(A[i] % 2 == 0){
            for(int j = n;j > i;j++){
                A[j] = A[j-1];
            }
            A[i+1] = 0;
            n++;
            i += 2;
        }
        else{
            i++;
        }
    }
}
// cau 6
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
bool soam(int n){
    return n < 0;
}

void chuyentuyetdoi(int A[],int n){
    for(int i =0;i < n;i++){
        if(soam(A[i])){
            A[i] = -A[i];
        }
    }
}

// chu de 3
// cau 1
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 

void xuatdaycon(int A[],int n){
    int max_sum = A[0];
    int current_sum = A[0];
    int temp  = 0;
    int start = 0;
    int end = 0;
    for(int i =0;i < n;i++){
        if(current_sum + A[i] < A[i]){
            current_sum = A[i];
            temp = i;
        }
        else{
            current_sum += A[i];
        }

        if(current_sum > max_sum){
            max_sum = current_sum;
            start = temp;
            end = i;
        }
    }
    cout<<"day con co trong mang co tong lon nhat la : ";
    for(int i = start;i <= end;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<"tong cua no se la: "<<max_sum;
}

// cau 2
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 
void xuatdaycon(int A[],int n){
    int curr = 0;
    int max = 0;
    int start = -1;
    int end = -1;
    int temp = -1;

    for(int i =1;i < n;i++){
        if(A[i]>0){
            if(curr == 0){
                temp = i;
            }
            curr++;
            if(curr > max){
                max = curr;
                start = temp;
                end = i;
            }
        }
        else{
            curr = 0;
        }
    }
    cout<<"day con co so duong dai nhat la ";
    for(int i =start;i <= end;i++){
        cout<<A[i]<<" ";
    }
}

//cau 4
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 

bool zigzagreal(int A[],int n){
    for(int i =0;i < n-1;i++){
        if(n % 2 == 0){
            if(A[i] <= A[i+1]){
                cout<<"loi vi tri tai "<<i<<endl;
                return false;
            }
            else{
                if(A[i] >= A[i+1] ){
                    cout<<"loi vi tri tai"<<i<<endl;
                    return false;
                }

            }    
        }
        return true;
    }
}
void mangzigzag(int A[],int n){
    if(mangzigzag(A,n)){
        cout<<"dung day la mang zigzag";
    }
    else{
        cout<<"day khong phai la mang zigzag";
    }
}

// cau 5
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 
bool  sole(int n){
    return n % 2 != 0;
}

void mangsole(int A[],int n){
    bool sochan = false;
    for(int i=0;i < n;i++){
        if(!sole(A[i])){
            cout<<"xuat hien so chan trong mang: ";
            sochan  =true;
            break;
        }
    }
    if(!sochan){
        cout<<"day la mang toan so le";
    }
}

// cau 6
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i =0;i < n;i++){
        cin>>A[i];
    }
} 

// csc

void capsocong(int A[],int n){
    int congsai = A[1] - A[0];
    bool csc = true;
    for(int  i = 1;i < n-1;i++){
        int hieu = A[i+1] - A[i];
        if(hieu != congsai){
            cout<<"day khong phai la mang cap so cong"
            csc = false;
            break;
        }
    }
    if(csc) {
        cout<<"day la mang cap so cong ";
    }
}
void capsonhan(int A[],int n){
    double congboi =(double) A[1] / A[0];

    bool csn = true;
    for(int i =1;i < n-1;i++){
        double thuong =(double) A[i+1] / A[i];
        if(congboi != thuong){
            cout<<"day khong phai la mang cap so nhan";
            csn = false;
            break;
        }
    }
    if(csn){
        cout<<"day la mang cap so nhan";
    }
}

// chu de4
// cau 1
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i<  n;i++){
        cout<<A[i]<<" ";
    }
}
bool kiemtraptu(int A[],int n,int x){
    for(int i =0;i < n;i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}

void mangmegre(int A[],int n,int B[],int m,int C[],int &k){
    k = 0;
    for(int i = 0;i < n;i++){
        C[k] = A[i];
        k++;
    }
    for(int i = 0;i < m;i++){
        if(!kiemtraptu(C,k,B[i])){
            C[k] = B[i];
            k++;
        }
    }
}
// cau 2
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i<  n;i++){
        cout<<A[i]<<" ";
    }
}
// mang sap xep tng dan
void manggopsapxep(int A[],int n,int B[],int m,int C[],int &k ){
    int i = n;
    int j = m;
    k = m + n;
    int idx = k -1;
    while(i > 0 && j > 0){
        if(A[i-1] < B[j-1]){
            C[idx] = B[j-1];
            j--;
        }
        else{
            C[idx] = A[i-1];
            i--;
        }
        idx--;
    }

    while(j >= 0){
        C[idx] = B[j-1];
        idx--;
        j--;
    }
    while(i>=0){
        C[idx] = A[i-1];
        idx--;
        i--;
    }
}

// mang da sap xep theo tang dan
bool mangsapxep(int A[],int n){
    for(int i =0;i<  n;i++){
        if(A[i] > A[i+1]){
            return false;
        }
    }
    return true;
}

// sap xep lai mang
void sapxep(int A[],int n){
    sort(A,A+n);
}


// cau3
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
bool sosanh(int A[],int n,int B[],int m){
    if(n != m){
        return false;
    }

    for(int i = 0;i< n;i++){
        if(A[i] != B[i]){
            return false;
            break;
        }
    }
    return true;
}

//  cau 4
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}

void phantuchung(int A[],int n,int B[],int m){
    for(int i =0;i< n;i++){
        for(int j =0;j < m;j++){
            if(A[i] == B[i]){
                cout<<"phan tu chung co trong ca 2 mang la: "<<A[i]<<" ";
                break;
            }
        }
    }
}

// cau 5
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
bool kiemtraso(int A[],int k,int x){
    for(int i =0;i <k;i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}
void trunglap(int A[],int &n){
    int B[100];
    int count = 0;
    for(int i = 0;i < n;i++){
        if(!kiemtraso(B,count,A[i])){
            B[count] = A[i];
            count++;
        }
    }

    for(int i = 0;i < count;i++){
        A[i] = B[i];
    }
    n = count;
}


// cau 6
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
bool sochan(int n){
    return n % 2 == 0;
}
bool sole(int n){
    return n %2 != 0;
}

void mangdanxen(int A[], int n){
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){  
            if(sochan(A[i])){
            } else {
                bool isfound = false;
                for(int j = i + 1; j < n; j++){
                    if(sochan(A[j])){
                        swap(A[i], A[j]);
                        isfound = true;
                        break;
                    }
                }
            }
        } else {  
            if(sole(A[i])){
            } else {
                bool isfound = false;
                for(int j = i + 1; j < n; j++){
                    if(sole(A[j])){
                        swap(A[i], A[j]);
                        isfound = true;
                        break;
                    }
                }
            }
        }
    }
}
void xuatmang(int A[],int n){
    for(int i=0;i < n;i++){
        cout<A[i]<<" ";
    }
}

// cau 1

void nhapmang(int A[],int &n){
    for(int i =0;i <n;i++){
        cin>>A[i];
    }
}

double diemtrungbinh(int A[],int n){
    double tong = 0;
    for(int i = 0;i < n;i++){
        tong += A[i];
    }   

    return tong / n;
}

// cau2 
void nhapmang(int A[],int &n){
    for(int i =0;i <n;i++){
        cin>>A[i];
    }
}

double khoangcachlonnhat(int A[],int n){
    double count = abs(A[0] - A[1]);
    for(int i =0;i < n-1;i++){
        if(count < abs(A[i] = A[i-1])){
            count = abs(A[i] - A[i+1]);
        }
    }
    return count;
}
//cau 3
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}

double doanhthu(int A[],int n){
    int tong = 0;
    for(int i = 0;i < n;i++){
        tong += A[i];
    }
    return tong / n;
}

// cau 4
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}
void doanhthulonnhat(int A[],int n){
    int max_value = A[0];

    for(int i = 0;i< n;i++){
        if(A[i]  > max_value){
            max_value = A[i];
        }
    }
    cout<<"doanh thu lon nhat co trong mang la : "<<max_value;
}
void doanhthunhonhat(int A[],int n){
    int min_value = A[0];

    for(int i = 0;i< n;i++){
        if(A[i]  < min_value){
            min_value = A[i];
        }
    }
    cout<<"doanh thu nho nhat co trong mang la : "<<min_value;
}

// cau5
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}

void giasanpham(int A[],int n,int x){
    for(int i = 0;i < n;i++){
        if(A[i] > x){
            cout<<A[i]<<" ";
        }
    }
}

// chu de 6
// cau 1
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}
bool songuyento(int n){
    if(n < 2) return false;
    for(int i =2;i* i < n;i++){
        if(n % 2 == 0){
            return false;
        }
    }
    return true;
}
void demsoluong(int A[],int n){
    int total = 0;
    for(int i = 0;i < n;i++){
        if(songuyento(A[i])){
            total++;
        }
    }
    cout<<"so luong so nguyen to la: "<<total;
}

// cau 2
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}
bool sohoanhao(int n){
    int total = 0;
    for(int i = 0;i*i < n;i++){
        if(n % i == 0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    total -= n;
    if(total == n){
        return true;
    }
    else{
        return false;
    }
}
void timphantu(int A[],int n){
    int index = 0;
    for(int i = 0;i < n;i++){
        if(sohoanhao(A[i])){
            index = i;
            cout<<"phan tu hoan hao trong mang la "<<A[i]<<" o vi tri la : "<<i;
        }
    }
}


// cau 3
void nhapmang(int A[],int &n){
    cin>>n;

    for(int i =0;i< n;i++){
        cin>>A[i];
    }
}
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void timphantufibonacci(int A[],int n,int value){
    for(int i = 0;i < n;i++){
        value = fibonacci(A[i]);
    }
    int index = 0;
    for(int i = 0;i < n;i++){
        if(A[i] == value){
            index = i;
            cout<<"phan tu fibonacci trong mang la "<<A[i]<<" o vi tri la : "<<i;
        }
    }
}

// cau 4 
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
bool daonguoc(int n){
    int sodu = 0;
    for(int i =n;i >= 1;i /= 10){
        sodu *= 10;
        sodu += i % 10;
    }
    if(sodu == n){
        return true;
    }
    else{
        return false;
    }

}
bool kiemtra(int A[],int n){
    for(int i = 0;i< n;i++){
        if(!daonguoc(A[i])){
            return false;
        }
    }
    return true;
}

// cau 5
void uocso(int n){
    int B[100];
    int count = 0;
    for(int i = 1;i*i <= n;i++){
        if(n % i == 0){
            B[count] = i;
            count++;
            if(i != n/i){
                B[count]= n/i;
                count++;
            }
        } 
    }
    for(int i = 0;i < count;i++){
        cout<<B[i]<<" ";
    }

}
int main() {
    // cau1 
    int A[100],n;
    nhapmang(A,n);
    soluong(A,n);

    //cau2 
    int A[100],n;
    nhapmang(A,n);
    cout<<"trung binh cong cac so chan co trong mang la "<<trungbinhcong(A,n);

    // cau 3
    int A[100],n;
    nhapmang(A,n);
    cout<<"trung binh cong cac so le co trong mang la "<<trungbinhcongle(A,n);

    // cau 4
    int A[100],n;

    cout<<"so phan tu xuat hien dung 1 lan trong mang la: "<<xuathien1lan(A,n);

    // cau 5
    int A[100],n;

    nhapmang(A,n);
    xuathiennhieunhat(A,n);

    // cau 6
    int A[100],n;
    nhapmang(A,n);

    cout<<"tong cac phan tu chia het cho3 nhung ko chia het cho5 la "<<tongphantu(A,n);

    // chu de 2
    // cau 1

    int A[100],n;

    nhapmang(A,n);

    daonguocmang(A,n);

    // cau 2
    int A[100],n;
    nhapmang(A,n);
    dichtrai1buoc(A,n);
    cout<<"dich trai 1 buoc la :";
    xuatmang(A,n);
    cout<<endl;

    int k;
    cout<<"nhap so buoc can dich: "; cin>>k;
    dichkbuoc(A,n,k);
    cout<<"dich trai k buoc la: ";
    xuatmang(A,n);

    // cau 3
    int A[100],n;
    nhapmang(A,n);
    dichphaimang(A,n);
    cout<<"dich phai 1 buoc la :";
    xuatmang(A,n);
    cout<<endl;

    int k;
    cout<<"nhap so buoc can dich: "; cin>>k;
    dichphaikbuoc(A,n,k);
    cout<<"dich phai k buoc la: ";
    xuatmang(A,n);

    // cau 4
    int A[100],n;
    nhapmang(A,n);

    xoasoam(A,n);
    cout<<"mang sau khi xoa phan tu am la "<<xuatmang(A,n);

    // cau 5
    int A[100],n;
    nhapmang(A,n);

    chensochan(A,n);
    cout<<"mang sau khi them la ";
    xuatmang(A,n);

    // cau 6
    int A[100],n;

    nhapmang(A,n);

    chuyentuyetdoi(A,n);
    xuatmang(A,n);

    // chu de 3
    // cau 1
    int A[100],n;

    nhapmang(A,n);

    xuatdaycon(A,n);

    // cau 2
    int A[100],n;
    nhapmang(A,n);
    xuatdaycon(A,n);

    // cau 3
    int A[100],n;
    cin>>n;

    int dp[100];
    int trace[100];
    for(int i =0;i < n;i++){
        cin>>A[i];
        dp[i] = 1;
        trace[i] =-1;
    }
    int lis = 1;
    int last = 0;

    for(int i= 0;i < n;i++){
        for(int j =0;j < i;j++){
            if(A[j] < A[i] && dp[j] + 1 > dp[i]){
                dp[i] = dp[j] + 1;
                trace[i] = j;
            }
         }
         if(dp[i] > lis){
            lis = dp[i];
            last = i;
         }
    }
    int new_list[100];
    int k =0;
    while(last != -1){
        new_list[k++] = A[last];
        last = trace[last];
    }    
    cout<<"mang tang dan theo LIS la: ";
    for(int i = k-1;i >= 0;i--){
        cout<<new_list[i]<<" ";
    }

    // cau 4
    int A[100],n;
    nhapmang(A,n);
    mangzigzag(A,n);


    // cau 5
    int A[100],n;

    nhapmang(A,n);
    mangsole(A,n);

    // cau 6
    int A[100],n;
    nhapmang(A,n);
    capsocong(A,n);
    capsonhan(A,n);

    // chu de 4
    // cau 1
    int A[100],B[100],C[100];
    int n,m,k;

    cout<<"nhap thong tin ve mang 1";
    nhapmang(A,n);
    cout<<endl;
    cout<<"nhap thong tin ve mang 2";
    nhapmang(B,m);
    cout<<endl;

    mangmegre(A,n,B,m,C,k);

    cout<<"mang gop C la: ";
    xuatmang(C,k);
    // cau 2
    int A[100],B[100],C[100];
    int n,m,k;

    cout<<"nhap mang thu1: ";
    nhapmang(A,n);

    if(!mangsapxep(A,n)){
        cout<<"mang chua sap xepo, dang tu dong sap xep";
        sapxep(A,n);
        cout<<endl;
        cout<<"mang sau khi sap xep al: ";
        xuatmang(A,n);
    }
    else{
        cout<<"mang da sap xep san";
        cout<<endl;
    }
    cout<<endl;

    cout<<"nhap mang thu 2: ";
    nhapmang(B,m);
    if(!mangsapxep(B,m)){
        cout<<"mang chua sap xepo, dang tu dong sap xep";
        sapxep(B,m);
        cout<<endl;
        cout<<"mang sau khi sap xep la: ";
        xuatmang(B,m);
    }
    else{
        cout<<"mang da sap xep san";
        cout<<endl;
    }

    

    cout<<"mang da sap xep theo mang tang dan la: ";
    manggopsapxep(A,n,B,m,C,k);

    xuatmang(C,k);

    // cau 3

    int A[100],B[100];
    int n,m;

    if(sosanh(A,n,B,m)){
        cout<<" day la mang giong nhau";
    }
    else{
        cout<<"day khong phai la mang giong nhau"
    }

    // cau 4
    int A[100],B[100];
    int n,m;

    cout<<"nhap mang cho ptu 1: ";
    nhapmang(A,n);
    cout<<endl;
    cout<<"nhap cho mang 2: ";
    nhapmang(B,m);
    cout<<endl;

    phantuchung(A,n,B,m);


    // cau 5

    int A[100],n;
    nhapmang(A,n);

    trunglap(A,n);
    cout<<"mang sau khi loai bo so trung la: ";
    xuatmang(A,n);

    // cau 6
    int A[100],n;
    nhapmang(A,n);

    mangdanxen(A,n);
    cout<<"mang hien tai sau khi sap xep la: ";
    xuatmang(A,n);

    // chu de 5
    // cau 1
    int A[100],n;
    cout<<"nhap mang diem cho hoc sinh: ";
    nhapmang(A,n);
    cout<<endl;

    cout<<"diem trung binh cua hoc sinh do al: "<<diemtrungbinh(A,n);


    // cau 2
    int A[100],n;
    nhapmang(A,n);

    cout<<"khoang cach lon nhat cua 2 nhiet do trong mang la: "<<khoangcachlonnhat(A,n);


    // cau  3
    int A[100],n;
    nhapmang(A,n);

    cout<<"trung bnh tong doanh thu sau 7 ngay la: "<<doanhthu(A,n);

    // cau 4
    int A[100],n;
    nhapmang(A,n);

    doanhthulonnhat(A,n);
    cout<<endl;
    doanhthunhonhat(A,n);

    // cau 5
    int A[100],n;
    nhapmang(A,n);

    int x;
    cout<<"nhap gia san pham tieu chuan la: "; cin>>x;

    cout<<"nhung gia tren gia tieu chuan la ";
    giasanpham(A,n);

    // chu de 6
    // cau 1
    int A[100],n;
    demsoluong(A,n);
    // cau 2
    int A[100],n;
    nhapmang(A,n);

    timphantu(A,n);

    // cau 3
    int A[100],n;
    nhapmang(A,n);
    timphantufibonacci(A,n);

    // cau 4
    int A[100],n;
    nhapmang(A,n);
    if(kiemtra(A,n)){
        cout<<"day la so dao nguoc";
    }
    else{
        cout<<"day khong phai la so dao nguoc";
    }

    // cau 5
    int n;
    cin>>n;
    uocso(n);
    return 0;       
}