#include <bits/stdc++.h>
#include "Thoi_gian.h"
using namespace std;


// Đầu vào: Không có 
// Đầu ra: Trả về cho giá trị của gio phut giay trong hàm class(inp mới vừa nhập vào)
void Thoigian::Nhap(){
    do{
        cin>>iGio>>iPhut>>iGiay;
        // điều kiện kiểm tra giờ phút giây hợp lệ 
        // cin.fail nhằm kiểm tra kiểu dữ liệu input liệu có hợp lệ hay không
        // nếu có thì máy tính báo lỗi và không nhận input đó
        // Sau đó phải tắt trạng thái lỗi và xóa bộ nhớ đệm trong máy tính để có thể nhập được input tiếp theo
        if(cin.fail()){
            cout<<"sai kieu du lieu cho input, vui long nhap lai";
            cin.clear();
            cin.ignore(1000,'\n');
            continue;
        }
        if(iGio >= 24 || iGio < 0){
            cout<<"gio khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(iPhut >= 60 || iPhut < 0){
            cout<<"phut khong hop le, vui long nhap lai"<<endl;
            continue;
        }
        if(iGiay >= 60 || iGiay < 0){
            cout<<"giay khong hop le,vui long nhap lai"<<endl;
            continue;
        }
        break;
    }while(true);
}


// hàm cộng thêm 1 giây vào giờ hiện tại
// Đầu vao: Không có, sử dụng input từ class igio,iphut,igiay
// Đầu ra: Trả về giá trị Thoigian tiep theo sau khi đã cộng 1 giáy
// chức năng:  Dựa vào các tính chất của thời gian , giờ phút giây để cộng vào từng thành phần
Thoigian Thoigian::TinhCongThemMotGiay(){
    // sử dụng con trỏ để trỏ tới giá trị hiện tại trong class mới vùa nhập(sao lưu lại)
    Thoigian ketqua = *this;
    ketqua.iGiay++;
    // cộng vào kết quả 1 s
    // mình sẽ cộng theo thứ tự giây -> phút -> giờ (ưu tiên giây sau đó cộng dồn vào các thành phần khác nếu thỏa)
    if(ketqua.iGiay == 60){
        ketqua.iGiay = 0;
        ketqua.iPhut++;
        if(ketqua.iPhut == 60){
            ketqua.iPhut = 0;
            ketqua.iGio++;
            if(ketqua.iGio == 24){
                ketqua.iGio = 0;
            }
        }
    }
    return ketqua;
}

// Hàm xuất thoi gian
// Đầu vào: Không có, chỉ lấy inp từ trước đó mới vừa nhập
// Đầu ra: Xuát ra thời gian tính được sau khi cộng được 1s
void Thoigian::Xuat(){
    // hàm xuất trả về phải có dạng 00:00:00
    string gio = to_string(iGio);
    string phut = to_string(iPhut);
    string giay = to_string(iGiay);
    if(gio.length() == 1){
        gio = '0' + gio;
    }
    if(phut.length() == 1){
        phut = '0' + phut;
    }
    if(giay.length() == 1){
        giay = '0' + giay;
    }

    cout<<"thoi gian sau khi cong them 1 giay la: "<<gio<<":"<<phut<<":"<<giay;
}