#include <bits/stdc++.h>
using namespace std;

struct Phanso{
    int tuso;
    int mauso;



    int UCLN(int a,int b){
        return __gcd(abs(a),abs(b)); 
    }
    void rutgon(){
        int g = UCLN(tuso,mauso); 
        tuso /= g;
        mauso /= g; 
        if(mauso < 0){
            tuso = -tuso; 
            mauso = -mauso;
        }
    }

    void nhapps(){
        int t,m;
        do{
            cout<<"nhap gia tri cho tu so va mau so";
            cin>>t>>m;
            if(cin.fail()){ 
                cout<<"nhap sai dinh dang, yeu cau nhap lai"<<endl;
                cin.clear();
                cin.ignore(1000,'\n'); 
                continue;
            }
            if(cin.peek() == '.'){
                cout<<"sai kieu du lieu cua tu so va mau so, yeu cau nhap lai"<<endl;
                cin.ignore(1000,'\n');
                continue;
            }
            if(m == 0){
                cout<<"mau khong duoc bang khong"<<endl;
                continue;
            }
            break; 
        }while(true); 
        tuso = t; 
        mauso = m;
        rutgon(); 
    }
    Phanso tong(Phanso p2){
        Phanso res;
        res.tuso = tuso * p2.mauso + mauso * p2.tuso;
        res.mauso = mauso * p2.mauso;
        rutgon();
        return res;
    }
    Phanso hieu(Phanso p2){
        Phanso res;
        res.tuso = tuso * p2.mauso - mauso * p2.tuso;
        res.mauso = mauso * p2.mauso;
        rutgon();
        return res;
    }
    Phanso tich(Phanso p2){
        Phanso res;
        res.tuso = tuso * p2.tuso;
        res.mauso = mauso * p2.mauso;
        rutgon();
        return res;
    }
    Phanso thuong(Phanso p2){
        Phanso res;
        res.tuso = tuso * p2.mauso;
        res.mauso = mauso * p2.tuso;
        rutgon();
        return res;
    }
    void xuatps(){
        cout<<tuso<<"/"<<mauso;
    }    
};

int main(){
    Phanso p1,p2;
    cout<<"nhap thong tin cho phan so 1:"<<endl;
    p1.nhapps();
    cout<<"nhap thong tin cho phan so 2:"<<endl;
    p2.nhapps();

    Phanso cong = p1.tong(p2);
    cout<<"tong giua 2 phan so la: ";
    cong.xuatps();
    cout<<endl;
    Phanso tru = p1.hieu(p2);
    cout<<"hieu giua 2 phan so la:";
    tru.xuatps();
    cout<<endl;
    Phanso nhan = p1.tich(p2);
    cout<<"tich giua 2 phan so la: ";
    nhan.xuatps();
    cout<<endl;
    Phanso chia = p1.thuong(p2);
    cout<<"thuong giua 2 phan so la: ";
    chia.xuatps();

}