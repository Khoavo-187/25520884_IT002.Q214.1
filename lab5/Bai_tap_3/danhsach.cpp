#include <bits/stdc++.h>
#include "danhsach.h"
using namespace std;

// constructor mac dinh
// vector tu dong quan ly bo nho, khong can xu ly thu cong
danhsach::danhsach(){}

// copy constructor
// input: doi tuong danhsach can sao chep
// giai thuat: sao chep n, goi clone() cho tung sinh vien de tao ban sao doc lap,
//             tranh 2 doi tuong cung tro ve 1 vung nho
danhsach::danhsach(const danhsach& other){
    n = other.n;
    for(he* sinhvien : other.danhsachsinhvien){
        danhsachsinhvien.push_back(sinhvien->clone());
    }
}

// destructor
// giai phong toan bo cac doi tuong sinh vien duoc cap phat dong trong danh sach
danhsach::~danhsach(){
    for(he* sinhvien : danhsachsinhvien){
        delete sinhvien;
    }
}

// getter lay danh sach sinh vien dai hoc
// output: vector chua cac con tro daihoc
vector<daihoc*> danhsach::getDH(){
    return danhsachdaihoc;
}

// getter lay danh sach sinh vien cao dang
// output: vector chua cac con tro caodang
vector<caodang*> danhsach::getCD(){
    return danhsachcaodang;
}

// nhap danh sach sinh vien tu ban phim
// giai thuat: hoi so luong, cho chon he dao tao (dai hoc/cao dang), tao doi tuong tuong ung,
//             day vao ca vector theo loai lan vector chung, nhap sai thi lap lai i
void danhsach::nhapdanhsach(){
    cout<<"Nhap so luong sinh vien muon nhap: ";
    cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"Nhap sinh vien thu "<<i + 1<<" la: "<<endl;
        he* sv = nullptr;

        int choose;
        cout<<"1. dai hoc"<<endl;
        cout<<"2. Cao dang"<<endl;
        cout<<"Nhap lua chon:"<<endl;
        cin>>choose;
        if(choose == 1){
            daihoc* DH = new daihoc();
            danhsachdaihoc.push_back(DH);
            sv = DH;
        }
        else if(choose == 2){
            caodang* CD = new caodang();
            danhsachcaodang.push_back(CD);
            sv = CD;
        }
        else{
            cout<<"Nhap khong hop le, nhap lai"<<endl;
            i--;
            continue;
        }
        sv->nhap();
        danhsachsinhvien.push_back(sv);
    }
}

// in toan bo danh sach sinh vien ra man hinh
// giai thuat: duyet danh sach chung va goi xuat() theo kieu da hinh
void danhsach::xuatdanhsach(){
    for(int i = 0;i < n;i++){   
        cout<<"Thong tin sinh vien thu "<<i + 1<<" la: "<<endl;
        danhsachsinhvien[i]->xuat();
    }
}

// lay danh sach cac sinh vien du dieu kien tot nghiep
// output: vector chua con tro toi cac sinh vien thoa dieu kien
// giai thuat: duyet danh sach chung, goi totnghiep() theo kieu da hinh de loc
vector<he*> danhsach::danhsachtotnghiep(){
    vector<he*> totnghiep;
    for(int i =0;i < n;i++){
        if(danhsachsinhvien[i]->totnghiep()){
            totnghiep.push_back(danhsachsinhvien[i]);
        }
    }
    return totnghiep;
}

// lay danh sach cac sinh vien chua du dieu kien tot nghiep
// output: vector chua con tro toi cac sinh vien khong thoa dieu kien
// giai thuat: tuong tu danhsachtotnghiep nhung dao dieu kien
vector<he*> danhsach::danhsachconlai(){
    vector<he*> khongtotnghiep;
    for(int i =0;i < n;i++){
        if(!(danhsachsinhvien[i]->totnghiep())){
            khongtotnghiep.push_back(danhsachsinhvien[i]);
        }
    }
    return khongtotnghiep;
}

// tim sinh vien dai hoc co diem trung binh cao nhat
// output: con tro toi doi tuong daihoc co diem tb cao nhat, nullptr neu danh sach trong
// giai thuat: duyet vector daihoc, so sanh qua getDiem() va giu lai nguoi co diem cao hon
daihoc* danhsach::max_diem(){
    daihoc* max_val = nullptr;
    for(int i =0;i < danhsachdaihoc.size();i++){
        if(!(max_val) || danhsachdaihoc[i]->getDiem() > max_val->getDiem()){
            max_val = danhsachdaihoc[i];
        }
    }
    return max_val;
}

// tim sinh vien cao dang co diem trung binh cao nhat
// output: con tro toi doi tuong caodang co diem tb cao nhat, nullptr neu danh sach trong
// giai thuat: tuong tu max_diem nhung duyet tren vector caodang
caodang* danhsach::max_tb_diem(){
    caodang* diem_cao_nhat = nullptr;
    for(int i =0;i < danhsachcaodang.size();i++){
        if(!(diem_cao_nhat) || danhsachcaodang[i]->getDiem() > diem_cao_nhat->getDiem()){
            diem_cao_nhat = danhsachcaodang[i];
        }
    }
    return diem_cao_nhat;
}

// dem so sinh vien cao dang chua du dieu kien tot nghiep
// input: vector chua danh sach sinh vien cao dang can kiem tra
// output: so nguyen la so luong sinh vien khong du dieu kien
int danhsach::ko_tot_nghiep_cao_dang(vector<caodang*> CD){
    int count =0;
    for(int i = 0;i < CD.size();i++){
        if(!(CD[i]->totnghiep())){
            count++;
        }
    }
    return count;
}

// dem so sinh vien dai hoc chua du dieu kien tot nghiep
// input: vector chua danh sach sinh vien dai hoc can kiem tra
// output: so nguyen la so luong sinh vien khong du dieu kien
int danhsach::ko_tot_nghiep_dai_hoc(vector<daihoc*> DH){
    int count =0;
    for(int i = 0;i < DH.size();i++){
        if(!(DH[i]->totnghiep())){
            count++;
        }
    }
    return count;
}