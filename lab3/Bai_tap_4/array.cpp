#include <bits/stdc++.h>
#include "array.h"

using namespace std;


bool songuyeno(int n){
    if(n == 0 || n == 1) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
// tao constructor cho mang 1 chieu
cArray::cArray(){
    n = 0;
    arr =  nullptr;
}
cArray::cArray(int n){
    this->n = n;
    arr = new int[n];
    for(int i = 0;i < n;i++){
        arr[i] = 0;
    }
}

cArray::~cArray(){
    delete[] arr;
}

void cArray::nhap(){
    cout<<"nhap so luong so nguyen muon nhap vao: "; cin>>n;
    delete[] arr; // xoa truoc khi tao mang moi do mang cu doi khi van con trong bo nho dem
    arr = new int[n];
 
    for(int i = 0;i < n;i++){
        cout<<"nhap so nguyen thu "<<i + 1<<" la: ";
        cin>>arr[i];
    }
}
void cArray::xuat(){
    cout<<"mang so nguyen la: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}

void cArray::mangngaunhien(){
    cout<<"nhap so luong so nguyen muon khoi tao ngau nhien: "; cin>>n;
    delete[] arr;
    arr = new int[n];
    srand(time(NULL)); // su dung thoi gian thuc de thay doi so sau moi lan chay chuong trinh
    for(int i = 0;i < n;i++){
        arr[i] = rand() % 100;
        // tao so ngau nhien tu 0 - 99
        cout<<arr[i]<<" ";
    }
}

int cArray::dem(int x){
    int count = 0;
    for(int i =0;i < n;i++){
        if(arr[i] == x){
            count++;
        }
    }
    return count;
}

bool cArray::kiemtratangdan(){
    if(n == 0) return false;
    if(n == 1) return true; // mac dinh neu co 1 phan tu thi duoc xem la tang dan
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] > arr[j]){
                return false; // tra ve sai neu gia tri ban dau lon hon gia tri tiep theo
            }
        }
    }
    return true;
}

int cArray::min_value_le(){
    int min_val = INT_MAX;
    for(int i =0;i < n;i++){
        if(arr[i] % 2 != 0){
            // chi xet cac gia tri la so le
            if(arr[i] < min_val){
                min_val = arr[i];
            }
        }
    }
    return min_val;
}

int cArray::max_songuyento(){
    int max_val = INT_MIN;
    for(int i =0;i  < n;i++){
        if(songuyeno(arr[i])){
            // chi nhan cac truong hop la so nguyen to
            if(arr[i] > max_val){
                max_val = arr[i];
            }
        }
    }
    return max_val;
}

void cArray::mergedtang(int l,int mid,int r){
    // doi voi merged sort ta dung ki thuat chia doi mang lien tuc de doi chieu 
    // so sanh tu l -> mid va mid + 1 -> r
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // tao ra cac mang phu de so sanh doi chieu
    vector<int> L(n1),R(n2); 
    // bat dau gan gia tri tuong ung cua mang ban dau chia doi qua cac mang con moi
    for(int i = 0;i < n1;i++){
        L[i]= arr[l + i];
    }
    for(int j =0;j < n2;j++){
        R[j] = arr[mid + j +1];
    }
    int i = 0,j = 0,k = l;
    // bat dau so sanh giua cac phan tu va gop chung lai thanh mang hoan  chinh
    while(i < n1 && j < n2){ // so sanh giua 2 mang l -> mid va mid +1 -> r
        if(L[i] <= R[j]) arr[k++] = L[i++]; // gan gai tri moi cho arr bat dau voi phan tu left
        else arr[k++] = R[j++]; // so sanh tang dan
    }
    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}
// ham giam dan
void cArray::mergedgiam(int l,int mid,int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> L(n1),R(n2);
    for(int i = 0;i < n1;i++){
        L[i]= arr[l + i]; 
    }
    for(int j = 0;j < n2;j++){
        R[j] = arr[mid + j +1];
    }

    int i = 0,j = 0,k = l;
    while(i < n1 && j < n2){
        if(L[i] >= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while(i < n1) arr[k++]= L[i++];
    while(j < n2) arr[k++] = R[j++];
}
void cArray::mergedSorttang(int l,int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergedSorttang(l,m);
        mergedSorttang(m + 1,r);
        mergedtang(l,m,r);
    }
    // su dung de quy de tiep tuc so sanh doic chieu giua 2 mang
}

void cArray::saptangdan(){
    if(n > 0) mergedSorttang(0,n -1); // luon gan gia tri ben trai = 0 va gia tri do dai length cua mang   
}
void cArray::mergedSortgiam(int l,int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergedSortgiam(l,m);
        mergedSortgiam(m + 1,r);
        mergedgiam(l,m,r);
    }
}
void cArray::sapgiamdan(){
    if(n > 0) mergedSortgiam(0,n - 1);
}