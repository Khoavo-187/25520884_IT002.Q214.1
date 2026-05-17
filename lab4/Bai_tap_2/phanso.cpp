#include <bits/stdc++.h>
#include "phanso.h"
using namespace std;

int UCLN(int a,int b){
    return __gcd(a,b); // tra ve uoc chung lon nhat cho a va b
}
// hàm set cho tuso và mauso 
void phanso::set(int tuso,int mauso){
    this->tuso = tuso;
    this->mauso = mauso;
}


// sử dụng hàm set trước đó để khởi tạo có tham số , sau đó rút gọn phân số thông qua hàm constructor 
phanso::phanso(int tuso,int mauso){
    set(tuso,mauso);
    // su dung ham rut gon neu gia su truyen tham so thang vao ham khoi tao nay
    rutgon();
}

// hàm rút gọn cho từng phân số , sử dụng UCLN giữa tuso và mauso để chia ra
void phanso::rutgon(){
    int g = UCLN(abs(tuso),abs(mauso));

    tuso /= g;
    mauso /= g;

    if(mauso < 0){
        tuso = -tuso;
        mauso = -mauso;
    }
}

// tinh toan cac phep  toan giua cac phan so
// hàm cộng operator+
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để nhan voi nhau
// output: Trả về phân số sau khi đã cộng vói P2
// Giải thuật: A + B = (a1 * b2 + a2 * b1,a2 * b2) voi a1 va a2 là tử số và mẫu số của A còn b1 , b2 là tử mẫu của B
phanso phanso::operator+(phanso P2) const{
    return phanso(tuso * P2.mauso + mauso * P2.tuso,mauso * P2.mauso);
}
// hàm trừ operator-
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để nhan voi nhau
// output: Trả về phân số sau khi đã trừ vói P2
// Giải thuật: A - B = (a1 * b2 - a2 * b1,a2 * b2) voi a1 va a2 là tử số và mẫu số của A còn b1 , b2 là tử mẫu của B
phanso phanso::operator-(phanso P2) const{
    return phanso(tuso * P2.mauso - mauso * P2.tuso,mauso * P2.mauso);
}
// hàm nhân operator*
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để nhan voi nhau
// output: Trả về phân số sau khi đã nhân vói P2
// Giải thuật: A * B = (a1 * b1,a2 * b2) voi a1 va a2 là tử số và mẫu số của A còn b1 , b2 là tử mẫu của B
phanso phanso::operator*(phanso P2) const{
    return phanso(tuso * P2.tuso,mauso * P2.mauso);
}
// hàm chia operator/
// input: Lấy input bên trong đầu vào và P2 - số phức thứ 2 để chia voi nhau
// output: Trả về phân số sau khi đã chia vói P2
// Giải thuật: A / B = (a1 * b2,a2 * b1) voi a1 va a2 là tử số và mẫu số của A còn b1 , b2 là tử mẫu của B
phanso phanso::operator/(phanso P2) const{
    if(P2.tuso == 0){
        cout<<"khong the chia cho 0";
        return phanso(); // quay tro ve khoi tao mac dinh , tuso = 0, mauso = 1
    }
    return phanso(tuso * P2.mauso, mauso * P2.tuso);
}

// cac phuong thuc so sanh
// ham so sánh nếu phân số input được nhập bằng với phân số P2 
// Điều kiện : tuso phải bằng nhau và mauso cũng bằng nhau
bool phanso::operator==(phanso P2) const{
    return (tuso == P2.tuso && mauso == P2.mauso);
}

// Sử dụng công thức nhân chéo giữa 2 phân số để so sánh các phân số lón hơn
// Lấy left = a1 * b2 còn right = a2 * b1
// Điều kiện nếu left > right thì phan so trong input lớn hơn P2
bool phanso::operator>(phanso P2) const{
    int left = tuso * P2.mauso;
    int right = mauso * P2.tuso;
    return left > right;
}
// Tương tự như trên thì nếu left < right ==> P2 lớn hơn phân số trong input
bool phanso::operator<(phanso P2) const{
    int left = tuso * P2.mauso;
    int right = mauso * P2.tuso;
    return left < right;
}

// nhap input va output

// nhập phân số thông qua toán tử >> istream is
istream& operator>>(istream& is,phanso& P2){
    cout<<"Nhap tu so va mau so cho phan so: ";
    do{
        is>>P2.tuso>>P2.mauso;
        if(is.fail()){
            cout<<"Input khong hop le, vui long nhap lai";
            is.clear();
            is.ignore(1000,'\n');
            continue;
        }
        if(P2.mauso == 0){
            cout<<"Mau so khong duoc bang khong, vui long nhap lai";
            continue;
        }
        // sau khi nhap cac input hop le thi rut gon cac phan so tren
        P2.rutgon();
        break;
    }while(true);
    return is;
}

ostream& operator<<(ostream& os,phanso P2){
    if(P2.mauso == 1){
        os<<P2.tuso;
    }
    else{
        os<<P2.tuso<<"/"<<P2.mauso;
    }
    return os;
}