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
    bool bangnhau(Phanso p2){
        return tuso == p2.tuso && mauso == p2.mauso;
    }
    bool sosanh(Phanso p2){
        int left = tuso * p2.mauso;
        int right = mauso * p2.tuso;
        if(left > right){
            return true;
        }
        else return false;
    }
    void xuatps(){
        cout<<tuso<<"/"<<mauso;
    }    
};
int main(){
    Phanso p1,p2;
    cout<<"nhap thanh phan cho phan so p1"<<endl;
    p1.nhapps();
    cout<<"nhap thanh phan cho phan so p2:"<<endl;
    p2.nhapps();
    cout << "Ket qua: Phan so lon nhat la: ";

    if (p1.bangnhau(p2)) { 
        p1.xuatps();
        cout << " (hai phan so bang nhau)"<<endl;
    }
    else if (p1.sosanh(p2)) {
        p1.xuatps();
        cout<<endl;
    }
    else {
        p2.xuatps();
        cout <<endl;
    }
    return 0;
}
