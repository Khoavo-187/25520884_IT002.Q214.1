#include <bits/stdc++.h>
#include "Phanso.h"
using namespace std;

// Ham tim UCLN
int UCLN(int a,int b){
    if(b == 0) return a;
    return __gcd(a,b);
}

void Phanso::Nhap(){
    cout<<"Nhap cac phan tu cho phan so: ";
    do{
        // cho 1 chuỗi string trống và đưa tất cả input về string
        string line;
        char extra;  // thêm 1 kí tự extra để check cuối chuỗi       
        getline(cin,line);
        stringstream ss(line); // tách từng từ để xét
        if(!(ss>>iTu>>iMau) || ss >> extra){ // xét hết từng kí tự liệu có bi sai kiểu hay không
            // quy định các kiểu dữ liệu phải phù hợp với hàm trong private
            cout<<"input cho tu so va mau so khong hop le(sai dinh danh,sai kieu du lieu)"<<endl;
            cout<<"vui long nhap lai";
            continue;
        }
        // luôn đảm bảo rằng mẫu luôn luôn không bằng 0
        if(iMau == 0){
            cout<<"Mau khong duoc phep bang 0";
            continue;
        }
        break;
    }while(true);
}
void Phanso::Rutgon(){
    int g = UCLN(abs(iTu),abs(iMau));
    iTu /= g;
    iMau /= g;
    // trường hợp xử lí nếu mẫu âm
    if(iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
}

void Phanso::Xuat(){
    cout<<iTu<<"/"<<iMau;
}

// tinh cac phep toan
Phanso Phanso::Tong(Phanso p2){
    Phanso ketqua;
    ketqua.iTu = iTu * p2.iMau + iMau * p2.iTu;
    ketqua.iMau = iMau * p2.iMau;
    ketqua.Rutgon();
    return ketqua;
}
Phanso Phanso::Hieu(Phanso p2){
    Phanso ketqua;
    ketqua.iTu = iTu * p2.iMau - iMau * p2.iTu;
    ketqua.iMau = iMau * p2.iMau;
    ketqua.Rutgon();
    return ketqua;
}
Phanso Phanso::Tich(Phanso p2){
    Phanso ketqua;
    ketqua.iTu = iTu * p2.iTu;
    ketqua.iMau = iMau * p2.iMau;
    ketqua.Rutgon();
    return ketqua;
}
Phanso Phanso::thuong(Phanso p2){
    Phanso ketqua;
    ketqua.iTu = iTu * p2.iMau;
    ketqua.iMau = iMau * p2.iTu;
    ketqua.Rutgon();
    return ketqua;
}
// so sanh 2 phan so
int Phanso::Sosanh(Phanso p2){
    int left = iTu * p2.iMau;
    int right = iMau * p2.iTu;
    if(left > right) return 1;
    else if(left == right) return 0;
    else return -1; 
}