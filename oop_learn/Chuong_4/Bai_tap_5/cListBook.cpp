#include <bits/stdc++.h>
#include "cBook.h"
#include "cListBook.h"

using namespace std;

cListBook::cListBook(){
    n = 0;
    arr = NULL;
}
cListBook::cListBook(int n){
    this->n = n;
    arr = new cBook[n];
    for(int i = 0;i < n;i++){
        arr[i].nhap();
    }
}
// copy constructor
cListBook::cListBook(const cListBook& other){
    n = other.n;
    arr = new cBook[n];
    for(int i = 0;i < n;i++){
        arr[i] = other.arr[i];
    }
}
cListBook::~cListBook(){
    delete[] arr;
}

void cListBook::nhapds(){
    cout<<"nhap so luong sach: "; cin>>n;
    delete[] arr;
    arr = new cBook[n];
    for(int i = 0;i < n;i++){
        cout<<"nhap sach thu "<<i + 1<<endl;
        arr[i].nhap();
    }
}
void cListBook::xuatds(){
    cout<<"thong tin sach: "<<endl;
    for(int i = 0;i < n;i++){
        cout<<"sach thu "<<i + 1<<" :";
        arr[i].xuat();
        cout<<endl;
    }
}
// lenh tra cuu theo ma duoc cho
cBook* cListBook::tracuu(string ma){
    for(int i = 0;i < n;i++){
        if(arr[i].getID() == ma){
            return &arr[i];
        }
    }
     return nullptr;
}
// cap nhat
void cListBook::capnhat(string ma){
    cBook* new_book = tracuu(ma);
    if(!new_book){
        cout<<"khong tim thay book yeu cau";
    }
        cout<<"thong tin hien tai: "; new_book->xuat();
        cout<<"nhap lai thong tin moi: "; new_book->nhap();
        cout<<"ten sau khi cap nhat cua sach la: "<<new_book->getName()<<endl;
        cout<<"cap nhat thanh cong";
}
cBook cListBook::min_year(int x){
    if(n == 0){
        cout<<"mang rong";
        return cBook();
    }
    // cho x la nam hien tai
    int close_year = abs(arr[0].getYear() - x); // lay nam cua sach thu 1 tru nam 2026
    cBook final_year = arr[0];
    for(int i = 0;i < n;i++){
        if(abs(arr[i].getYear() - x) < close_year){
            close_year = abs(arr[i].getYear() - x);
            final_year = arr[i];
        }
    }
    return final_year;

}