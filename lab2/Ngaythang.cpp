#include <bits/stdc++.h>
#include "Ngaythang.h"
using namespace std;
bool kiemtranam(int nam){
    string s = to_string(nam);
    for(char c : s){
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
// ham xac dinh nam nhuan
bool namnhuan(int nam){
    return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}
// ham xac dinh ngay theo dung thang
int ngaytheothang(int thang,int nam){
    int ngayarr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(namnhuan(nam) && thang == 2){
        return 29;
    }
    return ngayarr[thang];
}
// hàm nhập
// Đầu vào: Người dùng nhập vào iNgay, iThang, iNam và đưa vào hàm class
// Output: không có, CHỉ có mục đích gán giá trị vào
// Chức năng: Hiển thị ngày nhập hợp lệ trước
//            Nhập lần lượt các input ngay thang nam
//            Kiểm tra input nhập vào có hợp lệ không
//            Yêu cầu nhập lại nếu lỗi
void Ngay::Nhap(){
    cout << "Thang 31 ngay : 1, 3, 5, 7, 8, 10, 12"<<endl;
    cout << "Thang 30 ngay : 4, 6, 9, 11"<<endl;
    cout<<"nhap ngay thang nam hien tai";
    do{
        int year;
        cin>>iNgay>>iThang>>year;
        if(cin.fail()){
            cout<<"input khong hop le( khong cung kieu du lieu)";
            cin.clear();
            cin.ignore(500,'\n');
            continue;
        }
        if(year < 0){
            cout<<"Nam khong hop le"<<endl;
            continue;
        }
        if(iThang <= 0 || iThang > 12){
            cout<<"thang khong hop le"<<endl;
            continue;
        }
        if(iNgay <= 0 || iNgay >31){
            cout<<"ngay khong hop le";
            continue;
        }
        if(iNgay > ngaytheothang(iThang,iNam)){
            cout<<"thang "<<iThang<<" co toi da "<<ngaytheothang(iThang,iNam)<<" ngay"<<endl;
            continue; 
        }
        if(!kiemtranam(year)){
            cout<<"nam khong hop le nhap lai";
            continue;
        }
        iNam = year;
        break; // neu vuot qua het tat ca cac dieu kien tren

    }while(true);
}

Ngay Ngay::NgayThangNamTiepTheo(){
    Ngay ketqua = *this;
    ketqua.iNgay++;
    if(ketqua.iNgay > ngaytheothang(iThang,iNam)){
        ketqua.iNgay = 1;
        ketqua.iThang++;
    }
    if(ketqua.iThang > 12){
        ketqua.iThang = 1;
        ketqua.iNam++;
    }
    return ketqua;
}
void Ngay::Xuat(){
    cout<<"ngay tiep theo la: "<<iNgay<<"/"<<iThang<<"/"<<iNam;
}