#include <bits/stdc++.h>
using namespace std;


struct Nhanvien {
    string ID;
    string hoten;
    string phongban;
    int luong;
    int thuong;
    int thuclanh;

    Nhanvien() {
        ID       = "";
        hoten    = "";
        phongban = "";
        luong    = 0;
        thuong   = 0;
        thuclanh = 0;
    }

    void nhap() {
        cout << "ID      : "; cin >> ID;
        cin.ignore(); 
        cout << "Ho ten  : "; getline(cin, hoten);
        cout << "Phong ban: "; cin >> phongban;
        cout << "Luong   : "; cin >> luong;
        cout << "Thuong  : "; cin >> thuong;
        thuclanh = luong + thuong; 
    }

    void xuat() {
        cout << "ID      : " << ID       << endl;
        cout << "Ho ten  : " << hoten    << endl;
        cout << "Phong ban: " << phongban << endl;
        cout << "Luong   : " << luong    << endl;
        cout << "Thuong  : " << thuong   << endl;
        cout << "Thuc lanh: " << thuclanh << endl;
    }
};

struct DanhSachNhanVien {
    int n;
    Nhanvien ds[1000];

    void nhap() {
        cout << "So nhan vien: "; cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "\nNhan vien thu " << i + 1 << ":\n";
            ds[i].nhap();
        }
    }
    int tongthuclanh(){
        int total = 0;
        for(int i = 0;i < n;i++){
            total += ds[i].thuclanh;
        }
        return total;
    }
    int sosanh(){
        int min_luong = ds[0].luong;
        for(int i = 1;i < n;i++){
            if(min_luong > ds[i].luong){
                min_luong = ds[i].luong;
            }
        }
        return min_luong;
    }
    void luongthapnhat(){
        int min_val = sosanh();
        for(int i = 0;i < n;i++){
            if(ds[i].luong == min_val){
                ds[i].xuat();
            }
        }
    }
    int demnhanvien(){
        int dem = 0;
        for(int i = 0;i < n;i++){
            if(ds[i].thuong >= 1200000){
                dem++;
            }
        }
        return dem;
    }
    static bool congthuc(Nhanvien a,Nhanvien b){
        if(a.phongban != b.phongban){
            return a.phongban < b.phongban;
        }
        else{
            return a.ID > b.ID;
        }
    }
    void sapxep(){
        sort(ds,ds + n,congthuc);
    }
    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << "\nNhan vien thu " << i + 1 << ":\n";
            ds[i].xuat();
        }
    }
};

int main() {
    DanhSachNhanVien ds;
    ds.nhap();
    // cau a
    int tong = ds.tongthuclanh();
    cout<<"tong thuc lanh cua ca cong ty la: "<<tong<<endl;
    // cau b
    int min_val = ds.sosanh();
    cout<<"nhan vien co luong co ban thap nhatt la: "<<endl;
    ds.luongthapnhat();
    // cau c
    int nhanvien = ds.demnhanvien();
    cout<<"co tong cong "<<nhanvien<<" co tien thuong >= 1200000"<<endl;
    // cau d
    ds.sapxep();
    cout<<"danh sach nhan vien sau khi sap xep la: ";
    ds.xuat();
    return 0;   
}