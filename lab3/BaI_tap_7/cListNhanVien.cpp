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
/*
Phuong thuc: cListNhanVien(const cListNhanVien&) - Copy constructor
Input : other (const cListNhanVien&) - doi tuong can sao chep
Output: Danh sach moi la ban sao sau cua other (deep copy)
Giai thuat: Cap phat mang moi co cung kich thuoc, sao chep tung phan tu
            tu mang other.arr sang mang moi de tranh loi shallow copy.
 */
cListNhanVien::cListNhanVien(const cListNhanVien& other){
    n = other.n;
    arr = new cNhanVienVP[n];
    for(int i =0;i < n;i++){
        arr[i] = other.arr[i]; 
    }
}
cListNhanVien::~cListNhanVien(){
    delete[] arr;
}


/*
Phuong thuc: nhap()
Input : Nguoi dung nhap tu ban phim: so luong n va thong tin tung nhan vien
Output: void - cap nhat n va mang arr cua doi tuong
Giai thuat:
B1. Doc so luong n tu ban phim.
B2. Giai phong mang cu (neu co) bang delete[], cap phat mang moi.
B3. Vong lap goi arr[i].nhap() de nhap thong tin tung nhan vien.
 */
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
 
/*
Phuong thuc: max_salary()
Input : Khong co tham so (su dung mang arr va n cua doi tuong)
Output: int - gia tri luong cao nhat trong danh sach (0 neu danh sach rong)
Giai thuat: Lay luong arr[0] lam gia tri max ban dau (goc so sanh).
Duyet tu chi so 1 den n-1:
Neu arr[i].getSalary() > max_value thi cap nhat max_value.
Tra ve max_value sau khi duyet xong toan bo mang.
 */
int cListNhanVien::max_salary(){
    if(n == 0) return 0;
    int max_value= arr[0].getSalary(); 
    for(int i = 1;i< n;i++){
        if(max_value < arr[i].getSalary()){
            max_value = arr[i].getSalary(); 
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
/*
Phuong thuc: luongcaonhat()
Input : Khong co tham so
Output: void - in thong tin tat ca nhan vien co luong cao nhat
Giai thuat:
B1. Goi max_salary() de lay gia tri luong cao nhat.
B2. Duyet toan bo mang arr:
Neu arr[i].getSalary() == max_salary() thi in thong tin nhan vien do,
tang bien dem count.
B3. Neu count >= 2 thi thong bao co nhieu nhan vien cung luong cao nhat.
 */int cListNhanVien::total_salary(){
    int total = 0;
    for(int i = 0;i < n;i++){
        total += arr[i].getSalary(); 
    }
    return total;
}

/*
Phuong thuc: old_age()
Input : Khong co tham so
Output: void - in thong tin nhan vien cao tuoi nhat trong danh sach
Giai thuat:
B1. Lay ngay sinh arr[0] lam gia tri gia_nhat ban dau, index = 0.
B2. Duyet tu phan tu thu 1 den n-1:
Goi arr[i].getDate().sosanh(gia_nhat):
Neu ket qua = 1 (arr[i] sinh truoc gia_nhat => cao tuoi hon)
thi cap nhat gia_nhat = arr[i].getDate(), index = i.
B3. In thong tin arr[index] - nhan vien cao tuoi nhat.
 */void cListNhanVien::old_age(){
    if(n == 0){
        cout<<"danh sach nhan vien rong"<<endl;
        return;
    }
    Date gia_nhat = arr[0].getDate();
    int index = 0;
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

