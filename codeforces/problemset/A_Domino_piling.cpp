#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;

    if(m%2 && n%2) {
        cout << ((m*n)-1)/2;
    } else {
        cout << n*m/2;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}