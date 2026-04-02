#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
class cArray{
private:
    // su dung con tro cho mang arr de cap phat dong
    int *arr;
    int n;
public:
    // tao bien constructor voi n so nguyen ngau nhien nam trong mang
    cArray(int n){
        this->n = n;
        arr = new int[n]; // bat dau cap phat dong so phan tu voi n phan tu trong mang 1 chieu
        srand(time(0));
        for(int i = 0;i < n;i++){
            arr[i] = rand() % 201 - 100; // random tung phan tu trong mang 
        }
    }
    // destructor
    ~cArray(){
        delete[] arr;
    }
    // xuat mang ra man hinh
    void xuat(){
        for(int i= 0;i < n;i++){
            cout<<arr[i]<<" ";
        }
    }
    // tim so am lon nhat
    int max_am(){
        int min_val = INT_MIN;
        for(int i =0;i < n;i++){
            if(arr[i] < 0 && min_val < arr[i]){
                min_val = arr[i];
            }
        }
        return min_val;
    }
    //  ▪ Đếm lần xuất hiện của một số nguyên x
    int dem(int x){
        int count = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == x){
                count++;
            }
        }
        return count;
    }
    // ▪ Kiểm tra mảng có giảm dần không
    bool kiemtragiamdan(){
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                if(arr[i] < arr[j]){
                    return false;
                }
            }
        }
        return true;
    }
    //▪ Sắp xếp mảng tăng dần
    void tangdan(){
        sort(arr,arr + n);
    }

};
int main() {
    int n;
    cout<<"nhap so phan tu cho n: "; cin>>n;
    int x;
    cout<<"nhap so muon tim trong mang: "; cin>>x;
    cArray C1(n);
    cout<<"mang 1 chieu C1 duoc tao random la: "<<endl;
    C1.xuat();
    cout<<"So am lon nhat trong mang la: "<<C1.max_am()<<endl;
    cout<<"so lan xuat hien cua x la: "<<C1.dem(x);
    if(C1.kiemtragiamdan()){
        cout<<"mang giam dan";
    }
    else{
        cout<<"mang khong giam dan";
    }
    cout<<endl;

    cout<<"mang sau khi tan dan la: ";
    C1.tangdan();
    C1.xuat();
    return 0;
}