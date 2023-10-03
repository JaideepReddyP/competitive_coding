#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, g, b;
    cin >> n >> g >> b;
    int n0 = n;
    n = (n/2) + (n%2);
    int ans = (n/g)*(g+b);
    n %= g;
    if(n) ans += n;
    else ans -= b;
    cout << max(ans, n0) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}