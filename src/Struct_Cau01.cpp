#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

typedef struct donthuc
{
    double heso;
    int hemu;
}DS;

// nhap don thuc
void nhapdonthuc(donthuc &DS){
    cout<<"Nhap he so cua don thuc: "; 
    cin>>DS.heso;
    cout<<"Nhap he mu cua don thuc: "; 
    cin>>DS.hemu;
}

// xuat don thuc
void xuatdonthuc(donthuc DS){
    if(DS.heso == 0){
        cout<<0;
        return;
    }
    
    if(DS.hemu == 0){
        cout<<fixed<<setprecision(2)<<DS.heso;
    }
    else{
        // In hệ số
        if(DS.heso == 1){
            cout<<"x";
        }
        else if(DS.heso == -1){
            cout<<"-x";
        }
        else{
            cout<<fixed<<setprecision(2)<<DS.heso<<"x";
        }
        
        // In số mũ
        if(DS.hemu != 1){
            cout<<"^"<<DS.hemu;
        }
    }
}

// cong 2 don thuc cung bac
donthuc congdonthuc(donthuc DT1, donthuc DT2){
    donthuc ketqua;
    if(DT1.hemu == DT2.hemu){
        ketqua.heso = DT1.heso + DT2.heso;
        ketqua.hemu = DT1.hemu;
    }
    else{
        cout<<"Khong the cong 2 don thuc khac bac!"<<endl;
        ketqua.heso = 0;
        ketqua.hemu = 0;
    }
    return ketqua;
}

// tru 2 don thuc cung bac
donthuc hieu(donthuc DT1, donthuc DT2){
    donthuc ketqua;
    if(DT1.hemu == DT2.hemu){
        ketqua.heso = DT1.heso - DT2.heso;
        ketqua.hemu = DT1.hemu;
    }
    else{
        cout<<"Khong the tru 2 don thuc khac bac!"<<endl;
        ketqua.heso = 0;
        ketqua.hemu = 0;
    }
    return ketqua;
}

// nhan 2 don thuc
donthuc tich(donthuc DT1, donthuc DT2){
    donthuc ketqua;
    ketqua.heso = DT1.heso * DT2.heso;
    ketqua.hemu = DT1.hemu + DT2.hemu;  
    return ketqua;
}

// chia 2 don thuc
donthuc thuong(donthuc DT1, donthuc DT2){
    donthuc ketqua;
    if(DT2.heso == 0){
        cout<<"Khong the chia cho 0 trong don thuc!"<<endl;
        ketqua.heso = 0;
        ketqua.hemu = 0;
    }
    else{
        ketqua.heso = DT1.heso / DT2.heso;
        ketqua.hemu = DT1.hemu - DT2.hemu;  
    }
    return ketqua;
}

// tinh gia tri don thuc
float giatridonthuc(donthuc DS, float x){
    return DS.heso * pow(x, DS.hemu);
}

// dao ham cua don thuc
donthuc daohamdonthuc(donthuc DS){
    donthuc ketqua;
    if(DS.hemu == 0){
        ketqua.heso = 0;
        ketqua.hemu = 0;
    }
    else{
        ketqua.heso = DS.heso * DS.hemu;
        ketqua.hemu = DS.hemu - 1;
    }
    return ketqua;
}

int main() {
    donthuc DT1, DT2;
    float x;
    
    cout<<"NHAP DON THUC THU NHAT"<<endl;
    nhapdonthuc(DT1);
    cout<<endl;
    
    cout<<" NHAP DON THUC THU HAI"<<endl;
    nhapdonthuc(DT2);
    cout<<endl;

    cout<<"Tong cua 2 don thuc la: ";
    xuatdonthuc(congdonthuc(DT1, DT2));
    cout<<endl;
    
    cout<<"Hieu cua 2 don thuc la: ";
    xuatdonthuc(hieu(DT1, DT2));
    cout<<endl;
    
    cout<<"Tich cua 2 don thuc la: ";
    xuatdonthuc(tich(DT1, DT2));
    cout<<endl;
    
    cout<<"Thuong cua 2 don thuc la: ";
    xuatdonthuc(thuong(DT1, DT2));
    cout<<endl<<endl;

    cout<<"Nhap gia tri x de tinh don thuc: "; 
    cin>>x;
    cout<<"Gia tri don thuc 1 tai x = "<<x<<" la: "<<fixed<<setprecision(2)<<giatridonthuc(DT1, x)<<endl;
    cout<<"Gia tri don thuc 2 tai x = "<<x<<" la: "<<fixed<<setprecision(2)<<giatridonthuc(DT2, x)<<endl;
    cout<<endl;

    cout<<"Dao ham cap 1 cua don thuc 1 la: ";
    xuatdonthuc(daohamdonthuc(DT1));
    cout<<endl;
    
    cout<<"Dao ham cap 1 cua don thuc 2 la: ";
    xuatdonthuc(daohamdonthuc(DT2));
    cout<<endl;

    return 0;
}