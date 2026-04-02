// chuong 1
// bai tap 3

#include <bits/stdc++.h>
using namespace std;

struct Phanso
{
    int tuso;
    int mauso;
};
// cau a

void nhap1ps(Phanso &d1){
    cin>>d1.tuso>>d1.mauso;
}
void xuatps(Phanso d1){
    cout<<d1.tuso<<"/"<<d1.mauso;
}


int UCLN(int a,int b){
    return __gcd(a,b);
}

void rutgon(Phanso &d1){
    if(d1.tuso == 0){
        d1.mauso = 1;
        return;
    }
    int g = UCLN(abs(d1.tuso),abs(d1.mauso));
    d1.tuso /= g;
    d1.mauso /= g;
    if(d1.mauso < 0){
        d1.tuso = -d1.tuso;
        d1.mauso = -d1.mauso;
    }
}

// cau b
void nhap1ps(Phanso &d1){
    cin>>d1.tuso>>d1.mauso;
}
void xuatps(Phanso d1){
    cout<<d1.tuso<<"/"<<d1.mauso;
}
int sosanh(Phanso d1,Phanso d2){
    int left = d1.tuso * d2.mauso;
    int right = d1.mauso * d2.tuso;
    if(left > right) return 1;
    if(left < right) return 0;
}
// cau c
Phanso tong(Phanso d1,Phanso d2){
    Phanso ketqua;
    ketqua.tuso = d1.tuso * d2.mauso + d1.mauso * d2.tuso;
    ketqua.mauso = d1.mauso * d2.mauso;
    return rutgon(ketqua);
}
Phanso hieu(Phanso d1,Phanso d2){
    Phanso ketqua;
    ketqua.tuso = d1.tuso * d2.mauso - d1.mauso * d2.tuso;
    ketqua.mauso = d1.mauso * d2.mauso;
    return rutgon(ketqua);
}
Phanso tich(Phanso d1,Phanso d2){
    Phanso ketqua;
    ketqua.tuso = d1.tuso * d2.tuso;
    ketqua.mauso = d1.mauso * d2.mauso;
    return rutgon(ketqua);
}
Phanso thuong(Phanso d1,Phanso d2){
    Phanso ketqua;
    ketqua.tuso = d1.tuso * d2.mauso;
    ketqua.mauso = d1.mauso * d2.tuso;
    return rutgon(ketqua);
}
int main() {
    // cau a
    Phanso d1;
    nhap1ps(d1);
    rutgon(d1);
    xuatps(d1);
    // cau b
    Phanso d1,d2;
    nhap1ps(d1);
    nhap1ps(d2);
    int ketqua = sosanh(d1,d2);
    if(ketqua == 1){
        xuatps(d1);
    }
    else if(ketqua == 0){
        xuatps(d2);
    }
    else{
        cout<<"2 phan so bang nhau";
    }
    // cau c
    Phanso d1,d2;
    nhap1ps(d1);
    nhap1ps(d2);
    xuatps(tong(d1,d2));
    xuatps(hieu(d1,d2));
    xuatps(tich(d1,d2));
    xuatps(thuong(d1,d2));    
    return 0;
}


// cau d
#include <bits/stdc++.h>
using namespace std;

struct Ngay
{
    int ngay;
    int thang;
    int nam;
};
void nhap1ngay(Ngay &d1){
    cin>>d1.ngay>>d1.thang>>d1.nam;
}
void xuatngay(Ngay d1){
    cout<<d1.ngay<<"/"<<d1.thang<<"/"<<d1.nam;
}

Ngay ngaytieptheo(Ngay &d1){
    Ngay ketqua;
    if(d1.ngay == 31 && d1.thang == 12){
        d1.ngay = 1;
        d1.thang = 1;
        d1.nam++;
        ketqua = d1;
        return ketqua;
    }
    if((d1.thang==1||d1.thang==3||d1.thang==5||d1.thang==7||d1.thang==8||d1.thang==10) && d1.ngay == 31){
        d1.ngay = 1;
        d1.thang++;
        ketqua = d1;
        return ketqua;
    }
    // Thang 30 ngay
    if((d1.thang==4||d1.thang==6||d1.thang==9||d1.thang==11) && d1.ngay == 30){
        d1.ngay = 1;
        d1.thang++;
        ketqua = d1;
        return ketqua;
    }
    if(d1.thang == 2 && d1.ngay == 28){
        d1.ngay = 1;
        d1.thang = 3;
        ketqua = d1;
        return ketqua;
    }
    d1.ngay++;
    ketqua = d1;
    return ketqua;
}
int main() {
    
    Ngay d1;
    nhap1ngay(d1);
    xuatngay(ngaytieptheo(d1));
    
    return 0;
}




