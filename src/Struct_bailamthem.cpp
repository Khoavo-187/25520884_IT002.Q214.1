// câu 1

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1000; 

typedef struct Sinhvien
{
    int MSSV;
    string ho_ten;
    int nam_sinh;
    double diemTB;
}SV;

void nhapsinhvien(Sinhvien &sv){
    cout << "Nhap ma so sinh vien: "; 
    cin >> sv.MSSV;
    
    cout << "Nhap nam sinh cua sinh vien: "; 
    cin >> sv.nam_sinh;
    
    cout << "Nhap diem trung binh cua sinh vien: "; 
    cin >> sv.diemTB;
    
    cin.ignore();
    
    cout << "Nhap ho va ten sinh vien: "; 
    getline(cin, sv.ho_ten);
    
    cout << endl;
}
void nhapthongtinsinhvien(Sinhvien a[], int &n){
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    
    if(n <= 0 || n > MAXN){
        cout << "So luong sinh vien khong hop le! Dat n = 1" << endl;
        n = 1;
    }
    
    cin.ignore(1000, '\n');
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "=== SINH VIEN THU " << i+1 << " ===" << endl;
        nhapsinhvien(a[i]);        
    }
}

void xuatsinhvien(Sinhvien sv){
    cout << "MSSV: " << sv.MSSV << endl;
    cout << "Ho va ten: " << sv.ho_ten << endl;
    cout << "Nam sinh: " << sv.nam_sinh << endl;
    cout << "Diem trung binh: " << fixed << setprecision(2) << sv.diemTB << endl;
}

void xuatthongtinsinhvien(Sinhvien a[], int n){
    cout << "\n========== DANH SACH SINH VIEN ==========" << endl;
    for(int i = 0; i < n; i++){  
        cout << "\n--- Sinh vien thu " << i+1 << " ---" << endl;
        xuatsinhvien(a[i]);
    }
}

double timDiemTBLonNhat(Sinhvien a[], int n){
    if(n <= 0) return 0.0;  
    
    double maxDiem = a[0].diemTB;
    
    for(int i = 1; i < n; i++){
        if(a[i].diemTB > maxDiem){
            maxDiem = a[i].diemTB;
        }
    }
    
    return maxDiem;
}

void xuatSinhVienDiemDuoi5(Sinhvien a[], int n){
    cout << "\n========== SINH VIEN CO DIEM TB < 5.0 ==========" << endl;
    
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i].diemTB < 5.0){
            dem++;
            cout << "\n--- Sinh vien thu " << dem << " ---" << endl;
            xuatsinhvien(a[i]);
        }
    }
    
    if(dem == 0){
        cout << "Khong co sinh vien nao co diem duoi 5.0" << endl;
    }
}

int main(){
    Sinhvien danhsach[MAXN];
    int n = 0;
    
    cout << "=== CHUONG TRINH QUAN LY SINH VIEN ===" << endl << endl;
    
    nhapthongtinsinhvien(danhsach, n);
    
    cout << " So sinh vien da nhap: " << n << endl; 
    
    xuatthongtinsinhvien(danhsach, n);
    
    double diemcao = timDiemTBLonNhat(danhsach, n);
    cout << "\nDiem trung binh cao nhat trong danh sach la: "
         << fixed << setprecision(2) << diemcao << endl;
    
    xuatSinhVienDiemDuoi5(danhsach, n);

    return 0;
}
// cau4
#include <bits/stdc++.h>
using namespace std;

struct ThoiGian {
    int gio;
    int phut;
    int giay;
};

void nhapThoiGian(ThoiGian &t) {
    cout << "Nhap gio: ";
    cin >> t.gio;
    cout << "Nhap phut: ";
    cin >> t.phut;
    cout << "Nhap giay: ";
    cin >> t.giay;
}

void xuatThoiGian(ThoiGian t) {
    cout << setfill('0') << setw(2) << t.gio << ":"
         << setw(2) << t.phut << ":"
         << setw(2) << t.giay;
}

