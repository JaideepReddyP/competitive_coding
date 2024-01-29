#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int sum = 0;
    for(int i : a) sum += i;

    vector<int> suffix(n+1, 0);
    for(int i = n-1; i >= 0; i--) {
        suffix[i] = suffix[i+1] + a[i];
    }

    int ans = INT_MIN;
    for(int i = n-1; i >= x && n-i ; i++) {

    }

    // cout << k << ' ' << x << '\n';
    // for(int i = 0; i < n; i++) cout << a[i] << ' ';
    // cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}