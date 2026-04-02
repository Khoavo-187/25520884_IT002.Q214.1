// cau 1

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Phanso{
    private:
        int tuso;
        int mauso;
        int UCLN(int a,int b) {return __gcd(a,b);}
    public:
        Phanso(){
            // nhap phuong thuc khoi tao khong tham so truoc, constructor
            tuso = 0;
            mauso = 1;
        }
        void nhap(){
            cout<<"nhap input cho tu so va mau so"<<endl;
            int t,m;
            cin>>t>>m;
            tuso = t;
            mauso = m;
        }
        //getter
        int getTuso(){
            return tuso;
        }
        int getMauso(){
            return mauso;
        }
        // lay du  lieu tu 2 phan so
        Phanso tong(Phanso d2){
            Phanso ketqua;
            ketqua.tuso = this->tuso * d2.getMauso() + this->mauso * d2.getTuso();
            ketqua.mauso = this->mauso * d2.getMauso();
            ketqua.rutgon();
            return ketqua;
        }
        Phanso hieu(Phanso d2){
            Phanso ketqua;
            ketqua.tuso = this->tuso * d2.getMauso() - this->mauso * d2.getTuso();
            ketqua.mauso = this->mauso * d2.getMauso();
            ketqua.rutgon();
            return ketqua;
        }
        Phanso tich(Phanso d2){
            Phanso ketqua;
            ketqua.tuso = this->tuso * d2.getTuso();
            ketqua.mauso = this->mauso * d2.getMauso();
            ketqua.rutgon();
            return ketqua;
        }
        Phanso thuong(Phanso d2){
            Phanso ketqua;
            ketqua.tuso = this->tuso * d2.getMauso();
            ketqua.mauso = this->mauso* d2.getTuso();
            ketqua.rutgon();
            return ketqua;
        }
        // rutgon
        void rutgon(){
            int g = UCLN(abs(tuso),abs(mauso));
            tuso /= g;
            mauso /= g;
        }
        void display(){
            if(mauso > 0){
                cout<<tuso<<"/"<<mauso;
            }
            else{
                cout<<-tuso<<"/"<<-mauso;
            }
        }
};  
int main() {
    Phanso d1,d2;
    cout<<"nhap phan so cho d1: ";d1.nhap();
    cout<<"nhap phan so cho d2: ";d2.nhap();

    Phanso cong = d1.tong(d2);
    Phanso tru = d1.hieu(d2);
    Phanso nhan = d1.tich(d2);
    Phanso chia = d1.thuong(d2);

    cong.display();
    cout<<endl;
    tru.display();
    cout<<endl;
    nhan.display();
    cout<<endl;
    chia.display();

     
    return 0;
}

// bai 2
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

class Phanso{
    private:
        int tuso;
        int mauso;
        int UCLN(int a,int b){return __gcd(a,b);};
    public:
        // nhap phan so
        void nhap(){
            int t,m;
            cin>>t>>m;
            tuso = t;
            mauso = m;
        }
        Phanso(){
            tuso = 0;
            mauso = 1;
        }
        Phanso(int tuso,int mauso){
            this->tuso = tuso;
            this->mauso = mauso;
        }
        //getter
        int getTuso(){
            return tuso;
        }
        int getMauso(){
            return mauso;
        }
        // rut gon
        void rutgon(){
            int g = UCLN(abs(tuso),abs(mauso));
            tuso /= g;
            mauso /= g;
        }
        Phanso tong(Phanso d2){
            Phanso ketqua;
            ketqua.tuso = this->tuso * d2.getMauso() + this->mauso * d2.getTuso();
            ketqua.mauso = this->mauso * d2.getMauso();
            ketqua.rutgon();
            return ketqua;
        }
        // ham so sanh 2 phan so
        bool lonhon(Phanso d2){
            return tuso * d2.getMauso() > mauso * d2.getTuso(); 
        }
        // xuat ketqua
        void display(){
            if(mauso > 0){
                cout<<tuso<<"/"<<mauso;
            }
            else{
                cout<<-tuso<<"/"<<-mauso;
            }
        }
};
int main() {
    Phanso arr[100]; // bat dau nhap vao cac mang
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"nhap cac phan so thu "<<i+1;
        arr[i].nhap();
    }
    // tinh tong tat ca cac phan so trong mang arr
    Phanso cong;
    for(int i = 0;i < n;i++){
        cong = cong.tong(arr[i]);
    }
    // tim so phan so lon nhat
    Phanso max_val = arr[0];
    for(int i = 1;i < n;i++){
        if(arr[i].lonhon(max_val)){
            max_val = arr[i];
        }
    }
    cout<<"tong phan so trong mang: ";
    cong.rutgon();
    cong.display();
    cout<<endl;
    cout<<"phan so lon nhat trong mang la: ";
    max_val.display();


    return 0;
}
    

