#include <bits/stdc++.h>
using namespace std;

struct Ngay
{
    int ngay;
    int thang;
    int nam;

    Ngay(){
        ngay = 1;
        thang = 1;
        nam = 2026;
    }
    bool namnhuan(){
        return (nam % 400 == 0|| (nam % 4 == 0 && nam % 100 != 0));
    }
    int ngaytrongthang(){
        int ngayarr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        bool lanamnhuan = namnhuan();
        if(lanamnhuan && thang == 2){
            return 29;
        }
        return ngayarr[thang];
    }
    void nhapngay(){
        int date,month,year;
        cout << "Thang 31 ngay : 1, 3, 5, 7, 8, 10, 12"<<endl;
        cout << "Thang 30 ngay : 4, 6, 9, 11"<<endl;
        cout << "Thang 2 : 28 ngay (khong nhuan) / 29 ngay (nhuan)"<<endl;
        do{
            cin>>date>>month>>year;
            if(cin.fail()){
                // loi dinh dang kieu du lieu
                cout<<"loi dinh dang yeu cau nhap lai";
                cin.clear();
                cin.ignore(1000,'\n');
                continue;
            }
            if(year <= 0){
                cout<<"nam khong duoc phep am hoac bang 0";
                continue;
            }
            if(month < 1 || month > 12){
                cout<<"thang khong hop le";
                continue;
            }
            if(ngay < 1){
                cout<<"ngay khong hop le";
                continue;
            }
            nam = year;
            thang = month;
            if(ngaytrongthang() < date){
                cout<<"thang "<<month<<" co "<<ngaytrongthang()<<" ngay"<<endl;
                continue;
            }
            ngay = date;
            break;

        }while(true);
    }
    Ngay ngayketiep(){
        Ngay ketqua = *this;
        ketqua.ngay++;
        if(ketqua.ngay > ngaytrongthang()){
            ketqua.ngay = 1;
            ketqua.thang++;
        }
        if(ketqua.thang > 12){
            ketqua.thang = 1;
            ketqua.nam++;
        }
        return ketqua;
    }
    void xuatngay(){
        cout<<ngay<<"/"<<thang<<"/"<<nam;
    }
};

int main() {
    Ngay n1;
    cout<<"nhap ngay thang cho ngay 1"<<endl;
    n1.nhapngay();
    Ngay n2 = n1.ngayketiep();
    cout<<"ngay ke tiep la: ";
    n2.xuatngay();
    
    return 0;
}