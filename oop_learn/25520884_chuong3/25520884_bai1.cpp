#include <bits/stdc++.h>
using namespace std;

class Hocsinh{
private:
    string hoten;
    double toan;
    double van;
public:
    Hocsinh(){
        hoten = "";
        toan = 0.0;
        van = 0.0;
    }
    // ham kiem tra nhap ho ten
    bool kiemtra(string s){
        for(char c : s){
            if(isdigit(c)){
                return false;
            }
        }
        return true;
    }
    void nhapthongtin(){
    cin.ignore(); // goi 1 lan duy nhat TRUOC vong lap
    do{
        cout << "Nhap ho ten: ";
        getline(cin, hoten); // khong co cin.ignore() trong day

        if(hoten.empty()){
            cout << "Ho ten khong duoc de trong, nhap lai!" << endl;
            continue;
        }
        if(!kiemtra(hoten)){
            cout << "Ho ten khong hop le, nhap lai!" << endl;
            continue;
        }

        cout << "Nhap diem toan: ";
        cin >> toan;
        if(cin.fail() || toan < 0.0 || toan > 10.0){
            cout << "Diem toan khong hop le, nhap lai!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        cout << "Nhap diem van: ";
        cin >> van;
        if(cin.fail() || van < 0.0 || van > 10.0){
            cout << "Diem van khong hop le, nhap lai!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        break;
    }while(true);
}
    double diemtrungbinh(){
        return (toan + van) / 2.0;
    }
    void xeploai(){
        double dtb = diemtrungbinh();
        if(dtb >= 0.0 && dtb < 4.0){
            cout<<"kem"<<endl;
        }
        else if(dtb >= 4.0 && dtb < 5.0){
            cout<<"yeu"<<endl;
        }
        else if(dtb >= 5.0 && dtb < 7){
            cout<<"trung binh"<<endl;
        }
        else if(dtb >= 7 && dtb < 8){
            cout<<"kha"<<endl;
        } 
        else if(dtb >= 8 && dtb < 9){
            cout<<"gioi"<<endl;
        }
        else{
            cout<<"xuat sac"<<endl;
        }
    }
    void xuatthongtin(){
        cout<<"Ho va ten: "<<hoten<<endl;
        cout<<"diem trung binh: "<<diemtrungbinh()<<endl;
        cout<<"xep loai: ";
        xeploai();
    }
};  
int main() {
    Hocsinh h1;
    cout<<"nhap thong tin cua hoc sinh: "<<endl;
    h1.nhapthongtin();
    cout<<"thong tin hoc sinh la: "<<endl;
    h1.xuatthongtin();
    return 0;
}