int chuyenThanhGiay(ThoiGian t) {
    return t.gio * 3600 + t.phut * 60 + t.giay;
}

ThoiGian chuyenThanhThoiGian(int tongGiay) {
    ThoiGian t;
    t.gio = tongGiay / 3600;
    tongGiay %= 3600;
    t.phut = tongGiay / 60;
    t.giay = tongGiay % 60;
    return t;
}

ThoiGian khoangCachThoiGian(ThoiGian t1, ThoiGian t2) {
    int giay1 = chuyenThanhGiay(t1);
    int giay2 = chuyenThanhGiay(t2);
    
    int khoangCach = abs(giay2 - giay1); 
    
    return chuyenThanhThoiGian(khoangCach);
}

int main() {
    ThoiGian t1, t2;
    
    cout << "=== NHAP THOI GIAN THU NHAT ===\n";
    nhapThoiGian(t1);
    
    cout << "\n=== NHAP THOI GIAN THU HAI ===\n";
    nhapThoiGian(t2);
    
    cout << "\n=== KET QUA ===\n";
    cout << "Thoi gian 1: ";
    xuatThoiGian(t1);
    cout << "\nThoi gian 2: ";
    xuatThoiGian(t2);
    
    ThoiGian khoangCach = khoangCachThoiGian(t1, t2);
    cout << "\n\nKhoang cach thoi gian: ";
    xuatThoiGian(khoangCach);
    cout << endl;
    
    int tongGiay = chuyenThanhGiay(khoangCach);
    cout << "Tuong duong: " << tongGiay << " giay" << endl;
    
    return 0;
}
    

// cau 5
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;


typedef struct sophuc
{
    double phanthuc;
    double phanao;

}SP;

void nhapsophuc(sophuc &sp){
    cout<<"nhap phan thuc cua so: "; cin>>sp.phanthuc;
    cout<<"nhap phan ao cua so: "; cin>>sp.phanao;
}
void xuatsophuc(sophuc sp){
    cout<<sp.phanthuc;
    if(sp.phanao >= 0){
        cout<<"+"<<sp.phanao<<"i";
    }
    else{
        cout<<"-"<<(-sp.phanao)<<"i";
    }
}
sophuc cong(sophuc so1,sophuc so2){
    sophuc ketqua;
    ketqua.phanthuc = so1.phanthuc + so2.phanthuc;
    ketqua.phanao = so1.phanao + so2.phanao;
    return ketqua;
}
sophuc tru(sophuc so1,sophuc so2){
    sophuc ketqua;
    ketqua.phanthuc = so1.phanthuc - so2.phanthuc;
    ketqua.phanao = so1.phanao - so2.phanao;
    return ketqua;
}
sophuc nhan(sophuc so1,sophuc so2){
    sophuc ketqua;
    ketqua.phanthuc = (so1.phanthuc * so2.phanthuc - so1.phanao * so2.phanao);
    ketqua.phanao = (so1.phanthuc * so2.phanao + so1.phanao * so2.phanthuc);
    return ketqua;
}
sophuc chia(sophuc so1,sophuc so2){
    sophuc ketqua;
    ketqua.phanthuc = (so1.phanthuc * so2.phanthuc + so1.phanao * so2.phanao) / (so2.phanthuc * so2.phanthuc + so2.phanao * so2.phanao);
    ketqua.phanao = (so1.phanao * so2.phanthuc - so1.phanthuc * so2.phanao) / (so2.phanthuc * so2.phanthuc + so2.phanao * so2.phanao);
    return ketqua;
}
int main() {
    sophuc so1,so2;

    cout<<"nhap so phuc dau tien :"<<endl;
    nhapsophuc(so1);
    cout<<endl;

    cout<<"nhap so phuc thu 2: "<<endl;
    nhapsophuc(so2);
    cout<<endl;

    cout<<"so phuc thu 1 la ";
    xuatsophuc(so1);
    cout<<endl;
    cout<<"so phuc thu 2 la: ";
    xuatsophuc(so2);
    cout<<endl;

    cout<<"phe cong cua 2 so phuc la ";
    xuatsophuc(cong(so1,so2));
    cout<<endl;
    cout<<"phep tru cua 2 so phuc la: ";
    xuatsophuc(tru(so1,so2));
    cout<<endl;
    cout<<"phep nhan cua 2 so phuc la: ";
    xuatsophuc(nhan(so1,so2));
    cout<<endl;
    cout<<"phep chia cua 2 so phuc la: ";
    xuatsophuc(chia(so1,so2));
    cout<<endl;
    return 0;
}
    
