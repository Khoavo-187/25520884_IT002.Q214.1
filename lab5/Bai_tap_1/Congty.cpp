#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

// constructor mac dinh
// vector tu dong quan ly bo nho, khong can xu ly thu cong
congty::congty(){}

// copy constructor
// input: doi tuong congty can sao chep
// giai thuat: sao chep n, goi clone() cho tung nhan vien trong danh sach chung de tao ban sao doc lap,
//             tranh 2 doi tuong cung tro ve 1 vung nho (shallow copy se gay double-free)
//             luu y: chi clone danh sach chung vi 2 vector con (VP/SX) chi luu lai de truy cap theo loai,
//             ban than cac doi tuong da duoc quan ly boi danh sach chung roi
congty::congty(const congty& other){
    n = other.n;
    for(nhanvien* NV : other.danhsachnhanvien){
        danhsachnhanvien.push_back(NV->clone());
    }
}

// destructor
// giai phong toan bo doi tuong nhan vien trong danh sach chung
// luu y: chi delete o day, khong delete trong 2 vector VP/SX vi chung dang tro vao cung 1 vung nho,
//         delete 2 lan se gay undefined behavior
congty::~congty(){
    for(nhanvien* NV : danhsachnhanvien){
        delete NV;
    }
}

// getter lay danh sach nhan vien van phong
// output: vector chua cac con tro vanphong
vector<vanphong*> congty::GetVP(){
    return danhsachvanphong;
}

// getter lay danh sach nhan vien san xuat
// output: vector chua cac con tro sanxuat
vector<sanxuat*> congty::GetSX(){
    return danhsachsanxuat;
}

// nhap danh sach nhan vien cua cong ty tu ban phim
// giai thuat: hoi so luong, cho chon loai nhan vien (van phong/san xuat), tao doi tuong tuong ung,
//             day vao ca vector theo loai lan vector chung de truy cap linh hoat sau nay,
//             nhap sai loai thi lap lai i de nhap lai
// luu y thiet ke: thay vi dung dynamic_cast de loc sau khi nhap, o day phan loai ngay khi tao doi tuong,
//                 nen truy cap theo loai nhan vien chi can lay thang tu GetVP()/GetSX() ma khong can cast
void congty::nhapdanhsach(){
    cout<<"Nhap so luong nhan vien muon nhap vao: "; cin>>n;
    for(int i = 0;i < n;i++){
        nhanvien* nv = nullptr;
        cout<<"Nhap thong tin nhan vien thu "<<i + 1<<" la: "<<endl; 
        int choose;
        cout<<"Chon nhan vien muon nhap vao: "<<endl;
        cout<<"1. Nhan vien van phong"<<endl;
        cout<<"2. Nhan vien san xuat"<<endl;
        cout<<"Chon: "; cin>>choose;
        if(choose == 1){
            vanphong* vp = new vanphong();
            danhsachvanphong.push_back(vp);
            nv = vp;
        }
        else if(choose == 2){
            sanxuat* sx = new sanxuat();
            danhsachsanxuat.push_back(sx);
            nv = sx;
        }
        else{
            cout<<"Nhap so khong hop lai vui long nhap lai: "<<endl;
            i--;
            continue;
        }
        nv->nhap();
        danhsachnhanvien.push_back(nv);
    }
}

// in toan bo danh sach nhan vien ra man hinh
// giai thuat: duyet danh sach chung va goi xuat() theo kieu da hinh,
//             virtual dispatch tu chon dung xuat() cua lop con ma khong can biet cu the la loai nao
void congty::xuatdanhsach(){
    for(int i = 0;i < n;i++){
        cout<<"Thong tin nhan vien thu "<<i + 1<<" la: "<<endl;
        danhsachnhanvien[i]->xuat();
    }
}

// tinh tong tien luong cong ty phai tra cho tat ca nhan vien
// output: tong luong theo don vi dong
// giai thuat: duyet danh sach chung, goi Tinhluong() theo kieu da hinh,
//             moi loai nhan vien tu tinh theo cong thuc rieng ma khong can phan biet loai
long long congty::total_luong(){
    long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += danhsachnhanvien[i]->Tinhluong();
    }
    return sum;
}

// tim nhan vien san xuat co luong thap nhat
// input: vector sanxuat lay tu GetSX(), da co kieu chinh xac nen khong can cast them
// output: con tro toi doi tuong sanxuat co luong thap nhat, nullptr neu vector rong
// giai thuat: duyet vector, so sanh Tinhluong() va giu lai nguoi co luong thap hon
// luu y: truoc day dung dynamic_cast de loc tu danh sach chung, cach nay phai duyet toan bo n phan tu
//         va van co kha nang bỏ sot neu cast that bai; gio truyen thang vector sanxuat vao nen gon hon
sanxuat* congty::min_luong(vector<sanxuat*> sx) const{
    sanxuat* min_val = nullptr;
    for(int i = 0;i < sx.size();i++){
        if(!min_val || min_val->Tinhluong() > sx[i]->Tinhluong()){
            min_val = sx[i];
        }
    }
    return min_val;
}

// tim nhan vien van phong co do tuoi lon nhat (sinh som nhat)
// input: vector vanphong lay tu GetVP(), da co kieu chinh xac nen khong can cast them
// output: con tro toi doi tuong vanphong lon tuoi nhat, nullptr neu vector rong
// giai thuat: duyet vector, so sanh ngay sinh qua sosanh(),
//             sosanh tra ve 1 nghia la vp[i] sinh truoc (lon tuoi hon) nen cap nhat max_tuoi
vanphong* congty::max_tuoi(vector<vanphong*> vp) const{
    vanphong* max_tuoi = nullptr;
    for(int i = 0;i < vp.size();i++){
        if(!max_tuoi || max_tuoi->getDate().sosanh(vp[i]->getDate()) == 1){
            max_tuoi = vp[i];
        }
    }
    return max_tuoi;
}