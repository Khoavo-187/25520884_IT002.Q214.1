#include <bits/stdc++.h>
#include "cListNhanVien.h"
#include "cNhanVienVP.h"
using namespace std;

cListNhanVien::cListNhanVien(){
    n = 0;
    arr = nullptr; // Khoi tao mac dinh khong co bat ki nhan vien nao
}

cListNhanVien::cListNhanVien(int n){
    this->n = n;
    arr = new cNhanVienVP[n];
    for(int i = 0;i < n;i++){
        arr[i].nhap(); // nhap vao tuong ung voi so luong nhan vien nhap vao
    }
}
cListNhanVien::cListNhanVien(const cListNhanVien& other){
    n = other.n;
    arr = new cNhanVienVP[n];
    for(int i =0;i < n;i++){
        arr[i] = other.arr[i]; // copy object sang mang moi
    }
}
cListNhanVien::~cListNhanVien(){
    delete[] arr;
}

void cListNhanVien::nhap(){
    cout<<"nhap so luong nhan vien muon nhap vao: "; cin>>n;
    delete[] arr;
    arr = new cNhanVienVP[n];
    for(int i = 0;i < n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i +1<<" la: "<<endl;
        arr[i].nhap();
    }
}

void cListNhanVien::xuat(){
    cout<<"Thong tin cua "<<n<<" nhan vien la: "<<endl;
    for(int i =0;i < n;i++){
        cout<<"Nhan vien thu "<<i + 1<<" la: "<<endl;
        arr[i].xuat();
    }
}
// ham tinh luong cao nhat giua cac nhan vien
int cListNhanVien::max_salary(){
    int max_value= arr[0].getSalary(); // ta lay su dung phuong thuc getter de lay sotien luong trong thong tin cua nhan vien dau lam goc
    // tiep theo la so sanh cac thong tin nhan vien con lai
    for(int i = 1;i< n;i++){
        // bat dau bang 1 do da lay thong tin cua luong cua nhan vien 0 lam goc 
        if(max_value < arr[i].getSalary()){
            max_value = arr[i].getSalary() // gan gia tri max value neu tim duoc luong cao hon
        }
    }
    return max_value;
}
void cListNhanVien::luongcaonhat(){
    if (n == 0) {
        cout << "Danh sach nhan vien rong!\n";
        return;
    }
    cout<<"thong tin nhan vien luong lon nhat: "<<endl;
    int count = 0;
    for(int i = 0;i < n;i++){
        if(arr[i].getSalary() == max_salary()){
            // so sanh xem lieu co nhan vien co cung muc luong cao nhat hay khong
            // neu co thi xuat ra het tat ca thong tin nhan vien
            arr[i].xuat();
            count++;
        }
    }
    if(count >= 2){
        cout<<"Co tong cong "<<count<<" nhan vien co luong cao nhat"<<endl;
    }
}
// ham tinh tong luong
int cListNhanVien::total_salary(){
    int total = 0;
    for(int i = 0;i < n;i++){
        total += arr[i].getSalary(); // voi moi nhan vien cong don vao tong so luong ma cong ty phai tra cho tat ca nhan vien
    }
    return total;
}

// ham tra ve gia tri cua nguoi cao tuoi nhat trong danh sach nhan vien
void cListNhanVien::old_age(){
    Date gia_nhat = arr[0].getDate();
    for(int i = 1;i < n;i++){
        if(gia_nhat.sosanh(arr[i].getDate()) == 1){
            continue; 
        }
        else if(gia_nhat.sosanh(arr[i].getDate()) == 0){
            // ???
        }
        else{
            gia_nhat = arr[i].getDate();
        }
    }
    return gia_nhat;
}