// cau 6
#include <bits/stdc++.h>
using namespace std;

typedef struct phanso {
    int tuso;
    int mauso;
} PS;

int UCLN(int a, int b) {
    return __gcd(abs(a), abs(b));
}

void nhapphanso(PS &phanso) {
    cout << "Nhap tu so: "; cin >> phanso.tuso;
    cout << "Nhap mau so: "; cin >> phanso.mauso;
    while(phanso.mauso == 0) {
        cout << "Mau so khong duoc bang 0! Nhap lai: ";
        cin >> phanso.mauso;
    }
}

void nhapmangphanso(PS A[], int &n) {
    cout << "Nhap so phan tu: "; cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "\nPhan so thu " << i+1 << ":\n";
        nhapphanso(A[i]);
    }
}

void xuatphanso(PS phanso) {
    if(phanso.tuso == 0) {
        cout << "0";
        return;
    }
    if(phanso.mauso == 1) {
        cout << phanso.tuso;
        return;
    }
    
    int tu = phanso.tuso;
    int mau = phanso.mauso;
    if(mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    cout << tu << "/" << mau;
}

void xuatmang(PS A[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Phan so thu " << i+1 << ": ";
        xuatphanso(A[i]);
        cout << endl;
    }
}

PS rutgon(PS phanso1) {
    PS ketqua;
    int uc = UCLN(phanso1.tuso, phanso1.mauso);
    ketqua.tuso = phanso1.tuso / uc;
    ketqua.mauso = phanso1.mauso / uc;
    
    if(ketqua.mauso < 0) {
        ketqua.tuso = -ketqua.tuso;
        ketqua.mauso = -ketqua.mauso;
    }
    return ketqua;
}

PS tong(PS ps1, PS ps2) {
    PS ketqua;
    ketqua.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    ketqua.mauso = ps1.mauso * ps2.mauso;  
    return rutgon(ketqua);
}

PS hieu(PS ps1, PS ps2) {
    PS ketqua;
    ketqua.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    ketqua.mauso = ps1.mauso * ps2.mauso; 
    return rutgon(ketqua);
}

PS nhan(PS ps1, PS ps2) {
    PS ketqua;
    ketqua.tuso = ps1.tuso * ps2.tuso;
    ketqua.mauso = ps1.mauso * ps2.mauso;
    return rutgon(ketqua);
}

PS thuong(PS ps1, PS ps2) {
    PS ketqua;
    if(ps2.tuso == 0) {
        cout << "Loi: Khong the chia cho 0!\n";
        ketqua.tuso = 0;
        ketqua.mauso = 1;
        return ketqua;
    }
    ketqua.tuso = ps1.tuso * ps2.mauso;
    ketqua.mauso = ps1.mauso * ps2.tuso;
    return rutgon(ketqua);
}

bool toigian(PS phanso) {
    return UCLN(phanso.tuso, phanso.mauso) == 1;
}

void quyDong(PS ps1, PS ps2, PS &psQD1, PS &psQD2) {
    int msc = (ps1.mauso * ps2.mauso) / UCLN(ps1.mauso, ps2.mauso); 
    
    psQD1.tuso = ps1.tuso * (msc / ps1.mauso);
    psQD1.mauso = msc;
    
    psQD2.tuso = ps2.tuso * (msc / ps2.mauso);
    psQD2.mauso = msc;
}

void ktra(PS phanso) {
    int dau = phanso.tuso * phanso.mauso;
    if(dau > 0) {
        cout << "Day la phan so duong";
    } else if(dau < 0) {
        cout << "Day la phan so am";
    } else {
        cout << "Day la phan so bang 0";
    }
}


int sosanh(PS ps1, PS ps2) {
    ps1 = rutgon(ps1);
    ps2 = rutgon(ps2);
    
    int a = ps1.tuso * ps2.mauso;
    int b = ps2.tuso * ps1.mauso;
    
    if(a > b) return 1;
    else if(a < b) return -1;
    else return 0;
}

int main() {
    PS ps1, ps2;
    
    cout << "===== NHAP PHAN SO 1 =====\n";
    nhapphanso(ps1);
    
    cout << "\n===== NHAP PHAN SO 2 =====\n";
    nhapphanso(ps2);
    
    cout << "\n===== KET QUA =====\n";
    
    cout << "Phan so 1: "; xuatphanso(ps1); cout << endl;
    cout << "Phan so 2: "; xuatphanso(ps2); cout << endl;
    
    cout << "\nPhan so 1 rut gon: "; xuatphanso(rutgon(ps1)); cout << endl;
    cout << "Phan so 2 rut gon: "; xuatphanso(rutgon(ps2)); cout << endl;
    
    cout << "\nTong: "; xuatphanso(ps1); cout << " + "; xuatphanso(ps2); 
    cout << " = "; xuatphanso(tong(ps1, ps2)); cout << endl;
    
    cout << "Hieu: "; xuatphanso(ps1); cout << " - "; xuatphanso(ps2); 
    cout << " = "; xuatphanso(hieu(ps1, ps2)); cout << endl;
    
    cout << "Tich: "; xuatphanso(ps1); cout << " * "; xuatphanso(ps2); 
    cout << " = "; xuatphanso(nhan(ps1, ps2)); cout << endl;
    
    cout << "Thuong: "; xuatphanso(ps1); cout << " / "; xuatphanso(ps2); 
    cout << " = "; xuatphanso(thuong(ps1, ps2)); cout << endl;
    
    cout << "\nPhan so 1 " << (toigian(ps1) ? "da" : "chua") << " toi gian\n";
    cout << "Phan so 2 " << (toigian(ps2) ? "da" : "chua") << " toi gian\n";
    
    PS psQD1, psQD2;
    quyDong(ps1, ps2, psQD1, psQD2);
    cout << "\nQuy dong:\n";
    xuatphanso(ps1); cout << " = "; xuatphanso(psQD1); cout << endl;
    xuatphanso(ps2); cout << " = "; xuatphanso(psQD2); cout << endl;
    
    cout << "\nPhan so 1: "; ktra(ps1); cout << endl;
    cout << "Phan so 2: "; ktra(ps2); cout << endl;
    
    int kq = sosanh(ps1, ps2);
    cout << "\nSo sanh: ";
    if(kq == 1) cout << "Phan so 1 > Phan so 2\n";
    else if(kq == -1) cout << "Phan so 1 < Phan so 2\n";
    else cout << "Phan so 1 = Phan so 2\n";
    
    return 0;
}



// cau 7
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
typedef struct thongtinsinhvien {
    string ten;
    string lop;
    int toan, ly, hoa;
} SV;

void nhapthongtin(SV &sinhvien){
 // Quan trọng để xử lý getline sau cin>>n
    cin.ignore();
    cout << "Nhap ho va ten: "; 
    getline(cin, sinhvien.ten);
    cout << "Nhap lop: "; 
    getline(cin, sinhvien.lop);
    cin.ignore();
    cout << "Nhap diem toan: "; cin >> sinhvien.toan;
    cout << "Nhap diem ly: "; cin >> sinhvien.ly;
    cin.ignore();
    cout << "Nhap diem hoa: "; cin >> sinhvien.hoa;
}

void nhapmangthongtin(SV A[], int &n){
    cout << "Nhap so luong sinh vien: "; 
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "\n--- Nhap thong tin sinh vien thu " << i+1 << " ---\n";
        nhapthongtin(A[i]);
    }
}

