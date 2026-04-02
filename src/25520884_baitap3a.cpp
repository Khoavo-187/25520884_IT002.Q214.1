#include <bits/stdc++.h>
using namespace std;
struct Phanso{
    int tuso;
    int mauso;
    Phanso(){
        tuso  =0;
        mauso =1;
    }
    Phanso(int tu,int mau){
        if(mau == 0){
            cout<<"mau khong dc bang 0";
            tuso = 0;
            mauso = 1;
        }
        tuso = tu;
        mauso = mau;
        rutgon();
    }
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
    void xuatps(){
        cout<<tuso<<"/"<<mauso;
    }
};

int main(){
    Phanso p1;
    p1.nhapps();
    p1.xuatps();
    return 0;
}







