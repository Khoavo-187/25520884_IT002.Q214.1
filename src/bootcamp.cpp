/*
#include <iostream>


using namespace std;
int main(){
    int c,h;
    cin>>c>>h;
    if(c >= 2*h){
        cout<<(float) 1/2 * c*h;
    }
    else{
        cout<<-1;
    }
    return 0;
}
    */
// cấp số nhân và cộng
/*
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef __int128_t i128;


int main(){

    ll q,r,k,t;
    set<ll> s1,s2;
    set<i128> sr;
    cin>>q>>r; r--;
    ll r1= 0 ,r2 = 0;
    k =1;

    while(k*k<=q){
        if(q%k == 0){
            s1.insert(k);s1.insert(q/k);
        }
        k++;
    }
    k =1;
    while(k*k <= r){
        if(r%k == 0){
            s2.insert(k);
            s2.insert(r/k);
        }
        k++;
    }
    for(ll x : s1)
        for (ll y : s2){
            t= (i128) x*y;
            sr.insert(t);

        }
    cout<<sr.size();

    




}
    */

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> adj;
vector<int> parent;
vector<int> depth;
vector<int> subtree_size;
vector<int> leaves;

void dfs(int node, int par, int d) {
    parent[node] = par;
    depth[node] = d;
    subtree_size[node] = 1;
    
    for (int neighbor : adj[node]) {
        if (neighbor != par) {
            dfs(neighbor, node, d + 1);
            subtree_size[node] += subtree_size[neighbor];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;
    cin >> n >> t;
    
    // Khởi tạo các vector
    adj.resize(n + 1);
    parent.resize(n + 1);
    depth.resize(n + 1);
    subtree_size.resize(n + 1);
    
    // Đọc các cạnh và xây dựng cây
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // DFS từ nút 1 (gốc)
    dfs(1, -1, 0);
    
    // Tìm các nút lá
    for (int i = 1; i <= n; i++) {
        if ((int)adj[i].size() == 1 && i != 1) {
            // Nút lá (không phải gốc)
            leaves.push_back(i);
        } else if (i == 1 && (int)adj[i].size() == 0) {
            // Trường hợp đặc biệt: cây chỉ có 1 nút
            leaves.push_back(i);
        }
    }
    sort(leaves.begin(), leaves.end());
    
    // Xử lý các truy vấn
    for (int i = 0; i < t; i++) {
        int query_type;
        cin >> query_type;
        
        if (query_type == 1) {
            // In ra cha của x
            int x;
            cin >> x;
            if (parent[x] == -1) {
                cout << -1 << "\n";
            } else {
                cout << parent[x] << "\n";
            }
        } 
        else if (query_type == 2) {
            // Tìm khoảng cách từ gốc đến tất cả đỉnh
            for (int j = 1; j <= n; j++) {
                cout << depth[j];
                if (j < n) cout << " ";
            }
            cout << "\n";
        } 
        else if (query_type == 3) {
            // In tất cả đỉnh lá
            for (int j = 0; j < (int)leaves.size(); j++) {
                cout << leaves[j];
                if (j < (int)leaves.size() - 1) cout << " ";
            }
            cout << "\n";
        } 
        else if (query_type == 4) {
            // In số lượng đỉnh trong cây con gốc x
            int x;
            cin >> x;
            cout << subtree_size[x] << "\n";
        }
    }
    
    return 0;
}

