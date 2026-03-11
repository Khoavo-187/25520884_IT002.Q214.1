#include <bits/stdc++.h>
using namespace std;

struct Hocsinh{
    string hoten;
    double toan;
    double van;

    // Ham khoi tao mac dinh
    // Dau vao: khong co
    // Dau ra : khong co
    // Chuc nang: khoi tao gia tri mac dinh cho hoc sinh
    Hocsinh(){
        hoten = "";
        toan  = 0.0;
        van   = 0.0;
    }
    bool kiemtraHoTen(string s){
    if(s.empty()) return false;
        for(char c : s){
            // chi reject so thuần (0-9), van chap nhan chu co dau
            if(c >= '0' && c <= '9'){
                return false;
            }
        }   
        return true;
    }
    // Ham nhapthongtin
    // Dau vao: nguoi dung nhap ho ten, diem toan, diem van
    // Dau ra : khong co, gan gia tri hop le vao struct
    // Chuc nang: kiem tra ho ten khong trong, diem nam trong khoang 0-10
    //            dung cin.ignore() truoc getline de tranh bo qua input
    void nhapthongtin(){
        string ten;
        double t, v;

        // Nhap ho ten
        cin.ignore();
        do{
            cout << "Nhap ho ten hoc sinh: ";
            getline(cin, ten);
            if(cin.fail()){
                cout << "Sai kieu du lieu, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if(!kiemtraHoTen(ten)){
                cout << "Ho ten khong hop le, nhap lai!" << endl;
                continue;
            }
            break;
        }while(true);

        // Nhap diem toan
        do{
            cout << "Nhap diem toan (0 - 10): ";
            cin >> t;
            if(cin.fail()){
                cout << "Sai kieu du lieu, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if(t < 0.0 || t > 10.0){
                cout << "Diem toan phai tu 0 den 10, nhap lai!" << endl;
                continue;
            }
            break;
        }while(true);

        // Nhap diem van
        do{
            cout << "Nhap diem van (0 - 10): ";
            cin >> v;
            if(cin.fail()){
                cout << "Sai kieu du lieu, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if(v < 0.0 || v > 10.0){
                cout << "Diem van phai tu 0 den 10, nhap lai!" << endl;
                continue;
            }
            break;
        }while(true);

        hoten = ten;
        toan  = t;
        van   = v;
    }

    // Ham diemtrungbinh
    // Dau vao: toan, van cua struct
    // Dau ra : diem trung binh kieu double
    // Chuc nang: tinh trung binh cong cua diem toan va diem van
    double diemtrungbinh(){
        return (toan + van) / 2.0;
    }

    // Ham xuatthongtin
    // Dau vao: khong co
    // Dau ra : in thong tin hoc sinh ra man hinh
    // Chuc nang: hien thi ho ten, diem toan, diem van, diem trung binh
    void xuatthongtin(){
        cout << "Ho va ten     : " << hoten << endl;
        cout << "Diem toan     : " << toan  << endl;
        cout << "Diem van      : " << van   << endl;
        cout << "Diem trung binh: " << diemtrungbinh() << endl;
    }
};

int main(){
    Hocsinh hs;
    cout << "Nhap thong tin hoc sinh:" << endl;
    hs.nhapthongtin();
    cout << "\nThong tin hoc sinh:" << endl;
    hs.xuatthongtin();
    return 0;
}