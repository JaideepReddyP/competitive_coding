#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    if(-2 <= (x-y) && (x-y) <= 3) cout << "Yes";
    else cout << "No";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}