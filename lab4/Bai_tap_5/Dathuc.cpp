#include <bits/stdc++.h>
#include "Dathuc.h"
using namespace std;

// hàm set cho phép nhập input theo yêu cầu 
// tạo mảng
void dathuc::set(int bac){
    this->bac = bac;
    arr = new double[bac + 1];
    for(int i =0;i <= bac;i++){
        arr[i] = 0.0; // khoi tao mac dinh
    }
}
// hàm khởi tạo có tham số bậc lấy từ set
dathuc::dathuc(int bac){
    set(bac);
}

// copy construtor
dathuc::dathuc(const dathuc& other){
    bac = other.bac;
    arr = new double[other.bac + 1];
    for(int i = 0;i <= other.bac;i++){
        arr[i] = other.arr[i];
    }
}
// destructor
dathuc::~dathuc(){
    delete[] arr;
}

// input cho bac 

istream& operator>>(istream& is,dathuc &D2){
    cout<<"Nhap vao cac he so cho bac tuong ung cua da thuc: ";
    is>>D2.bac;
    delete[] D2.arr;
    D2.arr = new double[D2.bac + 1];
    for(int i = 0;i <= D2.bac;i++){
        do{
            cout<<"Nhap he so cho bac thu x^"<<D2.bac - i<<" : ";
            is>>D2.arr[i];
            if(is.fail()){
               cout<<"Input khong hop le,vui long nhap lai";
               is.clear();
               is.ignore(1000,'\n');
               continue; 
            }
            break;
        }while(true);
    }
    return is;
}

// output
ostream& operator<<(ostream& os,dathuc D2){
    bool isfound = false;
    for(int i =0;i <= D2.bac;i++){
        if(D2.arr[i] == 0) continue;
        if(isfound){
            // xuất ra các dấu trước số arr[i] 
            os<<(D2.arr[i] < 0 ?  " - " : " + "); 
        }
        else{
            if(D2.arr[i] < 0){
                os<<"-";
            }
            isfound = true;
        }

        double giatri = abs(D2.arr[i]);
        int max_bac = D2.bac - i;

        if(max_bac == 0){
            os<<giatri;
        }
        else if(max_bac ==1){
            if(giatri != 1) os<<giatri;
            os<<"x"<<" ";
        }
        else{
            if(giatri != 1) os<<giatri;
            os<<"x^"<<max_bac<<" ";
        }
    }
    return os;
}

// tinh toan khi biet duoc gia tri cua s
// Input: Lấy từ trong hàm class lúc mới nhập(có tham số s)
// output: Trả về giá trị cộng lại được sau khi biết s
// giải thuât: Duyệt hết bac bang i va lay sum cong cho tung gia tri da thuc theo tung bac co he so rieng 
double dathuc::total(int s) const{
    double sum = 0;
    for(int i = 0;i <= bac;i++){
        int new_bac = bac - i;
        sum += (arr[i] * pow(s,new_bac));
    }
    return sum;
}



// cac phan toan phep cong
// Input: Lấy input từ hàm class và D2
// output: trả về dathuc sau khi cộng
// giải thuật: Chọn ra bậc cao nhất làm gốc. Sau đó duyệt từng bậc của mảng 1 và 2 thì lấy res.arr[max_val - bac + i] += arr1[i]; theo cong thuc de cong dung voi bac moi cua res
dathuc dathuc::operator+(dathuc D2) const{
    int max_val = max(bac,D2.bac); 
    dathuc res(max_val);
    for(int i =0;i <= bac;i++){
        res.arr[max_val - bac + i] +=arr[i]; 
    }
    for(int j = 0;j <= D2.bac;j++){
        res.arr[max_val - D2.bac + j] += D2.arr[j];
    }
    return dathuc(res);
}

// cac phan toan phep tru
// Input: Lấy input từ hàm class và D2
// output: trả về dathuc sau khi tru
// giải thuật: Chọn ra bậc cao nhất làm gốc. Sau đó duyệt từng bậc của mảng 1 và 2 thì lấy res.arr[max_val - bac + i] += arr1[i]; Sau đó duyệt tiếp mảng tiếp theo, xét theo cùng bậc để trừ đúng thứ tự -->res.arr[max_val - D2.bac + j] -= D2.arr[j]
dathuc dathuc::operator-(dathuc D2) const{
    int max_val = max(bac,D2.bac);
    dathuc res(max_val);
    for(int i = 0;i <= bac;i++){
        res.arr[max_val - bac + i] += arr[i];
    }
    for(int j = 0;j <= D2.bac;j++){
        res.arr[max_val - D2.bac + j] -= D2.arr[j];
    }
    return dathuc(res);
}

dathuc dathuc::operator*(dathuc D2)const{
    int new_len = bac + D2.bac;
    dathuc res(new_len);

    for(int i =0;i <= bac;i++){
        for(int j = 0;j <= D2.bac;j++){
            res.arr[i + j] += arr[i] * D2.arr[j];
        }
    }
    return dathuc(res);
}

// cac ham so sanh giua cac da thuc

bool dathuc::operator==(dathuc D2) const{
    if(bac != D2.bac) return false;
    for(int i =0;i <= bac;i++){
        if(arr[i] != D2.arr[i]){
            return false;
        }
    }
    return true;
}

bool dathuc::operator!=(dathuc D2) const{
    return !(*this == D2); // neu no trai nguoc voi tat ca cac so sanh bang trong ham truoc do
}

bool dathuc::operator<(dathuc D2) const{
    // tra ve true neu bac D2 lon hon
    if(bac != D2.bac) return bac < D2.bac;

    // neu cung bac thi so sanh bac cao nhat co he so cao nhat 
    for(int i = 0;i <= bac;i++){
        if(arr[i] != D2.arr[i]){
            // nếu hệ số cùng bậc của D2 lớn hơn thì true
            return arr[i] < D2.arr[i];
        }
    }
    return false; // return false nếu bằng nhau
}

// hàm so sánh > cũng tương tự ở trên
bool dathuc::operator>(dathuc D2) const{
    if(bac != D2.bac) return bac > D2.bac;

    for(int i = 0;i <= bac;i++){
        if(arr[i] != D2.arr[i]){
            return arr[i] > D2.arr[i];
        }
    }
    return false;
}
