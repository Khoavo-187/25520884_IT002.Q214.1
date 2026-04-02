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
    // ham so sanh neu giong nhau
    // lay Phanso p2 so sanh
    bool bangnhau(Phanso p2){
        // do sau khi rut gon thi tu so va mau so da ve dang toi gian nen co the sosanh xem chung co bang nhau hay khong
        return tuso == p2.tuso && mauso == p2.mauso;
    }
    // ham so sanh giua 2 phan so
    bool sosanh(Phanso p2){
        // Su dung phuong phap nhan cheo
        // ta co a/b > c/d <=> a * d > b * c
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

    //truong hop 1: Hai phan so bang nhau
    if (p1.bangnhau(p2)) { 
        // o day minh lay du lieu phan so o p1 de so sanh voi ham du lieu cua p2
        p1.xuatps();
        cout << " (hai phan so bang nhau)"<<endl;
    }
    //truong hop 2: p1 > p2
    else if (p1.sosanh(p2)) {
        p1.xuatps();
        cout<<endl;
    }
    // Truong hop 3: p2 > p1
    else {
        p2.xuatps();
        cout <<endl;
    }
    return 0;
}
