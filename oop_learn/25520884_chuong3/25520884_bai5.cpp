#include <bits/stdc++.h>
using namespace std;

class cHocsinh {
private:
    string ID;
    string hoten;
    char gioitinh;
    double dtb;
    int age;

public:
    cHocsinh() {
        ID = "";
        hoten = "";
        gioitinh = 'N';
        dtb = 0.0;
        age = 0;
    }

    void nhap() {
        cout << "Nhap thong tin hoc sinh:" << endl;
        
        cout << "Nhap ma so hoc sinh: ";
        cin >> ID;
        cin.ignore();

        cout << "Nhap ho va ten: ";
        getline(cin, hoten);

        cout << "Nhap gioi tinh (N/M): ";
        cin >> gioitinh;

        do {
            cout << "Nhap diem trung binh (0 - 10): ";
            cin >> dtb;
            if (cin.fail()) {
                cout << "Sai kieu du lieu, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else if (dtb < 0.0 || dtb > 10.0) {
                cout << "Diem khong hop le, nhap lai!" << endl;
            } else {
                break;
            }
        } while (true);

        do {
            cout << "Nhap tuoi hoc sinh: ";
            cin >> age;
            if (cin.fail() || age <= 0) {
                cout << "Tuoi khong hop le, nhap lai!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else {
                break;
            }
        } while (true);
    }

    int sosanh(cHocsinh H2) {
        if (dtb > H2.dtb) return 1;
        else if (dtb == H2.dtb) return 0;
        else return -1;
    }

    int tuoi(cHocsinh H2) {
        if (age > H2.age) return 1;
        else if (age == H2.age) return 0;
        else return -1;
    }

    void xuat() {
        cout << "--- Thong tin hoc sinh ---" << endl;
        cout << "Ma hoc sinh : " << ID << endl;
        cout << "Ho va ten: " << hoten << endl;
        cout << "Gioi tinh: " << gioitinh << endl;
        cout << "Diem TB: " << dtb << endl;
        cout << "Tuoi: " << age << endl;
    }
};

int main() {
    cHocsinh H1, H2;

    cout << "=== Nhap thong tin hoc sinh A ===" << endl;
    H1.nhap();
    cout << "=== Nhap thong tin hoc sinh B ===" << endl;
    H2.nhap();

    // So sanh diem
    cout << "\n--- So sanh diem trung binh ---" << endl;
    if (H1.sosanh(H2) == 1)
        cout << "A co diem cao hon B" << endl;
    else if (H1.sosanh(H2) == 0)
        cout << "A va B co diem bang nhau" << endl;
    else
        cout << "A co diem thap hon B" << endl;

    cout << "\n--- So sanh tuoi ---" << endl;
    if (H1.tuoi(H2) == 1)
        cout << "A lon tuoi hon B" << endl;
    else if (H1.tuoi(H2) == 0)  
        cout << "A va B bang tuoi nhau" << endl;
    else
        cout << "A nho tuoi hon B" << endl;

    return 0;
}