void xuatthongtin(SV sinhvien){
    cout << "Ho va ten: " << sinhvien.ten << endl;
    cout << "Lop: " << sinhvien.lop << endl;
    cout << "Toan: " << sinhvien.toan << endl;
    cout << "Ly: " << sinhvien.ly << endl;
    cout << "Hoa: " << sinhvien.hoa << endl;
}

void xuatmangthongtin(SV A[], int n){
    for(int i = 0; i < n; i++){
        cout << "\n--- Thong tin sinh vien thu " << i+1 << " ---\n";
        xuatthongtin(A[i]);
    }
}

void timVaChinhSua(SV A[], int n){
    string ten, lop;
    cin.ignore();
    cout << "Nhap ten sinh vien: ";
    getline(cin, ten);
    cout << "Nhap lop: ";
    getline(cin, lop);
    
    for(int i = 0; i < n; i++){
        if(A[i].ten == ten && A[i].lop == lop){
            cout << "\n--- Tim thay sinh vien ---\n";
            xuatthongtin(A[i]);
            
            char luaChon;
            cout << "\nBan co muon chinh sua? (y/n): ";
            cin >> luaChon;
            
            if(luaChon == 'y' || luaChon == 'Y'){
                cout << "\n--- Nhap thong tin moi ---\n";
                nhapthongtin(A[i]);
                cout << "Da cap nhat thanh cong!\n";
            }
            return;
        }
    }
    
    cout << "Khong tim thay sinh vien!\n";
}
int main() {

    SV A[100];
    int n;
    nhapmangthongtin(A,n);

    xuatmangthongtin(A,n);

    cout<<"nhap thong tin tim kiem: ";
    timVaChinhSua(A,n);

    cout<<"danh sach sau cung";
    xuatmangthongtin(A,n);
    return 0;
}

