// bài tập làm thêm
// câu 1
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){

    do{
        cout<<"nhap so phan tu";
        cin>>n;
        if(n <= 5 || n >= 100){
            cout<<"Gia  tri n khong hop le, vui long nhap lai";
        }
    }while(n<= 5 || n >= 100);
    cout<<"nhap cac phan tu"
    for(int i  =0;i< n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0; i < n;i++){
        cout<<A[i]<<" ";
    }
}
// câu 2
int timkiem(int A[],int n,int X){
    for(int i = 0;i < n;i++){
        if(A[i] == X){
            return i;
        }
    }
    return -1;
}

int main() {

    int A[100],n;
    nhapmang(A,n);
    xuatmang(A,n);

    int X;
    cout<<"nhap gia tri X can tim";
    cin>>X;

    int vitri = timkiem(A,n,X);
    if(vitri == -1){
        cout<<'khong ton tai so X xuat hien trong mang'<<endl;
    }
    else{
        cout<<"so "<<X<<" co trong mang o vi tri la "<<vitri<<endl;
    }
    return 0;
}

// câu 3
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cout<<"in ra so phan tu: ";
    cin>>n;
    cout<<"nhap cac phan tu: ";
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i =0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
void soam(int A[],int n){
    cout<<"cac phan tu am trong mang la: ";
    bool soam = false;
    for(int i = 0;i < n;i++){
        if(A[i] < 0){
            cout<<A[i]<<" ";
            soam = true;
        }
    }
    if(!soam){
        cout<<"khong co bat ki so am nao";
        cout<<endl;
    }
}
// câu 4
void sole(int A[],int n){
    cout<<"cac so le trong mang";
    bool sole = false;
    for(int i = 0;i < n;i++){
        if(A[i] % 2 != 0){
            cout<<A[i]<<" ";
            sole = true;
        }
    }
    if(!sole){
        cout<<"khong co bat ki so le nao trong mang";
    }
}
void sochan(int A[],int n){
    cout<<"cac so chan trong mang";
    bool sochan = false;
    for(int i =0;i < n;i++){
        if(A[i] %2 == 0){
            if(A[i] < 20){
                cout<<A[i]<<" ";
                sochan = true;
            }
        }
    }
    if(!sochan){
        cout<<"khong co so chan trong mang";
    }
}
int main() {

    int A[100],n;
    nhapmang(A,n);
    xuatmang(A,n);
    // câu3
    soam(A,n);
    // câu 4
    sole(A,n);
    // câu 5
    sochan(A,n);
    return 0;
}


// câu 6
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}

