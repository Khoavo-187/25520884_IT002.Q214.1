#include <bits/stdc++.h>
#include "sophuc.h"
using namespace std;

void sophuc::set(double thuc,double ao){
    this->thuc = thuc;
    this->ao = ao;
}
sophuc::sophuc(double thuc,double ao){
    set(thuc,ao); // su dung phuong thuc set de khoi tao so phuc
}


// bat dau nhap cac toan tu operator

// ham cộng operator+
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để cộng vào
// output: Trả về số phức sau khi đã cộng vói P2
// Giải thuật: A + B = (a1 + b1,a2 + b2) tuong ứng với giá trị của số phức ban đầu và P2
sophuc sophuc::operator+(sophuc P2) const{
    return sophuc(thuc + P2.thuc,ao + P2.ao);
}
 
// hàm trừ operator-
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để tru di
// output: Trả về số phức sau khi đã tru vói P2
// Giải thuật: A - B = (a1 - b1,a2 - b2) tuong ứng với giá trị của số phức ban đầu và P2
sophuc sophuc::operator-(sophuc P2) const{
    return sophuc(thuc - P2.thuc,ao - P2.ao);
}

// Hàm nhân operator*
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để nhan voi nhau
// output: Trả về số phức sau khi đã nhân vói P2
// Giải thuật: A * B = (a1 * b1 - a2 * b2,a1 * b2 + a2 * b1) tuong ứng với giá trị của số phức ban đầu và P2
sophuc sophuc::operator*(sophuc P2) const{
    return sophuc(thuc * P2.thuc - ao * P2.ao,thuc * P2.ao + ao * P2.thuc);
}

// hàm thương operator/
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để chia voi nhau
// output: Trả về số phức sau khi đã chia vói P2
// Giải thuật: A * B = ((a1 * b1 + a2 * b2) / b1^2 + b1^2,(b1 * a2 - a1 * b2) / b1^2 + b2^2) tuong ứng với giá trị của số phức ban đầu và P2
sophuc sophuc::operator/(sophuc P2) const{
    return sophuc((thuc * P2.thuc + ao * P2.ao) / (pow(P2.thuc,2) + pow(P2.ao,2)), (P2.thuc * ao - thuc * P2.ao) / (pow(P2.thuc,2) + pow(P2.ao,2)));
}

// cac phuong thuc tra ve xem lieu xem coi 2 so phuc co bang nhau hay khong

// hàm so sánh bằng operator==
// input: Lấy input hiện tại so sanh với P2
// output: Trả về true nếu bằng nhau hoặc không
// giải thuật: Đảm bảo phần thực và ảo cả 2 phải bằng nhau hết
bool sophuc::operator==(sophuc P2) const{
    return (thuc == P2.thuc && ao == P2.ao);
    
}

// cai này thì ngược lại
bool sophuc::operator!=(sophuc P2) const{
    return (thuc != P2.thuc || ao != P2.ao);
}

// Toán tử >> cho phép nhập input thông qua istream is
// Cho số phức P2 để nhập vào giá trị thông qua istream

istream& operator>>(istream& is,sophuc &P2){
    cout<<"Nhap phan thuc va phan ao cho so phuc: ";
    do{
        is>>P2.thuc>>P2.ao;
        // điều kiện để nhập dữ liệu phần thực và ảo cho số phức P2
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai"<<endl;
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        break;
    }while(true);
    return is;
}

// Xuất thông tin thông qua toán tử << ostream os
ostream& operator<<(ostream& os,sophuc P2){
    if(P2.ao < 0){
        os<<P2.thuc<<" - "<<-P2.ao<<"i";
    }
    else if(P2.ao == 0){
        os<<P2.thuc;
    }
    else{
        os<<P2.thuc<<" + "<<P2.ao<<"i";
    }
    return os;
}
