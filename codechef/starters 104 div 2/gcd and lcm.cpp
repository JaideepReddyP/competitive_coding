#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    int a = max(x, y), b = min(x, y);
    int n;
    for(int i = 0; i < k; i++) {
        n = gcd(a, b);
        a = b;
        b = n;
        if(a == b) break;
    }
    cout << a+b << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}