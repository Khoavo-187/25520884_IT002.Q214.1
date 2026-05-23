#include <bits/stdc++.h>
#include "Congty.h"
using namespace std;


int main(){
    congty H1;;
    H1.nhapdanhsach();
    H1.xuatdanhsach();

    vector<nhanvien*> luong_it = H1.Luong_thap();
    cout<<"Luong trung binh cua cong ty la: "<<(long long)H1.luongTB()<<endl;
    cout<<"Danh sach nhan vien co luong thap hon muc luong trung binh cua cac nhan vien trong cong ty la: "<<endl;
    for(int i =0;i < luong_it.size();i++){
        cout<<"Nhan vien thu "<<i + 1<<" la: "<<endl;
        luong_it[i]->xuat();
    }

    nhanvien* luongcaonhat = H1.max_luong();
    cout<<"Nhan vien luong cao nhat voi "<<(long long)luongcaonhat->Tinhluong()<<" dong la: "<<endl;
    luongcaonhat->xuat();

    nhanvien* luongthapnhat = H1.min_luong();
    cout<<"Nhan vien luong thap nhat voi "<<(long long)luongthapnhat->Tinhluong()<<" dong la: "<<endl;
    luongthapnhat->xuat();

    vector<laptrinh*> DSlaptrinh = H1.GetLT();
    vector<kiemchung*> DSkiemchung = H1.GetKC();
    laptrinh* Max_sal_LT = H1.Luong_cao(DSlaptrinh);
    kiemchung* min_sal_KC = H1.Luong_thap(DSkiemchung);
    cout<<"Thong tin lap trinh vien luong cao nhat la: "<<endl;
    Max_sal_LT->xuat();
    cout<<"Thong tin kiem chung vien luong thap nhat la: "<<endl;
    min_sal_KC->xuat();

    return 0;
}