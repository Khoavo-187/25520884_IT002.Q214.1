#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;

// constructor mac dinh
// vector tu dong quan ly bo nho cho danh sach giao dich, khong can xu ly thu cong
congty::congty(){};

// copy constructor
// input: doi tuong congty can sao chep
// giai thuat: sao chep n, sau do voi moi giao dich trong danh sach goc goi clone()
//             de tao ban sao doc lap, tranh 2 doi tuong cung tro ve 1 vung nho
congty::congty(const congty& other){
    n = other.n;
    for(giaodich* gd : other.danhsachgiaodich){
        danhsachgiaodich.push_back(gd->clone());
    }
}

// destructor
// giai phong toan bo cac doi tuong giao dich duoc cap phat dong trong danh sach
congty::~congty(){
    for(giaodich* gd : danhsachgiaodich){
        delete gd;
    }
}

// nhap danh sach giao dich cua cong ty tu ban phim
// giai thuat: hoi so luong giao dich, voi moi giao dich cho chon loai (dat/nha pho/chung cu),
//             tao doi tuong tuong ung, day vao ca danh sach theo loai lan danh sach chung,
//             nhap sai loai thi lap lai i de nhap lai
void congty::nhapdanhsach(){
    cout<<"Nhap vao so luong giao dich cua cong ty: "; cin>>n;
    for(int i=0;i< n;i++){
        cout<<"Nhap giao dich thu "<<i+ 1<<" la: "<<endl;
        giaodich* gd = nullptr;
        int choose;
        cout<<"Nhap loai giao dich muon thuc hien: "<<endl;
        cout<<"1. Giao dich dat"<<endl;
        cout<<"2. Giao dich nha pho"<<endl;
        cout<<"3. Giao dich can ho chung cu"<<endl;
        cout<<"Nhap: ";
        cin>>choose;
        if(choose == 1){
            dat* d = new dat();
            danhsachnhadat.push_back(d);
            gd = d;
        }
        else if(choose == 2){
            nhapho* p = new nhapho();
            danhsachnhapho.push_back(p);
            gd = p;
        }
        else if(choose == 3){
            chungcu* canho = new chungcu();
            danhsachchungcu.push_back(canho);
            gd = canho;
        }
        else{
            cout<<"Nhap so khong hop le, vui long nhap lai"<<endl;
            i--;
            continue;
        }

        gd->nhap();
        danhsachgiaodich.push_back(gd);
    }
}

// in toan bo danh sach giao dich ra man hinh
// giai thuat: duyet danh sach chung va goi xuat() theo kieu da hinh
void congty::xuatdanhsach(){
    cout<<"Thong tin cua cong ty la: "<<endl;
    for(int i = 0;i < n;i++){
        cout<<"Giao dich thu "<<i + 1<<" la: "<<endl;
        danhsachgiaodich[i]->xuat();   
    }
}

// in so luong giao dich theo tung loai bat dong san
// giai thuat: lay size() cua 3 vector rieng biet dat/nhapho/chungcu
void congty::So_luong(){
    cout<<"So luong giao dich nha dat la: "<<danhsachnhadat.size()<<endl;
    cout<<"So luong giao dich nha pho la: "<<danhsachnhapho.size()<<endl;
    cout<<"So luong giao dich can ho chung cu la: "<<danhsachchungcu.size()<<endl;
}

// tinh thanh tien trung binh cua cac giao dich can ho chung cu
// output: gia tri trung binh kieu long double
// giai thuat: cong don thanh tien tung can ho, chia cho so luong can ho trong danh sach
long double congty::thanhtienTB(){
    double sumtb = 0;
    for(int i = 0;i < danhsachchungcu.size();i++){
        sumtb += danhsachchungcu[i]->Thanhtien();
    }
    return (long double)sumtb / danhsachchungcu.size();
}

// tim giao dich nha pho co thanh tien cao nhat
// output: con tro toi doi tuong nhapho co gia tri lon nhat, nullptr neu khong co giao dich nha pho nao
// giai thuat: duyet danh sach nhapho, so sanh thanh tien va giu lai nguoi co gia tri lon hon
nhapho* congty::max_tien(){
    nhapho* max_val = nullptr;
    for(int i = 0;i < danhsachnhapho.size();i++){
        if(!max_val || max_val->Thanhtien() < danhsachnhapho[i]->Thanhtien()){
            max_val = danhsachnhapho[i];
        }
    }
    return max_val;
}

// lay danh sach cac giao dich thuc hien trong thang 12 nam 2024
// output: vector chua cac con tro giao dich thoa dieu kien
// giai thuat: duyet danh sach chung, dung getThang() va getNam() de loc ra cac giao dich hop le
vector<giaodich*> congty::thang12(){
    vector<giaodich*> gd12;
    for(int i = 0;i < n;i++){
        if(danhsachgiaodich[i]->getThang() == 12 && danhsachgiaodich[i]->getNam() == 2024){
            gd12.push_back(danhsachgiaodich[i]);
        }
    }
    return gd12;
}