#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;

    int b = x%k, g = (n-x)%k;
    cout << abs(b-g) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}