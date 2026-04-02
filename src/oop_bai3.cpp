#include <bits/stdc++.h>
using namespace std;

struct Phanso{
    int tuso;
    int mauso;
// ham de co the khoi tao phan so



    int UCLN(int a,int b){
// su dung gia tri tuyet doi de trnh truong hop a hoac b am 
        return __gcd(abs(a),abs(b)); 
// ham xu li ucln cua thu vien
    }
    void rutgon(){
        int g = UCLN(tuso,mauso); 
        // ham rut gon lay tu tuso va mauso tu ham struct
        tuso /= g;
        mauso /= g; 
        // chia tu va mau cho UCLN 
        if(mauso < 0){
            // ham xu li neu mau so < 0
            tuso = -tuso; 
            mauso = -mauso;
        }
    }

    // ham nhap va xuat cua 1 phan so
    void nhapps(){
        int t,m;
        // goi 1 gia tru tu va mau cho de so sanh ham ben trong
        do{
            cout<<"nhap gia tri cho tu so va mau so";
            cin>>t>>m;
            if(cin.fail()){ 
                // ban dau kieu du lieu cho tuso va mau so la int , chi chap nhan nen khi minh nhap kieu string hay char hay so thap phan
                // thi may tinh se roi vao trang thai fail state
                // nen se khong nhap duoc du lieu moi cho tu so va mau so nua
                cout<<"nhap sai dinh dang, yeu cau nhap lai"<<endl;
                cin.clear();
                // ham clear nay nham de tat trang fail cua may tinh neu khong se rpoi vao vong lap vo tan
                cin.ignore(1000,'\n'); 
                // ignore don gian la xoa nhung input cu khong hop le tu user, de khi user nhap input moi se ghi nhan input moi
                continue;
            }
            // Neu nguoi nhap vao 1 kieu du lieu double 
            // Su dung cin.peek() de nhin vao ki tu tiep theo cua input vua nhap , tuc la neu nhap 1 int ma ki tu tiep theo la .
            //==> Biet rang day la so thap phan
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
            // luc nay du lieu da hop le va thoat khoi vong lap
        }while(true); 
        tuso = t; 
        // sau khi thoa het dieu kien sau do gan nguoc lai gia tri hop le vao du lieu cua struct
        mauso = m;
        rutgon(); 
        // luon luon dua ve dang toi gian
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