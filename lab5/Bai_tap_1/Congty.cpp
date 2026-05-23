#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

// constructor co tham so
// input: so luong nhan vien ban dau (mac dinh la 0)
// giai thuat: khoi tao n va de danh sach tro ve nullptr, cap phat dong se thuc hien trong nhapdanhsach
congty::congty(int n){
    this->n = n;
    this->danhsachnhanvien = nullptr;
}

// destructor
// giai thuat: giai phong tung doi tuong nhan vien truoc, sau do xoa mang con tro de tranh memory leak
congty::~congty(){
    for(int i = 0;i < n;i++){
        delete danhsachnhanvien[i];
    }
    delete[] danhsachnhanvien;
}

// nhap danh sach nhan vien cua cong ty tu ban phim
// giai thuat: hoi so luong nhan vien, cap phat mang con tro, voi moi vi tri cho nguoi dung chon
//loai nhan vien (van phong/san xuat) roi tao doi tuong tuong ung va goi ham nhap()
void congty::nhapdanhsach(){
    cout<<"Nhap so luong nhan vien muon nhap vao: "; cin>>n;
    danhsachnhanvien = new nhanvien*[n];
    for(int i = 0;i < n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i + 1<<" la: "<<endl; 
        int choose;
        cout<<"Chon nhan vien muon nhap vao: "<<endl;
        cout<<"1. Nhan vien van phong"<<endl;
        cout<<"2. Nhan vien san xuat"<<endl;
        cout<<"Chon: "; cin>>choose;
        if(choose == 1){
            danhsachnhanvien[i] = new vanphong();
        }
        else if(choose == 2){
            danhsachnhanvien[i] = new sanxuat();
        }
        else{
            cout<<"Nhap so khong hop lai vui long nhap lai: "<<endl;
            i--;
            continue;
        }
        danhsachnhanvien[i]->nhap();
    }
}

// in toan bo danh sach nhan vien ra man hinh
// giai thuat: duyet mang con tro va goi ham xuat() theo kieu da hinh, tu dong chon dung xuat() cua lop con
void congty::xuatdanhsach(){
    for(int i = 0;i < n;i++){
        cout<<"Thong tin nhan vien thu "<<i + 1<<" la: "<<endl;
        danhsachnhanvien[i]->xuat();
    }
}

// tinh tong tien luong cong ty phai tra cho tat ca nhan vien
// output: tong luong theo don vi dong
// giai thuat: duyet toan bo danh sach, cong don luong cua tung nguoi qua ham da hinh Tinhluong()
long long congty::total_luong(){
    long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += danhsachnhanvien[i]->Tinhluong();
    }
    return sum;
}

// tim nhan vien san xuat co luong thap nhat
// output: con tro toi doi tuong sanxuat co luong thap nhat, nullptr neu khong co nhan vien san xuat nao
// giai thuat: dung dynamic_cast de loc ra cac nhan vien san xuat, so sanh luong va giu lai nguoi thap nhat
sanxuat* congty::min_luong() const{
    sanxuat* min_val = nullptr;
    for(int i = 0;i < n;i++){
        sanxuat* SX = dynamic_cast<sanxuat*>(danhsachnhanvien[i]);
        if(!SX) continue;

        if(!min_val || min_val->Tinhluong() > SX->Tinhluong()){
            min_val = SX;
        }
    }
    return min_val;
}

// tim nhan vien van phong co do tuoi lon nhat (sinh som nhat)
// output: con tro toi doi tuong vanphong lon tuoi nhat, nullptr neu khong co nhan vien van phong nao
// giai thuat: dung dynamic_cast de loc nhan vien van phong, so sanh ngay sinh qua ham sosanh(),
//ai co ngay sinh nho hon (sosanh tra ve 1) la nguoi lon tuoi hon
vanphong* congty::max_tuoi() const{
    vanphong* max_tuoi = nullptr;
    for(int i = 0;i < n;i++){
        vanphong* VP = dynamic_cast<vanphong*>(danhsachnhanvien[i]);
        if(!VP) continue;
        if(!max_tuoi || max_tuoi->getDate().sosanh(VP->getDate()) == 1){
            max_tuoi = VP;
        }
    }
    return max_tuoi;
}