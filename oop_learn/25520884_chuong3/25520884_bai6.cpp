#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Sophuc{
private:
    double thuc;
    double ao;
public:
    Sophuc(){
        thuc = 0.0;
        ao = 0.0;
    }
    Sophuc(double thuc,double ao){
        this->thuc = thuc;
        this->ao = ao;
    }
    // nhap input
    void nhap(){
        cout<<"nhap cac phan tu so phuc: ";
        do{
            cin>>thuc>>ao;
            if (cin.fail()) {
                cout << "Sai kieu du lieu, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            break;
        }while(true);
    }
    // setter
    void setThuc(double thuc){
        this->thuc = thuc;
    }
    void setAo(double ao){
        this->ao = ao;
    }
    // getter
    double getThuc(){
        return thuc;
    }
    double getAo(){
        return ao;
    }
    // xuat so phuc
    void xuat(){
        if(ao > 0){
            cout<<thuc<<"+"<<ao<<"i";
        }
        else{
            cout<<thuc<<"-"<<-ao<<"i";
        }
    }
    // cong cac phep toan
    Sophuc tong(Sophuc P2){
        return {thuc + P2.thuc,ao + P2.ao};
    }
    Sophuc hieu(Sophuc P2){
        return {thuc - P2.thuc,ao - P2.ao};
    }
    Sophuc tich(Sophuc P2){
        return {(thuc * P2.thuc - ao * P2.ao),(thuc * P2.ao + ao * P2.thuc)};
    }
    Sophuc thuong(Sophuc P2){
        return {(thuc * P2.thuc + ao * P2.ao) / (P2.thuc  * P2.thuc + P2.ao * P2.ao),(ao * P2.thuc - thuc * P2.ao) / (P2.thuc  * P2.thuc + P2.ao * P2.ao)};
    }
};
int main() {
    
    Sophuc P1,P2;
    // lap so thuc tu constructor
    Sophuc P3(9.657,-5.63);
    cout<<"so phuc hien tai:";
    P3.xuat();
    P3.setAo(8.34);
    P3.setThuc(7.89);
    cout<<endl;
    // get ra
    cout<<"phan thuc cua p3 la: "<<P3.getThuc()<<endl;
    cout<<"phan ao cua p3 la: "<<P3.getAo()<<endl;
    cout<<"so phuc luc nay la: ";
    P3.xuat();
    cout<<endl;
    cout<<"nhap so thuc A"<<endl;
    P1.nhap();
    cout<<"nhap so thuc B"<<endl;
    P2.nhap();
    cout<<"cong giua 2 so thuc la: ";
    Sophuc cong = P1.tong(P2);
    cong.xuat();
    cout<<endl;
    cout<<"hieu giua 2 so thuc la: ";
    Sophuc tru = P1.hieu(P2);
    tru.xuat();
    cout<<endl;
    cout<<"nhan giua 2 so thuc la: ";
    Sophuc nhan = P1.tich(P2);
    nhan.xuat();
    cout<<endl;
    cout<<"chia giua 2 so thuc la: ";
    Sophuc chia = P1.thuong(P2);
    chia.xuat();
    cout<<endl;
    return 0;
}