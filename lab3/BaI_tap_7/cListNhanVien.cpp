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
            max_value = arr[i].getSalary(); // gan gia tri max value neu tim duoc luong cao hon
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
    int index = -1;
    for(int i =1;i < n;i++){
        if(arr[i].getDate().sosanh(gia_nhat) == 1){
            gia_nhat = arr[i].getDate();
            index = i;
        }
    }
    cout<<"Nguoi cao tuoi nhat trong danh sach nhan vien la: "<<endl;
    arr[index].xuat();
}



// ham sap xep danh sach nhan vien theo luong cua tung nguoi

void cListNhanVien::tangdan(){
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i].getSalary() > arr[j].getSalary()){
                swap(arr[i],arr[j]);
                // hoan doi danh sach nhan vien neu tien luong cua nguoi truoc lon hon nguoi ke tiep
            }
        }
    }
}

