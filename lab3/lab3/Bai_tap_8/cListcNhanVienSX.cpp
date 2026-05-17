#include <bits/stdc++.h>
#include "cListcNhanVienSX.h"
using namespace std;

// khoi tao mac dinh cho gia tri cua n = 0
cListcNhanVienSX::cListcNhanVienSX(){
    n = 0;
    arr = nullptr;
}

cListcNhanVienSX::cListcNhanVienSX(int n){
    this->n = n;
    arr = new cNhanVienSX[n];
    for(int i = 0;i < n;i++){
        arr[i].nhap();
    }
}

/*
Phuong thuc: cListNhanVienSX(const cListNhanVienSX&) - Copy constructor
Input : other (const cListNhanVien&) - doi tuong can sao chep
Output: Danh sach moi la ban sao sau cua other (deep copy)
Giai thuat: Cap phat mang moi co cung kich thuoc, sao chep tung phan tu
            tu mang other.arr sang mang moi de tranh loi shallow copy.
 */
cListcNhanVienSX::cListcNhanVienSX(const cListcNhanVienSX& other){
    n = other.n;
    arr = new cNhanVienSX[n];
    for(int i = 0;i < n;i++){
        arr[i] = other.arr[i];
    }
}
cListcNhanVienSX::~cListcNhanVienSX(){
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
void cListcNhanVienSX::nhap(){
    cout<<"nhap so luong nhan vien muon nhap vao: "; cin>>n;
    while(n <= 0){
        cout<<"nhap so luong nhan vien hop le, nhap lai: ";
        cin>>n;
    }
    delete[] arr;
    arr = new cNhanVienSX[n];
    for(int i = 0;i < n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i +1<<" la: "<<endl;
        arr[i].nhap();
    }
}
void cListcNhanVienSX::xuat(){
    cout<<"Thong tin cua "<<n<<" nhan vien la: "<<endl;
    for(int i =0;i < n;i++){
        cout<<"Nhan vien thu "<<i + 1<<" la: "<<endl;
        arr[i].xuat();
    }
}
 
/*
Phuong thuc: min_luong()
Input : Khong co tham so (su dung mang arr va n cua doi tuong)
Output: int - gia tri luong thap nhat trong danh sach (0 neu danh sach rong)
Giai thuat: Lay luong arr[0] lam gia tri max ban dau (goc so sanh).
Cong thuc: salary = arr[i].getSP() * arr[i].getGia() 
Duyet tu chi so 1 den n-1:
Neu arr[i].Salary() < min_val thi cap nhat min_val.
Tra ve min_val sau khi duyet xong toan bo mang.
 */
int cListcNhanVienSX::min_luong(){
    if(n == 0){
        cout<<"Danh sach rong"<<endl;
        return 0;
    }
    int min_val = arr[0].salary();
    for(int i = 1;i < n;i++){
        if(arr[i].salary() < min_val){
            min_val = arr[i].salary();
        }
    }
    return min_val;
}


/*
Phuong thuc: luongthapnhat()
Input : Khong co tham so
Output: void - in thong tin tat ca nhan vien co luong thap nhat
Giai thuat:
B1. Goi min_luong() de lay gia tri luong thap nhat.
B2. Duyet toan bo mang arr:
Neu arr[i].salary() == min_luong() thi in thong tin nhan vien do,
tang bien dem count.
B3. Neu count >= 2 thi thong bao co nhieu nhan vien cung luong thap nhat.
 */
void cListcNhanVienSX::luongthapnhat(){
    if (n == 0) {
        cout << "Danh sach nhan vien rong!\n";
        return;
    }
    cout<<"thong tin nhan vien luong be nhat: "<<endl;
    int count = 0;
    int min_value = min_luong();
    for(int i = 0;i < n;i++){
        if(arr[i].salary() == min_value){
            // so sanh xem lieu co nhan vien co cung muc luong thap nhat hay khong
            // neu co thi xuat ra het tat ca thong tin nhan vien
            arr[i].xuat();
            count++;
        }
    }
    if(count >= 2){
        cout<<"Co tong cong "<<count<<" nhan vien co luong be nhat"<<endl;
    }
}

// ham tra ve tong so tien cong ty can tra cho tat ca nhan vien 
int cListcNhanVienSX::total_salary(){
    int total = 0;
    for(int i = 0;i < n;i++){
        total += arr[i].salary(); 
    }
    return total;
}

/*
Phuong thuc: caotuoi()
Input : Khong co tham so
Output: void - in thong tin nhan vien cao tuoi nhat trong danh sach
Giai thuat:
B1. Lay ngay sinh arr[0] lam gia tri max_tuoi ban dau, index = 0.
B2. Duyet tu phan tu thu 1 den n-1:
Goi arr[i].getDate().sosanh(max_tuoi):
Neu ket qua = 1 (arr[i] sinh truoc max_tuoi => cao tuoi hon)
thi cap nhat max_tuoi = arr[i].getDate(), index = i.
B3. In thong tin arr[index] - nhan vien cao tuoi nhat.
*/
void cListcNhanVienSX::caotuoi(){
    if(n == 0){
        cout<<"Danh sach nhan vien rong"<<endl;
        return;
    }
    int index = 0;
    Date max_tuoi = arr[0].getDate();
    for(int i = 1;i < n;i++){
        if(arr[i].getDate().sosanh(max_tuoi) == 1){
            max_tuoi = arr[i].getDate();
            index = i;
        }
    }
    cout<<"Nguoi cao tuoi nhat trong danh sach nhan vien la: "<<endl;
    arr[index].xuat();
}

// ham sap xep tang dan theo luong cua tung nhan vien

void cListcNhanVienSX::tangdan(){
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i].salary() > arr[j].salary()){
                swap(arr[i],arr[j]);
                // doi cho 2 vi tri lai vi de yeu cau la sap xep tang dan theo luong 
            }
        }
    }
}