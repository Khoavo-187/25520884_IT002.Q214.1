#include <bits/stdc++.h>
using namespace std;

struct tinh {
    int matinh;
    string tentinh;
    int danso;
    double dientich;
};

void nhaptinh(tinh &tinhmoi){
    cout << "Nhap ma so tinh: ";
    cin >> tinhmoi.matinh;
    
    cout << "Nhap so dan so cua tinh: ";
    cin >> tinhmoi.danso;
    
    cout << "Nhap dien tich cua tinh: ";
    cin >> tinhmoi.dientich;
    
    cin.ignore();
    cout << "Nhap ten tinh: ";
    getline(cin, tinhmoi.tentinh);
}

void nhapmangtinh(tinh A[], int &n){
    cout << "Nhap so tinh: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "\n------- TINH THU " << i+1 << " -------\n";
        nhaptinh(A[i]);
    }
}

void xuattinh(tinh tinhmoi){
    cout << "Ma so tinh: " << tinhmoi.matinh << endl;
    cout << "Ten tinh: " << tinhmoi.tentinh << endl;
    cout << "Dan so: " << tinhmoi.danso << " nguoi" << endl;
    cout << "Dien tich: " << tinhmoi.dientich << " km2" << endl;
}

void xuattinhmang(tinh A[], int n){
    for(int i = 0; i < n; i++){
        cout << "\n============ TINH THU " << i+1 << " ============\n";
        xuattinh(A[i]);
    }
}

void xuattinhdanso1tr(tinh A[], int n){
    bool timthay = false;
    for(int i = 0; i < n; i++){
        if(A[i].danso > 1000000){
            xuattinh(A[i]);
            cout << endl;
            timthay = true;
        }
    }
    if(!timthay){
        cout << "Khong co tinh nao co dan so > 1 trieu nguoi\n";
    }
}

void dientichlonnhat(tinh A[], int n){
    int index = 0;
    for(int i = 1; i < n; i++){
        if(A[i].dientich > A[index].dientich){
            index = i;
        }
    }
    xuattinh(A[index]);
}

int main() {
    tinh A[100];
    int n;
    
    nhapmangtinh(A, n);
    
    cout << "\n\n========== DANH SACH TAT CA TINH ==========\n";
    xuattinhmang(A, n);
    
    cout << "\n\n========== TINH CO DAN SO > 1 TRIEU ==========\n";
    xuattinhdanso1tr(A, n);
    
    cout << "\n\n========== TINH CO DIEN TICH LON NHAT ==========\n";
    dientichlonnhat(A, n);
    
    return 0;
}