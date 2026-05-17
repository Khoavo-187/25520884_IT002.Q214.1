#include <bits/stdc++.h>
#include "CTime.h"
using namespace std;


// Hàm normalize chuẩn hóa thời gian với mọi thời gian trong input(nằm trong private)
// Công thức chuẩn hóa bằng cách chuyển hết thời gian thành tổng số giây
// Sau đó phân ra thành giờ -> phút -> giây theo công thức để thời gian luôn được chuẩn hóa chuấn
void CTIME::normalize(){
    // xu li cac truong hop bi tran so giay , so phut, so gio neu vuot qua so toi da
    int total = gio * 3600 + phut * 60 + giay; 

    // luon luon xu li ngay sau khi cap nhat lai thoi gian khi nap chong toan tu
    gio = total / 3600;
    phut = (total % 3600) / 60;
    giay = total % 60;
}

// hàm set thời gian cho từng mốc
// Sau đó sẽ chuẩn hóa lại thời gian hợp lệ
void CTIME::set(int gio,int phut,int giay){
    this->gio = gio;
    this->phut= phut;
    this->giay= giay;
    normalize();
}

// Hàm khởi tạo có tham số băng cách khởi tạo thông qua hàm set trước đó
CTIME::CTIME(int gio,int phut,int giay){
    set(gio,phut,giay);
}

// cac toan tu cong tru cac so nguyen giay
// Input: Lấy input từ lúc nhập vào 
// Output: Trả về thời gian sau khi cộng s giây
// giải thuật: Lấy giây cộng với s giây, vì hàm gọi là CTIME tức là gọi lại hàm khởi tạo mà bên trong đã có sẵn normalize nên thời gian sẽ được chuẩn hóa
CTIME CTIME::operator+(int s) const{
    return CTIME(gio,phut,giay + s);
     // cong thuc tra ve thoi gian sau khi cong so nguyen s
    // goi constructor cua CTIME de cong vao s , sau do la normalize lai
}

// Tương tự như hàm cộng ở trên thì lấy thời gian hiện tai - s -> normalize()
CTIME CTIME::operator-(int s) const{
    return CTIME(gio,phut,giay - s); // cong thuc tra ve thoi gian sau khi tru so nguyen s
}

// Hàm tăng thời gian 1s
// Input: lấy thời gian hiện tại ++
// output: Tra ve thời gian sau khi cộng
// giải thuật: su dung prefix de cong thang vao thoi gian, sau do normalize() va tra lai thoi gian hien tai 
CTIME CTIME::operator++() {
    giay++;
    normalize(); 
    return *this; 
}
// Hàm giảm thời gian 1s
// Input: lấy thời gian hiện tại --
// output: Tra ve thời gian sau khi trừ
// giải thuật: su dung prefix de trừ thang vao thoi gian, sau do normalize() va tra lai thoi gian hien tai 
CTIME CTIME::operator--() {
    giay--;
    normalize();
    return *this; // tuong tu nhu phep tinh cong 1 o tren
}

// nhap cac phuong thuc display

istream& operator>>(istream& is,CTIME &T1){
    cout<<"Nhap thoi gian gio , phut,giay cho input: ";
    do{
        is>>T1.gio>>T1.phut>>T1.giay;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        // các điều kiện duyệt giờ phút giây hợp lệ
        if(T1.gio < 0 || T1.phut < 0 || T1.giay < 0){
            cout << "Khong duoc nhap so am, nhap lai: ";
            continue;
        }
        if(T1.gio > 23 || T1.phut > 59 || T1.giay > 59){
            cout << "Gia tri vuot qua gioi han, nhap lai: ";
            continue;
        }
        // truoc khi dong lai thi ta yeu cau phai normalize 1 lan nua cac moc thoi gian 1 cach hop li
        T1.normalize();
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,CTIME T1){
    string second = to_string(T1.giay);
    string min = to_string(T1.phut);
    string hour = to_string(T1.gio);

    if(second.length() != 2){
        second = '0' + second;
    }
    if(min.length() != 2){
        min = '0' + min;
    }
    if(hour.length() != 2){
        hour = '0' + hour;
    }
    os<<hour<<":"<<min<<":"<<second;
    return os;
} 