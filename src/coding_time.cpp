/*
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long n;
    cin>>n;
    int factorial = 1;
    for(int i = 1; i <= n;i++){
        factorial *= i;
        
    }
    cout<<factorial;
    
    
    
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tìm số s = 1/(2+s)
    /*int n;
    cin>>n;
    double s = 1.0/2;
    for(int i = 0;i<n;i++){
        s = 1.0/(2+s);
    }

    cout<<s;
    
    /// cho 1 số có n chữ số  => tìm ra chữ số đầu tiên
    
    string array1;
    getline(cin,array1);
    for(int i = 0;i < array1.size();i++){
        if(array1[i] == array1[0]){
            cout<<array1[0];
            break;
        }
    }
}
*/
    /*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<string> grid(n);
    vector<pair<int,int>> crimes;
    
    // Đọc ma trận và lưu vị trí các vụ cướp
    for(int i = 0; i < n; i++){
        cin >> grid[i];
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '*'){
                crimes.push_back({i+1, j+1}); // 1-indexed
            }
        }
    }
    
    // Tìm vị trí thứ 4 bằng XOR properties
    int row4 = crimes[0].first ^ crimes[1].first ^ crimes[2].first;
    int col4 = crimes[0].second ^ crimes[1].second ^ crimes[2].second;
    
    cout << row4 << " " << col4 << endl;
    
    return 0;
}
    */



/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string result= "";
    for(int i = 1;i<=5;i++){
        int x;
        cin>>x;
        if(x == 1){
            result = to_string(i) + result;
        }
    }
    cout<<result;
    
    
    return 0;
}
    */
/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[10];
    int sum =0;
    for(int i = 0;i < 10;i++){
        cin>>a[i];
    }
    for(int i  =0;i< 10;i++){
        sum += a[i];
    }
    cout<<sum;
    
    
    return 0;
}
    */
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n % 2 == 0){
        return 0;
    }
    
    
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int sum =0;
    int middle = n/2;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
                bool isgood = false;
                if(i == j){
                    isgood = true;
                }
                else if(i + j == n-1){
                    isgood = true;

                }
                else if(i == middle){
                    isgood = true;
                }
                else if(j == middle){
                    isgood = true;
                }

            if(isgood){
                sum += matrix[i][j];
            }

            }
        
    }
    cout<<sum;

    return 0;
}
    */
/*
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>x>>n;

    double total= 0;
    double factorial = 1; // khởi tạo biến giai thừa 
    double luythua = 1; // Khở tạo biến lũy thừa

    for(int i = 1; i<= n;i++){
        factorial *= i; // ta cho biến giai thưa nhưng với từng i cho đến hết n ra được từng số hạng của giai thừa
        luythua *= x; // còn đối với luythua thì đầu tiên ta khởi tạo = 1 và cho nhân với x(input) lần lượt với nhau và lưu lại thành bien luythua  mới, cứ tiếp tục như thế cho đén khi i chạy hết sẽ ra từng số hạn của mỗi lần lũy thùa với số x
        total += luythua / factorial; // với mỗi lần giai thừa và luythua chạy 1 lần i thì sẽ chia và cộng lại cho total

    }
    cout<<fixed<<setprecision(2)<<total;
    
    
    return 0;
}
    */
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;

    vector<vector<int>> arrays(n);

    for(int i = 0;i<n;i++){
        int k;
        cin>>k;
        arrays[i].resize(k);
        for(int j =  0;j<k;j++){
            cin>>arrays[i][j];
    }
    }
    
    for(int querry = 0; querry < q;querry++){
        int i,j;
        cin>>i>>j;
        cout<<arrays[i][j]<<endl;
    }
    
    return 0;
}


