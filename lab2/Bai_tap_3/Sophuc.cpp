#include <bits/stdc++.h>
#include "Sophuc.h"

using namespace std;

// Đầu vào: Nhận input từ thuộc kiểu string
// Đầu ra: Trả về giá trị true hoặc false
bool kiemtraso(string s){
    if(s.empty()) return false;
    // trả về false nếu chuỗi không có kí tự nào
    for(char c : s){
        // truy cập từng kí tự trong chuỗi s(duyệt từng kí tự)
        if(c == '-'){
            // nếu gặp dấu âm thì chuyển sang kí tự tiếp theo
            continue;
        }
        if(!isdigit(c)){
            // chỉ chấp nhận các kí tự là số
            // loại bỏ các trường hợp là kí tụ chữ hay số thập phân
            return false;
        }
    }
    return true;
}

// Đầu vào: Không có, nhập input cho hàm class
// Đầu ra: Không có, lưu vào trong hàm class(private)
void Sophuc::Nhap(){
    // nhap so nguyen cho phan thuc va phan ao cua 1 so phuc
    cout<<"nhap cac phan tu cho so phuc: "<<endl;
    // đầu tiên là chuyển số về chuỗi để kiểm tra
    string thuc = to_string(iThuc);
    string ao = to_string(iAo);
    do{
        cin>>thuc>>ao;
        // dieu kien check xem phan thuc hay phan ao co bi sai kiue du lieu int, neu co thi phai nhap lai cho den khi true
        if(!kiemtraso(thuc) || !(kiemtraso(ao))){
            cout<<"phan thuc va phan ao bi sai kieu du lieu,vui long nhap lai"<<endl;
            continue;
        }
        // nếu thỏa thì chuyển các kí tự này về về dạng stoi thông qua stoi (biến đổi sang int)
        iThuc = stoi(thuc);
        iAo = stoi(ao);
        break;
    }while(true);
}


// Đầu vào: Không có
// Đầu ra: Xuất ra thông tin của số phức, lấy phần thực và ảo từ hàm nhập trươc đó
void Sophuc::Xuat(){
    cout<<"So phuc:";
    if(iAo > 0){
        cout<<iThuc<<"+"<<iAo<<"i";
    }
    else{
        cout<<iThuc<<"-"<<-iAo<<"i";
    }
}

// Công thức phép tinh của 2 số phức

Sophuc Sophuc::Tong(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc + P2.iAo;
    ketqua.iAo = iAo + P2.iAo;
    return ketqua;
}
Sophuc Sophuc::Hieu(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc - P2.iThuc;
    ketqua.iAo = iAo - P2.iAo;
    return ketqua;
}
Sophuc Sophuc::Tich(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = iThuc * P2.iThuc - iAo * P2.iAo;
    ketqua.iAo = iThuc * P2.iThuc + iAo * P2.iAo;
    return ketqua;
}
Sophuc Sophuc::thuong(Sophuc P2){
    Sophuc ketqua;
    ketqua.iThuc = (iThuc * P2.iThuc + iAo * P2.iAo) / (P2.iThuc * P2.iThuc + P2.iAo * P2.iAo);
    ketqua.iAo = (iAo * P2.iThuc - iThuc * P2.iAo) / (P2.iThuc * P2.iThuc + P2.iAo * P2.iAo);
    return ketqua;
}