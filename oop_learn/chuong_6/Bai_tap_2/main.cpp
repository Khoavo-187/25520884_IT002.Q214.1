#include <bits/stdc++.h>
#include "caodang.h"
#include "caodang.cpp"
#include "daihoc.h"
#include "daihoc.cpp"
#include "sinhvien.h"
#include "sinhvien.cpp"
using namespace std;

int main(){
    sinhvien* student[2];
    student[0] = new caodang();
    student[1] = new daihoc();
    
    cout<<"Nhap thong tin cho sinh vien he cao dang: "; student[0]->nhap();
    cout<<"nhap thon tin cho sinh vien he dai hoc: "; student[1]->nhap();

    cout<<"thong tin cua sinh vien he cao dang:"<<endl;
    student[0]->xuat();
    cout<<endl;
    cout<<"Thong tin cua sinh vien he dai hoc: "<<endl;
    student[1]->xuat();

    cout<<endl;
    if(student[0]->extracheck()){
        cout<<"sinh vien cao dang nay du dieu kien tot nghiep";
    }
    else{
        cout<<"Sinh vien khong du dien kien tot nghiep cao dang";
    }
    cout<<endl;
    if(student[1]->extracheck()){
        cout<<"sinh vien dai hoc nay du dieu kien tot nghiep";
    }
    else{
        cout<<"Sinh vien khong du dieu kien tot nghiep dai hoc";
    }

    for(int i = 0;i < 2;i++){
        delete student[i];
    }
    return 0;
}