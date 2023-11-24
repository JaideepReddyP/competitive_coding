#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = a[0];
    for(int i = 1; i < n; i++) {
        x ^= a[i];
    }
    int m = x;
    for(int i = 0; i < n; i++) {
        m = min(m, x^a[i]);
    }
    cout << m << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}