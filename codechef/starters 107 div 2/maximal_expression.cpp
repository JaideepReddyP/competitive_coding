#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, k, nmk;

int f(int x) {
    int xmk = x%k;
    return xmk * ((n-x)%k);
}

void solve() {
    cin >> n >> k;
    nmk = n%k;

    int ans = INT_MIN, ans_i = 0;
    for(int i = 0; 2*i <= n; i++) {
        // cout << f(i) << ' ';
        if(ans < f(i)) {
            ans = f(i);
            ans_i = i;
        }
    }
    // cout << '\n';
    cout << ans_i << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}