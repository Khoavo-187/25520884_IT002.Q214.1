#include <bits/stdc++.h>
#include "CMatrix.h"
using namespace std;


matrix::matrix(){
    row = col = 0;
    arr = nullptr;
}

void matrix::capphat(){
    // ta cho phep cap phat mang neu da cho cot va dong de duoc mang 2 chieu
    arr = new double*[row]; 
    // ta cap phat voi moi hang mot con tro de khi cap phat mang 1 chieu cho tung hang thi co the cap phat them col cot trong tung hang
    for(int i = 0;i < row;i++){
        arr[i] = new double[col]();  // neu khong co so hop le thi dua ve 0
    } 
}

void matrix::giaiphong(){
    // de co the giai phong ma tran thi dau tien la phai truy xuat den tung hang de xoa cac phan tu cot
    // sau khi xoa xong arr[i] thi moi xoa toi mang hang ben ngoai
    // gan gia tri arr la mac dinh
    if(arr == nullptr) return;
    for(int i = 0;i < row;i++){
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
}

//setter 
// phuong thuc setter de lay cac gia tri cot va hang tu ma tran
int matrix::getCol(){
    return col;
}
int matrix::getRow(){
    return row;
}
matrix::matrix(int row,int col){
    this->row = row;
    this->col = col;
    capphat(); // cap phat mang voi row va col
}

matrix::matrix(const matrix& other){
    row = other.row;
    col = other.col;
    capphat();
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            arr[i][j] = other.arr[i][j];
        }
    }
}


matrix::~matrix(){
    giaiphong();
}

//  cac phep toan cong giua 2 ma tran
// phep cong 2 matran
// input: Lay input ma tran va ma tran M2 tu tham so
// output: Tra ve ma tran sau khi cong
// giai thuat: Lay cac gia tri phan tu tai cung vi tri [i][j] cong lai voi nhau , luu y phai cung ma tran phai cung so hang va cot
matrix matrix::operator+(matrix M2) const{
    if(row != M2.row || col != M2.col){
        cout<<"Khong the cong 2 ma tran khac so hang va cot duoc"<<endl;
        return matrix();
    }

    matrix res(row,col);
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            res.arr[i][j] = arr[i][j] + M2.arr[i][j];
        }
    }    
    return matrix(res);
}

// phep tru 2 matran
// input: Lay input ma tran va ma tran M2 tu tham so
// output: Tra ve ma tran sau khi tru
// giai thuat: Lay cac gia tri phan tu tai cung vi tri [i][j] tru lai voi nhau , luu y phai cung ma tran phai cung so hang va cot
matrix matrix::operator-(matrix M2) const{
    if(row != M2.row || col != M2.col){
        cout<<"Khong the tru 2 ma tran khac so hang va cot duoc"<<endl;
        return matrix();
    }

    matrix res(row,col);
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            res.arr[i][j] = arr[i][j] - M2.arr[i][j];
        }
    }    
    return matrix(res);
}

// phep nhan 2 matran
// input: Lay input ma tran va ma tran M2 tu tham so
// output: Tra ve ma tran sau khi nhan
// giai thuat: Ta xet voi dieu kien col cua M1 == row cua M2 , voi matran sau khi nhan lay res[i][j] += arr[i][k] * M2.arr[k][j] voi k la vong lap thu 3 cho phep nhan toi cac so tuong ung voi tung cot de nhan vao voi tung hang
matrix matrix::operator*(matrix M2) const{
    if(col != M2.row){
        cout<<"Khong the nhan 2 ma tran"<<endl;
        return matrix();
    }
    matrix res(row,M2.col);

    for(int i = 0;i < row;i++){
        for(int j = 0;j < M2.col;j++){
            for(int k = 0;k < col;k++){
                res.arr[i][j] += arr[i][k] * M2.arr[k][j];
            }
        }
    }
    return matrix(res);
}


// phep nhan matran x vector
// input: Lay input ma tran va vector V1
// output: Tra ve vector sau khi nhan
// giai thuat: Voi nhan ma tran voi vector ta can phai co so cot ma tran bang voi so hang vector de co the tra ve 1 vector , cho ma tran mac dinh la res(row,0) va lay arr[i][j] * V1[j] tuong tu nhu nhan 2 ma tran
vector<double>matrix::operator*(const vector<double>& V1) const{
    if(col != V1.size()){
        cout<<"Khong the nhan voi vector neu khong cung cot hoac hang"<<endl;
        return {}; // tra ve rong
    }
    vector<double> res(row,0);
    // neu nhan ma tran voi vector se tra ve ma tran chi chua cac hang , cac cot cho bang 0
    for(int i = 0;i < row;i++){
        for(int j  =0;j< col;j++){
            res[i] += arr[i][j] * V1[j];
        }
    }
    return res;
}

istream& operator>>(istream& is,matrix &M1){
    M1.giaiphong(); // dau tien ta se giai phong cac input con sot lai trong bo nho dem tranh overflow
    // tao ma tran ngau nhien tu m dong va n cot
    cout<<"Nhap dong va cot cho ma tran: "; is>>M1.row>>M1.col;

    // khoi tao ma tran voi row dong va col cot
    M1.capphat(); // cap phat mang 2 chieu
    for(int i = 0;i < M1.row;i++){
        for(int j = 0;j < M1.col;j++){
            cout<<"arr["<<i<<"]"<<"["<<j<<"] = ";
            is>>M1.arr[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream &os,matrix M1){
    os<<"ma tran la: "<<endl;
    for(int i = 0 ;i < M1.row;i++){
        for(int j = 0;j < M1.col;j++){
            os<<M1.arr[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}