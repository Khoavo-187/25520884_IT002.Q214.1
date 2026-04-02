#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    int x, *p;
    x = 3;
    p = &x;
    cout<<*p;
    x = 6;
    cout<<*p;
    *p = 9;
    cout<<*p;
    
    return 0;
}