int timkiem(int A[],int n){
    return n-1;
}
// câu 7
bool songuyento(int n){
    if(n < 2) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int timkiem2(int A[],int n){
    for(int i = 0;i < n;i++){
        if(songuyento(A[i])){
            return i;
        }
    }
    return -1;

}
// câu 8
int sonhonhat(int A[],int n){
    int min_value = A[0];
    for(int i =0;i < n;i++){
        if(A[i] < min_value){
            min_value = A[i];
        }
    }
    return min_value;
}

// câu 9
int solonnhat(int A[],int n){
    int max_value = A[0];
    for(int i =0;i < n;i++){
        if(A[i] > max_value){
            max_value = A[i];
        }
    }
    return max_value;
}

// câu 10
int vitrisoduongnhonhat(int A[],int n){
    int min_duong = INT_MAX;
    for(int i = 0;i < n;i++){
        if(A[i] > 0 && A[i] < min_duong){
            min_duong = A[i];
            return i;
        }
    }
    return -1;
}
int vitrisoduonglonnhat(int A[],int n){
    int max_duong = INT_MIN;
    for(int i =0;i < n;i++){
        if(A[i] > 0 && A[i] > max_duong){
            max_duong = A[i];
            return i;
        }
    }
    return -1;
}
// câu 11
int socantim(int A[],int n,int X){
    for(int i =0;i < n;i++){
        if(A[i] == X){
            return i;
        }
    }
    return -1;
}
// câu 12
int timkiem3(int A[],int n){
    int value = sonhonhat(A,n);
    for(int i = 0;i  <n;i++){
        if(A[i] == value){
            return i;
        }
    }
    return -1; 
}
// câu 13
int timkiem4(int A[],int n){
    int value = solonnhat(A,n);
    for(int i = 0;i  <n;i++){
        if(A[i] == value){
            return i;
        }
    }
    return -1; 
}
// câu 14
int phantuxuathiennhieunhat(int A[],int n){
    int max_count =0;
    int phantu = A[0];
    for(int i =0;i < n;i++){
        int count = 0;
        for(int j = 0;j < n;j++){
            if(A[j]== A[i]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            phantu = A[i];
        }
    }
    return phantu;
}
//câu 15
void thutugiamdan(int A[],int n){
    for(int i =0;i <n;i++){
        for(int j = i+1;j <n;j++){
            if(A[i] < A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
// câu 16
bool sochan(int n){
    return n % 2 ==0;
}
void sochangiamdan(int A[],int n){
    for(int i =0;i <n;i++){
        if(sochan(A[i])){
        for(int j = i+1;j <n;j++){
            if(sochan(j)){
                if(A[i] < A[j]){
                    int temp = A[i];
                    A[i] = A[j];
                    A[j]= temp;
                }
            }
        }
    }
}
}
// câu 17
void chianhomamduong(int A[],int n){
    int B[100]; // chia nhom tam de sap xep
    int count = 0;

    for(int i =0 ;i < n;i++){
        if(A[i] < 0){
            B[count] = A[i];
            count++;
        }
    }
    for(int i = 0;i  <n;i++){
        if(A[i] >= 0){
            B[count]  =A[i];
            count++;
        }
    }
    for(int i  =0;i  <n;i++){
        A[i] = B[i];
    }
}
// câu 18
void chianhomamduong2(int A[],int n){
    int B[100]; 
    int count = 0;

    for(int i =0 ;i < n;i++){
        if(A[i] > 0){
            B[count] = A[i];
            count++;
        }
    }
    for(int i = 0;i  <n;i++){
        if(A[i] < 0){
            B[count]  =A[i];
            count++;
        }
    }
    for(int i =0;i < n;i++){
        if(A[i] == 0){
            B[count] = A[i];
            count++;
        }
    }
    for(int i  =0;i  <n;i++){
        A[i] = B[i];
    }
}
bool soduong(int n){
    return n > 0;
}
bool soam(int n){
    return n < 0;
}

void thutuduonggiamdan(int A[],int n){

    for(int i = 0; i < n;i++){
        if(soduong(A[i])){
            for(int j =i+1;j  <n;j++){
                if(soduong(A[j])){
                    if(A[i] <  A[j]){
                        int temp = A[i];
                        A[i] =  A[j];
                        A[j] = temp;
                    }
                }
            }
        }
    }
}
void thutuamtangdan(int A[],int n){
    for(int i =0;i < n;i++){
        if(soam(A[i])){
            for(int j  = i+1;j  <n;j++){
                if(soam(A[j])){
                    if(A[i] > A[j]){
                        int temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                    }
                }
            }
        }
    }
}
// câu 19
void xoaphantule(int A[],int n){
    int B[100];
    count = 0; // cho mang B de chi lay cac phan tu chan , bo het phan tu le

    for(int i = 0;i < n;i++){
        if(A[i] % 2 == 0){
            B[count] = A[i];
            count++;
        }
    }
    for(int i =0 ;i < n;i++){
        A[i]=  B[i];
    }
    n = count;
}
// câu 20
int solonnhat(int A[],int n){
    int max_value = A[0];
    for(int i =0 ; i<n;i++){
        if(A[i]>  max_value){
            max_value = A[i];
        }
    }
    return max_value;
}
int vitrimaxvalue(int A[],int n){
    int maxValue = solonnhat(A,n);
    for(int i = 0;i<n;i++){
        if(A[i] == maxValue){
            return i;
        }
    }
    return -1;
}
void xoamaxvalue(int A[],int &n,int k){
    if(k < 0 || k >= n) return 0;
    for(int i = k;i < n-1;i++){
        A[i]= A[i+1];
    }
    n--;
}
// câu 21
void phantumoi(int A[],int &n,int X){
    int B[100];
    int count =0;

    for(int i = 0; i <n;i++){
        if(A[i] >= X ){
            B[count] = A[i];
            count++;
        }
    }
    n = count;

    for(int i = 0;i < n;i++){
        A[i] = B[i];
    }

}
// câu 22
int vitriganXnhat(int A[],int &n,int X){
    int vitri = 0;
    int khoangcachmin = abs(A[0] - X);
    
    for(int i =0; i <n;i++){
        int khoangcach =abs(A[i] - X);
        if(khoangcach < khoangcachmin){
            khoangcachmin = khoangcach;
            vitri = i;
        }
    }
    return vitri;
}
void xoaphantu(int A[],int &n,int k){
    if(k < 0 || k > n) return;
    for(int i = k;i < n-1;i++){
        A[i]= A[i+1];
    }
    n--;
}
// câu 23
void chenso(int A[],int &n,int X){
    for(int i =n-1;i >= 0;i--){
        A[i] = A[i-1];
    }
    A[0] = X;
    n++;
}
// câu 24
int solonnhat(int A[],int n){
    int max_value = A[0];
    for(int i = 0;i < n;i++){
        if(A[i] > max_value){
            max_value = A[i];
        }
    }
    return max_value;
}
int timkiem(int A[],int n,int value){
    for(int i = 0; i < n;i++){
        if(A[i] == value){
            return i;
        }
    }
    return -1
}
void chensausolonnhat(int A[],int &n,int vitri,int X){
    for(int i =n-1;i >= vitri;i--){
        A[i+1] = A[i];
    }
    A[vitri + 1] = X;
    n++;
}
// câu 25
bool sochan(int n){
    return n % 2 ==0;
}
int timkiem(int A[],int n){
    for(int i =0;i  <n;i++){
        if(sochan(A[i])){
            return i;
        }
    }
    return -1;
}
void chensausochan(int A[],int &n,int vitri,int X){
    for(int i = n-1;i >= vitri;i--){
        A[i+1] = A[i];
    }
    A[vitri + 1] = X;
    n++;
}
// câu 26
bool songuyento(int n){
    if(n < 2) return false;
    for(int i =2;i*i < n;i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
int timkiem(int A[],int n){
    for(int i = 0;i < n;i++){
        if(songuyento(A[i])){
            return i;
        }
    }
    return -1;
}
void themso0(int A[],int &n,int vitri,int value){
    for(int i = n-1;i >= vitri;i--)[
        A[i+1] = A[i];
    ]
    A[vitri + 1] = value;
    n++;
}
int main(){
    int A[100],n;
    nhapmang(A,n);
    int vitri= timkiem(A,n);
    cout<<"phan tu cuoi day la"<<A[vitri]<<endl;
    cout<<"vi tri la "<<vitri;
    int vitri2 = timkiem2(A,n);
    if(vitri2 == -1){
        cout<<"khong ton tai so nguyen to trong mang";
    }
    else{
        cout<<"so nguyen to xuat hien trong mang la  "<<A[vitri2]<<" o vi tri "<<vitri2;
    }

    int vitri3 = timkiem3(A,n);
    cout<<"so nho nhat o vi tri "<<vitri3;
    int vitri4 = timkiem4(A,n);
    cout<,"so lon nhat o vi tri"<<vitri4;

    int vitri5 = vitrisoduongnhonhat(A,n);
    cout<<"so duong be nhat o vi tri "<<vitri5;
    int vitri6 = vitrisoduonglonnhat(A,n);
    cout<<"so duong lon nhat o vi tri "<<vitri6;

    int X;
    cout<<"so can tim la ";
    cin>>X;
    int vitri7 = socantim(A,n,X);
    cout<<"vi tri so can tim la "<<vitri7;
    
    
    int phantuxuathien = phantuxuathiennhieunhat(A,n);
    cout<<"phan tu xuat hien nhieu nhat la "<<phantuxuathien;


    thutugiamdan(A,n);
    cout<<"mang giam dan la: ";
    xuatmang(A,n);



    sochangiamdan(A,n);
    cout<<"so chan giam dan trong mang la ";
    xuatmang(A,n); // chỉ sáp xếp các sô chắn trong mảng , không thay đổi thứ tư của các phần tuewr khác

    chianhomamduong(A,n);
    cout<<"mang sau khi sap xep am duong la ";
    xuatmang(A,n);

    // b1: chia nhom trc
    chianhomamduong2(A,n);
    // b2: sap xep so duong giam dan
    thutuduonggiamdan(A,n);
    // b3: sap xep so am tang dan
    thutuamtangdan(A,n);
    
    cout<<"mang sau khi sap xep la: ";
    xuatmang(A,n);


    xoaphantule(A,n);
    cout<<"mang sau khi loai bo phan tu le la: ";
    xuatmang(A,n);


    int vitrimax = vitrimaxvalue(A,n);
    if(vitrimax != -1){
        cout << "Gia tri lon nhat: " << A[vitrimax] << " tai vi tri " << vitrimax << endl;
        xoataivitri(A, n, vitrimax);
    }
    cout<<"mang sau khi xoa max la: ";
    xuatmang(A,n);


    int X;
    cout<<"nhap phan tu X: ";
    cin>>X;

    phantumoi(A,n,X);
    cout<<"mang moi la";
    xuatmang(A,n);

    int X;
    cout<<"nhap phan tu X :";
    cin>>X;

    int vitriganX = vitriganXnhat(A,n,X);
    int xoavitriganx = xoaphantu(A,n,vitriganX);

    cout<<"mang sau khi xoa la:";
    xuatmang(A,n);


    int X;
    cin>>X;
    chenso(A,n,X);
    cout<<"mang sau hki chen la: ";
    xuatmang(A,n);


    int X;
    cin>>X;
    int max_value = solonnhat(A,n);
    int vitri = timkiem(A,n,max_value);
    chensausolonnhat(A,n,vitri,X);

    cout<<"mang sau khi chen la: ";
    xuatmang(A,n);
    



    int X;
    cin>>X;
    int even_num = timkiem(A,n);
    chensausochan(A,n,even_num,X);
    cout<<"mang sau khi chen la: ";
    xuatmang(A,n);



    int i =0;
    while(i < n){
        if(songuyento(A[i])){
            int value = 0;
            themso0(A,n,i,value);
            i+=2;
        }
        else{
            i++;
        }
    }
    cout<<"mang sau khi them la:";
    xuatmang(A,n);
    return 0;
}