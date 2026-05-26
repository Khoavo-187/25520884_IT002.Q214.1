#include <bits/stdc++.h>
#include "danhsach.h"
using namespace std;

int main(){
    danhsach H1;

    H1.nhapdanhsach();
    H1.xuatdanhsach();

    vector<he*> svtotnghiep = H1.danhsachtotnghiep();
    vector<he*> svkototnghiep = H1.danhsachconlai();

    cout<<"Danh sach sinh vien tot nghiep: "<<endl;
    for(int i = 0;i < svtotnghiep.size();i++){
        cout<<"Sinh vien thu "<<i + 1<<" la: "<<endl;
        svtotnghiep[i]->xuat();
    }
    cout<<"Danh sach sinh vien khong tot nghiep: "<<endl;
    for(int i = 0;i < svkototnghiep.size();i++){
        cout<<"Sinh vien thu "<<i + 1<<" la: "<<endl;
        svkototnghiep[i]->xuat();
    }

    daihoc* max_diem = H1.max_diem();
    if(!max_diem){
        cout<<"Khong co diem cao nhat cua sinh vien dai hoc"<<endl;
    }
    else{
        cout<<"Sinh vien dai hpc co diem tb cao nhat la: "<<max_diem->getDiem()<<endl;
        max_diem->xuat();
    }
    caodang* max_diem_tb = H1.max_tb_diem();
    if(!max_diem_tb){
        cout<<"Khong co diem cao nhat cua sinh vien dai hoc"<<endl;
    }
    else{
        cout<<"Sinh vien cao dang co diem tb cao nhat la: "<<max_diem_tb->getDiem()<<endl;
        max_diem_tb->xuat();
    }
    vector<daihoc*> kototnghiepDH = H1.getDH();
    vector<caodang*> kototnghiepCD = H1.getCD();
    cout<<"Doi voi sinh vien dai hoc co "<<H1.ko_tot_nghiep_dai_hoc(kototnghiepDH)<<" sinh vien khong tot nghiep"<<endl;
    cout<<"Doi voi sinh vien cao dang co "<<H1.ko_tot_nghiep_cao_dang(kototnghiepCD)<<" sinh vien khong tot nghiep"<<endl;
    return 0;
}