// cau 8


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
typedef struct tamgiac
{
    int canhben1,canhben2,canhday;
}TG;

void nhaptamgiac(TG &tamgiac){
    cout<<"nhap canh 1 cho tam giac: "; cin>>tamgiac.canhben1;
    cout<<"nhap canh 2 cho tam giac: "; cin>>tamgiac.canhben2;
    cout<<"nhap canh day cho tam giac: "; cin>>tamgiac.canhday;
}

void xuattamgiac(TG tamgiac){
    cout<<"canh ben 1 cua tam giac la: "<<tamgiac.canhben1<<endl;
    cout<<"canh ben 2 cua tam giac la: "<<tamgiac.canhben2<<endl;
    cout<<"canh day cua tam giac la: "<<tamgiac.canhday<<endl;
}


int chuvitamgiac(TG tamgiac){
    int ketqua;

    ketqua = tamgiac.canhben1 + tamgiac.canhben2 + tamgiac.canhday;
    return ketqua;
}

void dientichtamgiac(TG tamgiac){
    double p = (tamgiac.canhben1 + tamgiac.canhday + tamgiac.canhben2) / 2;
    cout<<"nua chu vi tam giac la: "<<p;
    cout<<endl;
    double S =sqrt(p * (p - tamgiac.canhben1) * (p - tamgiac.canhben2) * (p - tamgiac.canhday));
    cout<<"dien tich cua tam giac la "<<S;

}
int main() {
   
    tamgiac TG1;

    nhaptamgiac(TG1);
    xuattamgiac(TG1);

    cout<<"chu vi cua tam giac la: "<<chuvitamgiac(TG1)<<endl;

    dientichtamgiac(TG1);
    return 0;
}
*/
// cau 9

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

typedef struct phanso
{
    int tuso, mauso;
}PS;

