#include <bits/stdc++.h>
using namespace std;

class cPhanSo{
private:
    int tuso;
    int mauso;
public:
    // them ham constructo mac dinh
    cPhanSo(){
        tuso = 0;
        mauso = 1;
    }
    // ham rut gon
    int UCLN(int a,int b){
        if(b == 0) return a;
        return __gcd(a,b);
    }
    void rutgon(){
        int g = UCLN(abs(tuso),abs(mauso));
        tuso /= g;
        mauso /= g;
        if(mauso < 0){
            tuso = -tuso;
            mauso = -mauso;
        }
    }
    // constructor
    cPhanSo(int tuso,int mauso){
        this->tuso = tuso;
        this->mauso = mauso;
    }
    void nhapps(){
        cout<<"nhap cac thanh phan cho phan so: "<<endl;
        do{
            cin>>tuso>>mauso;
            if(mauso == 0){
                cout<<"mau khong duoc bang 0";
            }
        }while(mauso == 0);
    }
    //setter
    void settuso(int tuso){
        this->tuso = tuso;
    }
    void setmauso(int mauso){
        this->mauso = mauso;
    }
    //getter
    int gettuso(){
        return tuso;
    }
    int getmauso(){
        return mauso;
    }
    // tinh tong 
    cPhanSo Tong(cPhanSo p2){
        cPhanSo ketqua;
        ketqua.tuso = tuso * p2.mauso + mauso * p2.tuso;
        ketqua.mauso = mauso * p2.mauso;
        ketqua.rutgon();
        return ketqua;
    }   
    // xuat phan so
    void xuatps(){
        cout<<tuso<<"/"<<mauso;
    }
};


int main() {
    cPhanSo p1,p2;
    cout<<"nhap thong tin cho phan so A"<<endl;
    p1.nhapps();
    cout<<"nhap thong tin cho phan so B"<<endl;
    p2.nhapps();

    cout<<"thay doi tu so cho p1 thanh so 4"<<endl;
    p1.settuso(4);
    cout<<"thay doi mau so cho p2 thanh so -9"<<endl;
    p2.setmauso(-9);

    cout<<"tu so hien tai cua phan so A la: ";
    cout<<p1.gettuso()<<endl;

    cout<<"mau so hien tai cua phan so B la: ";
    cout<<p2.getmauso()<<endl;
    cPhanSo res = p1.Tong(p2);
    cout<<"tong cua 2 phan so la: ";
    res.xuatps();
    
    return 0;
}