// bai tap 4
#include <bits/stdc++.h>
using namespace std;

struct Nhanvien
{
    string id;
    string hoten;
    string phongban;
    int luong;
    int thuong;
    int thuclanh;
};

void nhapnhanvien(Nhanvien d[],int &n){
    cout<<"nhap so luong nhan vien";
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>d[i].id>>d[i].hoten>>d[i].phongban>>d[i].luong>>d[i].thuong;
        d[i].thuclanh = d[i].luong + d[i].thuong;    
    }
}
void xuatthongtin(Nhanvien d){
    cout<<"thong tin nhan vien la: "<<endl;
    cout<<"Mã nhân viên: "<<d.id<<endl;
    cout<<"Họ và tên: "<<d.hoten<<endl;
    cout<<" Phòng ban:"<<d.phongban<<endl;
    cout<<" Lương cơ bản: "<<d.luong<<endl;
    cout<<" Thưởng: "<<d.thuong<<endl;
    cout<<"thuc lanh: "<<d.thuclanh;
}
//cau a
int tong(Nhanvien d[],int n){
    int total = 0;
    for(int i =0; i <n;i++){
        total += d[i].thuclanh;
    }
    return total;
}
// cau b
int luongnhonhat(Nhanvien d[],int n){
    int min_val = INT_MAX;
    for(int i =0;i < n;i++){
        if(d[i].luong < min_val){
            min_val = d[i]->luong;
        }
    }
    return min_val;
}
void indanhsach(Nhanvien d[],int n){
    int min_luong = luongnhonhat(d,n);
    for(int i = 0;i < n;i++){
        if(d[i].luong == min_luong){
            xuatthongtin(d[i]);
        }
    }
}

// cau c
int tienthuong(Nhanvien d[],int n){
    int total = 0;
    for(int i  =0;i < n;i++){
        if(d[i].thuong >=  1200000){
            total++;
        }
    }
    return total;
}

// cau d
bool sosanh(Nhanvien a,Nhanvien b){
    if(a.phongban != b.phongban){
        return a.phongban < b.phongban;
    }
    else{
        return a.id > b.id;
    }
}

int main() {
    // cau a
    Nhanvien A[100];
    int n;
    nhapnhanvien(A,n);
    int res = tong(A,n);
    cout<<res;

    // cau b
    indanhsach(A,n);

    // cau c
    int thuong = tienthuong(A,n);
    cout<<thuong;
    // cau d
    sort(A,A + n,sosanh);
    for(int i = 0;i< n;i++){
        xuatthongtin(A[i]);
    }
    return 0;
}

// bai tap kiemtra qua trinh
#include <bits/stdc++.h>
using namespace std;

struct Hocsinh
{
    int id;
    string hoten;
    int toan;
    int van;
    int ly;
    int hoa;
};
void nhap1hs(Hocsinh &d1){
    getline(cin,d1.hoten);
    cin>>d1.id>>d1.toan>>d1.van>>d1.ly>>d1.hoa;
}
void xuatthongtin(Hocsinh d1){
    cout<<"Ho va ten: "<<d1.hoten<<endl;
    cout<<"ma hoc sinh: "<<d1.id<<endl;
    cout<<"diem toan: "<<d1.toan<<endl;
    cout<<"diem van: "<<d1.van<<endl;
    cout<<"diem ly: "<<d1.ly<<endl;
    cout<<"diem hoa: "<<d1.hoa;
}

double diemtrungbinh(Hocsinh d1){
    double total = (d1.toan + d1.van + d1.ly + d1.hoa) / 4.0;
    return total;
}
int main() {
    Hocsinh d1;
    nhap1hs(d1);
    xuatthongtin(d1);
    double dtb = diemtrungbinh(d1);
    cout<<"diem trung binh la: "<<dtb;
    return 0;
}