void nhapphanso(PS &phanso){
    cout << "Nhap tu so: "; 
    cin >> phanso.tuso;
    cout << "Nhap mau so: "; 
    cin >> phanso.mauso;
    while(phanso.mauso == 0){
        cout << "Mau so khong the bang 0! Nhap lai mau so: ";
        cin >> phanso.mauso;
    }
}

void nhapmangphanso(PS A[], int &n){
    cout << "Nhap so luong phan so: "; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap phan so thu " << i+1 << "\n";
        nhapphanso(A[i]);
    }
}

void xuatphanso(PS phanso){
    cout << phanso.tuso << "/" << phanso.mauso << endl;
}

void xuatmangphanso(PS A[], int n){
    for(int i = 0; i < n; i++){
        cout << "Phan so thu " << i+1 << ": ";
        xuatphanso(A[i]);
    }
}

int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);
    return __gcd(a, b);
}

PS rutgon(PS phanso){
    PS ketqua;
    int ucln = UCLN(phanso.tuso, phanso.mauso);
    ketqua.tuso = phanso.tuso / ucln;
    ketqua.mauso = phanso.mauso / ucln;
    
    if(ketqua.mauso < 0){
        ketqua.tuso = -ketqua.tuso;
        ketqua.mauso = -ketqua.mauso;
    }
    return ketqua;
}

void rutgonmoiphanso(PS A[], int n){
    cout << "\n=== CAC PHAN SO SAU KHI RUT GON ===\n";
    for(int i = 0; i < n; i++){
        cout << "Phan so rut gon thu " << i+1 << ": ";
        xuatphanso(rutgon(A[i]));
    }
}

void demsoluong(PS A[], int n){
    int duong = 0;
    int am = 0;
    for(int i = 0; i < n; i++){
        int dau = A[i].tuso * A[i].mauso;
        if(dau > 0){
            duong++;
        }
        else if(dau < 0){
            am++;
        }
    }
    cout << "\nSo luong phan so duong: " << duong << endl;
    cout << "So luong phan so am: " << am << endl;
}

void duongdautien(PS A[], int n){
    cout << "\nPhan so duong dau tien: ";
    for(int i = 0; i < n; i++){
        if(A[i].tuso * A[i].mauso > 0){
            xuatphanso(A[i]);
            return;
        }
    }
    cout << "Khong co phan so duong\n";
}

double giatri(PS phanso){
    return (double)phanso.tuso / phanso.mauso;
}

void phansolonnhat(PS A[], int n){
    int idx = 0;
    double maxVal = giatri(A[0]);
    
    for(int i = 1; i < n; i++){
        double val = giatri(A[i]);
        if(val > maxVal){
            maxVal = val;
            idx = i;
        }
    }
    cout << "\nPhan so lon nhat: ";
    xuatphanso(A[idx]);
}

void phansonhonhat(PS A[], int n){
    int idx = 0;
    double minVal = giatri(A[0]);
    
    for(int i = 1; i < n; i++){
        double val = giatri(A[i]);
        if(val < minVal){
            minVal = val;
            idx = i;
        }
    }
    cout << "\nPhan so nho nhat: ";
    xuatphanso(A[idx]);
}

void mangtangdan(PS A[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(giatri(A[i]) > giatri(A[j])){
                PS temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void manggiamdan(PS A[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(giatri(A[i]) < giatri(A[j])){
                PS temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    PS A[100];
    int n;
    
    nhapmangphanso(A, n);
    
    cout << "\n=== MANG PHAN SO VUA NHAP ===\n";
    xuatmangphanso(A, n);
    
    rutgonmoiphanso(A, n);
    
    demsoluong(A, n);
    
    duongdautien(A, n);
    
    phansolonnhat(A, n);
    
    phansonhonhat(A, n);
    
    cout << "\n=== MANG TANG DAN ===\n";
    mangtangdan(A, n);
    xuatmangphanso(A, n);
    
    cout << "\n=== MANG GIAM DAN ===\n";
    manggiamdan(A, n);
    xuatmangphanso(A, n);
    
    return 0;
}