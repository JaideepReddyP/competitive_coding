#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;

    int left = (y-1)*n, right = (m-y)*n,
        top = (x-1)*m, bottom = (n-x)*m;

    int k = max(max(left,right), max(top, bottom));
    cout << k << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}