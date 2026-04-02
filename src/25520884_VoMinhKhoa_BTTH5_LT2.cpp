#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
const long long COL = 1e18;
// void cau 3
int demphantu(int A[][COL],int n,int m,int x){
    int dem =0;
    for(int i =0;i < n;i++){
        for(int j=0;j < m;j++){
            if(A[i][j] == x){
                dem++;
            }
        }
    }
    return dem;
}
void timphantu(int A[][COL],int n,int m){
    int res1 = demphantu(A,n,m,A[0][0]);
    int res2;
    int a1,a2;
    for(int i =0;i < n;i++){
        for(int j = 0;j< m;j++){
            res2 = demphantu(A,n,m,A[i][j]){
                if(res2 > res1){
                    res1 = res2;
                    a1 = i;
                    a2 = j;
                }
            }
        }
    }
    cout<<"phan tu lon nhat co trong ma tran la: "<<A[a1][a2];
}


// cau 4
int timphantu1(int A[][COL],int n,int m){
    int res1 = A[0][0];
    int a1,a2;
    for(int i = 0;i  <n;i++){
        for(int j = 0;j < m;j++){
            if(A[i][j] > res1){
                res1 = A[i][j];
                a1 = i;
                a2 = j;
            }
        }
    }
    return res1;
}

void timphantu(int A[][COL],int n,int m,int value){
    int a1,a2;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(A[i][j] == value){
                cout<<"cac vi tri trong ma tran la "<<"["<<i<<";"<<j<<"]";
                cout<<endl;
            }
        }
    }
}