// cau 3
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Matran{
    private:
        int cot;
        int dong;
        int arr[100][100];
    public:
        // khoi tao cot dong va ma tran
        Matran(){
            cot = 0;
            dong = 0;
        }
        Matran(int cot,int dong){ 
            this->cot = cot;
            this->dong = dong;
            for(int i = 0;i < dong;i++){
                for(int j = 0;j < cot;j++){
                    arr[i][j] = 0;
                }
            }
        }
        void nhapmatran(){
            cin>>cot>>dong;
            for(int i = 0;i < dong;i++){
                for(int j = 0;j < cot;j++){
                    cin>>arr[i][j]; // bat dau ham khoi tao nhap input cho ma tran
                }
            }
        }
        // ham tinh tong cho ma tran
        Matran tong(Matran m2){
            Matran ketqua(cot,dong);
            for(int i =0;i < dong;i++){
                for(int j = 0;j < cot;j++){
                    ketqua.arr[i][j] = arr[i][j] + m2.arr[i][j]; // cong cho tung index tuong ung r tra ve gia tri cua ketqua
                }
            }
            return ketqua;
        }
        // ham hieu
        Matran hieu(Matran m2){
            Matran ketqua(cot,dong);
            for(int i = 0;i < dong;i++){
                for(int j = 0;j < cot;j++){
                    ketqua.arr[i][j] = arr[i][j] - m2.arr[i][j];
                }
            }
            return ketqua;
        }
        Matran tich(Matran m2){
            Matran ketqua(cot,m2.cot);
            for(int i = 0;i < dong;i++){
                for(int j = 0;j < m2.cot;j++){
                    for(int k = 0;k < m2.cot;k++){
                        ketqua.arr[i][j] += arr[i][k] * m2.arr[k][j];
                    }
                }
            }
            return ketqua;
        }
        void xuatmatran(){
            for(int i = 0;i < dong;i++){
                for(int j = 0;j < cot;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};  
int main() {
    Matran m1,m2;
    m1.nhapmatran();
    m2.nhapmatran();

    cout<<"tong ma tran la: "<<endl;
    Matran cong = m1.tong(m2);
    cong.xuatmatran();
    cout<<"hieu ma tran la: "<<endl;
    Matran tru = m1.hieu(m2);
    tru.xuatmatran();
    cout<<"tich ma tran la: "<<endl;
    Matran nhan = m1.tich(m2);
    nhan.xuatmatran();
    
    return 0;
}

// cau 4
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class Student{
    private:
        string Id;
        string hoten;
        char gioitinh;
        double toan;
        double ly;
        double hoa;
    public:
        Student(){
            // khoi tao bien constructor
        }
        void nhapthongtin(){
            // ham nhap thong tin sinh vien tuog ung 
            string id,ten;
            char gender;
            double t,l,h;
            cout<<"nhap thong tin cho sinh vien:";
            cout<<"id:"; getline(cin,id);
            cout<<"ho va ten:"; getline(cin,ten);
            cout<<"gioi tinh: "; cin>>gender;
            cout<<"diem toan: "; cin>>t;
            cout<<"diem ly: "; cin>>l;
            cout<<"diem hoa: "; cin>>h;
            Id = id;
            hoten = ten;
            gioitinh = gender;
            toan = t;
            ly = l;
            hoa = h;
        }   
        // tinh diem trung binh
        double diemtrungbinh(){
            return (this->toan + this->ly + this-> hoa) / 3.0;
        }
        // display
        void xuat(){
            cout<<"thong tin sinh vien la:";
            cout<<"MSSV:"<<this->Id<<endl;
            cout<<"Ho va ten: "<<this->hoten<<endl;
            cout<<"gioi tinh: "<<this->gioitinh<<endl;
            cout<<"diem toan: "<<this->toan<<endl;
            cout<<"diem ly: "<<this->ly<<endl;
            cout<<"diem hoa: "<<this->hoa<<endl;
        }
};
int main() {
    Student d1;
    d1.nhapthongtin();
    double dtb = d1.diemtrungbinh();
    d1.xuat();
    cout<<"diem trung binh cua sinh vien la: "<<dtb;
    
    
    return 0;
}