#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> prefix(n+1, 0);
    for(int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i-1];

    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(n%i) continue;

        int minimum = prefix[i]-prefix[0], maximum = prefix[i]-prefix[0];

        for(int j = i; j <= n; j+=i) {
            int sum = prefix[j] - prefix[j-i];
            minimum = min(minimum, sum);
            maximum = max(maximum, sum);
        }

        ans = max(ans, maximum-minimum);
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}