// cau 7
bool songuyento(int n){
    if(i < 2) return false;
    for(int i = 2;i * i < n;i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
//cau 8
bool sohoanhao(int n){
    int total = 0;
    for(int i = 1;i*i < n;i++){
        if(n % i == 0){
            total += i;
            if(i != n/i){
                total += n/i;
            }
        }
    }
    total -= n;
    return total == n;
}
int main() {
    // cau 1
    int A[100][100];
    int n;
    cin>>n;
    for(int i =0;i < n;i++){
        for(int j = 0;j <n;j++){
            cin>>A[i][j];
        }
    }
    int tong =0;
    for(int i = 0;i< n;i++){
        for(int j = 0;j < n;j++){
            if(i + j == n -1){
                tong += A[i][j];
            }
        }
    }
    cout<<tong;

    // cau 2
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i < n;i++){
        for(int j = 0;j <m;j++){
            cin>>A[i][j];
        }
    }
    int sochan = 0;
    int sole = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <m;j++){
            if(A[i][j] % 2 == 0){
                sochan++;
            }
            if(A[i][j] % 2 != 0){
                sole++;
            }
        }
    }
    cout<<"so luong phan tu so chan trong mang la: "<<sochan<<endl;
    cout<<"so luong phan tu so le trong mang la: "<<sole<<endl;

    // cau 3
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i < n;i++){
        for(int j = 0;j <m;j++){
            cin>>A[i][j];
        }
    }
    int dem[100] = {0} // dat tat ca cac phan tu co trong mang la so 0 de xet tung index

    for(int i =0;i < n;i++){
        for(int j = 0;j < m;j++){
            dem[A[i][j] + 1000]++; // tuc la bo dem nay co vai tro la khi ta thay 1 ptu trong mang thi tu dong ++ len neu trung so do, dong thoi minh cung phai tranh truong hop la khi so phan tu do la am de tranh index la am;
        }
    }
    int max_count = 0;
    int index = 0;
    for(int i =0;i < n;i++){
        if(dem[i] > max_count){
            index = i;
            max_count = dem[i];
        }
    }
    cout<<"phan tu xuat hien nhieu nhat la "<<max_count<<" o vi tri "<<index;

    // cau3 
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }

    timphantu(A,n,m);

    // cau 4
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int ketqua= timphantu1(A,n,m);
    timphantu(A,n,m,ketqua);

    // cau 5
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int max_value = INT_MIN;
    int col =0;
    for(int i =0;i < n;i++){
        int count = 0;
        for(int j =0;j < m;j++){
            count += A[i][j];
        }
        if(count > max_value){
            max_value = count;
            col = i;
        }
    }
    cout<<"dong co tong lon nhat la: "<<col + 1;
    // cau 6
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int min_value = INT_MAX;
    int row =0;
    for(int j = 0;j < m;j++){
        int count = 0;
        for(int i = 0;i < n;i++){
            count += A[i][j];
        }
        if(count < min_value){
            min_value = count;
            row = j;
        }
    }
    cout<<"cot co tong nho nhat la"<<row + 1;
    // cau 7
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int total  =0;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            if(songuyento(A[i][j])){
                total++;
            }
        }
    }
    cout<<"tong so nguyen to xuat hien trong mang la : "<<total;

    // cau 8
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int total = 0;
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            if(sohoanhao(A[i][j])){
                total++;
            }
        }
    }
    cout<<"tong so xuat hien trong ma tran la : "<<total;

    // cau 9
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            if(i == 0 || i == (n-1) || j == 0 || j == (m-1)){
                cout<<A[i][j]<<" ";
            }
        }
    }

    // cau 10
    int A[100][100];
    int n,m;
    cin>>n>>m;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int tong =0
    for(int i = 0; i< n;i++){
        for(int j = 0;j < m;j++){
            if(i == 0 || i == n-1|| j == 0 || j == m -1){
                tong += A[i][j];
            }
        }
    }
    cout<<"tong so cac ptu tren ma tran vien ngoai la: "<<tong;

    // chu de B
    // cau 11
    int A[100][100];    
    int n,m;
    for(int i =0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"xoay ma tran 90 do ve huong ben phai la: "<<endl;
    for(int j =0;j < m;j++){
        for(int i = 0;i< n;i++){
            cout<<A[j][n-i-1]<<" ";

        }
        cout<<endl;
    }

    // cau 12
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }    
    cout<<"ma tran xoay 180 do la: "<<endl;
    for(int i =0;i < n;i++){
        for(int j = 0;j< m;j++){
            cout<<A[n-i-1][n-j-1]<<" ";
        }
        cout<<endl;
    }

    // cau 13
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }    
    cout<<"ma tran xoay 270(ben phai) do la: "<<endl;
    for(int j =0;j < m;j++){
        for(int i = 0;i< n;i++){
            cout<<A[i][n-j-1]<<" ";
        }
        cout<<endl;
    }
    // cau 14
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j = 0;j < m;j++){
            cin>>A[i][j];
        }
    }   
    cout<<"ma tran chuyen vi la : "<<endl;
    for(int i = 0;i< n;i++){
        for(int j = 0;j< m;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }

    // cau 15
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }

    cout<<"ma tran tang dan la: ";
    for(int i =0;i <n;i++){
        sort(A[i],A[i] + m);
        for(int j =0;j < m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    // cau16
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j =0;j <m;j++){
            cin>>A[i][j];
        }
    }

    for(int j = 0;j< m;j++){
        int temp[100];
        for(int i =0;i < n;i++){
            temp[i] = A[i][j];
        }
        sort(temp,temp+n);
        for(int i = 0;i< n;i++){
            A[i][j] = temp[i];
        }
    }
    cout<<"mang da sap xep theo cot la: "<<endl;
    for(int i =0;i < n;i++){
        for(int j =0;j < m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    // cau 17
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int arr[100];
    for(int i =0;i< n;i++){
        for(int j = 0;j< m;j++){
            arr[j] = A[i][j];
        }
            int start = 0;
            int end = m - 1;
            while(start < end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp; 
                start++;
                end--;
            }
         
        for(int j =0;j < m;j++){
            A[i][j] = arr[j];
        }
        
    }
    cout<<"dao nguoc ma tran theo hang la: "<<endl;
    for(int i = 0;i < n;i++){
        for(int j =0;j< m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    // cau 18
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j =0;j < m;j++){
            cin>>A[i][j];
        }
    }
    int arr[100];
    for(int j =0;j < m;j++){
        for(int i =0;i< n;i++){
            arr[i] = A[i][j];
        }
            int start = 0;
            int end = n-1;
            while(start < end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        
        for(int i =0;i< n;i++){
            A[i][j] = arr[i];  
        }
    }
    cout<<"dao nguoc ma tran theo cot la: "<<endl;
    for(int i  =0;i< n;i++){
        for(int j =0;j < m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    // chu de C
    // cau 19
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i < n;i++){
        for(int j =0;j< m;j++){
            cin>>A[i][j];
        }
    }
    bool isfound = false;
    for(int i =0;i< n;i++){
        for(int j =0;j< m;j++){
            if(A[i][j] < 0){
                cout<<"ma tran co so am";
                isfound=  true;
                break;
            }
        }
    }
    if(!isfound){
        cout<<"day la ma tran toan con so duong";
    }

    // cau 20
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0;i< n;i++){
        for(int j =0;j< m;j++){
            cin>>A[i][j];
        }
    }
    bool iseven = true;
    for(int i =0;i <n;i++){
        for(int j = 0;j < m;j++){
            if(A[i][j] % 2 != 0){
                cout<<"day khong phai ma tran toan so duong";
                iseven = false;
                break;
            }
        }
    }
    if(iseven){
        cout<<"day la ma tran toan so duong";
    }


    // cau 21
    int A[100][100];
    int n;
    cin>>n;
    // de co suoc ma tran tam giac tren thi ma tran phai la ma tran tam giac vuong

    for(int i=0;i< n;i++){
        for(int j=0;j <n;j++){
            cin>>A[i][j];
        }
    }

    // de xet ma tran tam giac tren thi bat buoc o tam giac duoi phai bang so 0,
    // neu ko thi loai
    bool isfound = false;
    for(int i = 0;i < n;i++){
        for(int j =0;j < n;j++){
            if(i > j && A[i][j] != 0){
                cout<<"day khong phai la ma tran tam giac tren";
                isfound = true;
                break;
            }
        }
    }
    if(!isfound){
        cout<<"day la ma tran tam giac tren";
    }    

    // cau 22
    int A[100][100];
    int n;
    cin>>n;
    for(int i =0;i < n;i++){
        for(int j = 0;j < n;j++)[
            cin>>A[i][j];
        ]
    }

    bool isfound = false;
    for(int i = 0;i < n;i++){
        for(int j =0;j <n;j++){
            if(i < j && A[i][j] != 0){
                cout<<"day khong phai la ma tran tam giac duoi";
                isfound = true;
                break;
            }
        }
        if(!isfound) break;
    }
    if(!isfound){
        cout<<"day la ma tran tam giac duoi";
    }

    // cau 23
    int A[100][100];
    int n;
    cin>>n;
    // de co suoc ma tran tam giac tren thi ma tran phai la ma tran tam giac vuong

    for(int i=0;i< n;i++){
        for(int j=0;j <n;j++){
            cin>>A[i][j];
        }
    }

    // de xet ma tran tam giac tren thi bat buoc o tam giac duoi phai bang so 0,
    // neu ko thi loai
    bool isfound = false;
    for(int i =0;i < n;i++){
        for(int j =0;j < n;j++){
            if(i + j < n-1 && A[i][j] != 0){
                cout<<"day khong phai la ma tran phu tren";
                isfound = true;
                break;
            }
        }
        if(isfound) break;
    }
    if(!isfound){
        cout<<"day la ma tran tam giac phu tren";
    }
    // cau 24
    int A[100][100];
    int n;
    cin>>n;
    for(int i =0 ;i < n;i++){
        for(int j =0 ;j <n;j++){
            cin>>A[i][j];
        }
    }
    bool isfound = false;
    int new_i = n - 1- j;
    int new_j = n - 1 - i;
    for(int i =0;i < n;i++){
        for(int j =0;j < n;j++){
            if(A[i][j] != A[new_i][new_j]){
                cout<<"day khong phai la ma tran doi xung qua duongcheo phu";
                isfound = true;
                break;
            }
        }
        if(isfound) break;
    }
    
    if(!isfound){
        cout<<"day la ma tran doi xung voi duong cheo phu";
    }

    // cau 25
    int A[100][100];
    int n;
    cin>>n;
    // de co suoc ma tran tam giac tren thi ma tran phai la ma tran tam giac vuong

    for(int i=0;i< n;i++){
        for(int j=0;j <n;j++){
            cin>>A[i][j];
        }
    }

    // cach de kiem tra ma tran hoan vi la ta su dung  bang cach la khi ta xet tung hang hoac tung cot cua ma tran thi toi da chi co the chua 1 so 1 duy nhat cho moi hang va moi cot
    bool isfound = true;
    for(int i =0;i < n;i++){
        int row = 0;
        for(int j = 0;j < n;j++){
            if(A[i][j] == 1 ){
                row++;
            }

            if(A[i][j] != 0 && A[i][j] != 1){
                isfound = false;
                break;
            }
        }
        if(row != 1){
            isfound= false;
            break;
        }
        if(!isfound) break;
    }

    if(isfound){
        for(int j = 0;j< n;j++){
            int col = 0; // bat dau tu dong nay ta tinh theo tung cot
            for(int i =0;i< n;i++){
                if(A[i][j] == 1){
                    col++;
                }

            }
            if(col != 1){
                isfound = false;
                break;
            }
            if(!isfound) break;
        }
    }


    if(!isfound){
        cout<<"day khong phai la ma tran chuyen vi";
    }
    else{
        cout<<"day la ma tran chuyen vi";
    }
    

    //chu de D
    // cau 26
    int A[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i< n;i++){
        for(int j=0;j <m;j++){
            cin>>A[i][j];
        }
    }

    // tinh tong theo tung dong
    cout<<"tong nhiet do theo tung ngay lan luot la: "<<endl;
    for(int i = 0;i < n;i++){
        int count = 0;
        for(int j = 0;j < m;j++){
            count += A[i][j];
        }
        cout<<count<<" ";
    }
    // cau 27
    int A[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i< n;i++){
        for(int j=0;j <m;j++){
            cin>>A[i][j];
        }
    }
    int max_diem = INT_MIN;
    for(int i =0;i < n;i++){
        for(int j = 0;j <m;j++){
            if(A[i][j] > max_diem){
                max_diem = A[i][j];
            }
        }
    }
    cout<<"so diem lon nhat co trong bang la : "<<max_diem;

    // cau 28
    
    int A[100][100];
    int n,m;
    cin>>n>>m;

    double diemtb[100]; // minh luu cac bien con the diem tung mon cho tung cot cua moi hoc sinh
    for(int i=0;i< n;i++){
        for(int j=0;j <m;j++){
            cin>>A[i][j];
        }
    }
    double diem_tb = 5.0;
    for(int j = 0;j < m;j++){
        double tong = 0;
        for(int i =0;i < n;i++){
            tong += A[i][j];
        }
        diemtb[j] = tong / n;

        if(diemtb[j] < diem_tb){
            cout<<"Diem trung binh cua hoc sinh duoi 5 diem la: "<<diemtb[j]<<" ";
        }
    }

    // cau 29
    int A[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i< n;i++){
        for(int j=0;j <m;j++){
            cin>>A[i][j];
        }
    }
    int max_pixel = INT_MIN;
    int row = 0;
    int col =0;
    for(int i =0;i < n;i++){
        for(int j = 0;j <m;j++){
            if(A[i][j] > max_pixel){
                max_pixel = A[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout<<"diem pixel sang nhat trong ma tran la:"<<max_pixel<<" o vi tri la "<<A[row][col];
    
    // cau 30

    int A[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i< n;i++){
        for(int j=0;j <m;j++){
            cin>>A[i][j];
        }
    }

    int vatcan = 0;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            if(A[i][j] == 1){
                vatcan++;
            }
        }
    }
    cout<<"Co tong cong la "<<vatcan<<" vat can co trong o ma tran";
    return 0; 
}