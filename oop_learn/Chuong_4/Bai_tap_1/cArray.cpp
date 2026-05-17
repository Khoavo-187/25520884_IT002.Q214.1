#include <bits/stdc++.h>
#include "cArray.h"

using namespace std;


// constructor

cArray::cArray(){
    arr = nullptr;
    n = 0;
}
cArray::~cArray(){
    delete[] arr; // xoa di do arr la con tro cho phep cap phat dong mang nen phai xoa de tranh truong hop tran bo dem
}

void cArray::nhapmang(){
    cout<<"nhap so luong phan tu cho n: ";
    cin>>n;
    delete[] arr;
    arr = new int[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
}

void cArray::xuatmang(){
    if(n == 0){
        cout<<"mang rong";
        return;
    }
    cout<<"mang hien tai la: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}

void cArray::taongaunhien(int soluong){
    n = soluong; // ta cho san 1 so luong n phan tu bat ki sau do tao random cho cac phan tu khac
    int min = 0;
    int max = 100;
    delete[] arr;
    arr = new int[n];
    srand((unsigned int)time(nullptr));
    for(int i = 0;i < n;i++){
        arr[i] = min + rand() % (max - min + 1);
    }
    cout<<"Da tao mang co so luong phan tu la: " <<n<<" phan tu"<<endl;
}

int cArray::demxuathien(int x){
    int dem = 0;
    delete[] arr;
    for(int i = 0;i < n;i++){
        if(arr[i] == x){
            dem++;
        }
    }
    return dem;
}

bool cArray::kiemtratangdan(){
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] > arr[j]){
                return false;
            }
        }
    }
    return true;
}

int cArray::min_le(){
    int min_val = INT_MAX;
    for(int i = 0;i < n;i++){
        if(arr[i] % 2 != 0){
            if(min_val > arr[i]){
                min_val = arr[i];
            }
        }
    }
    return min_val;
}
void cArray::tangdan(){
    sort(arr,arr + n);
}