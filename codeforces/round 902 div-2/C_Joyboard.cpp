#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int ans = 0;
    if(k==1) {
        ans = 1;
    }else if(k == 2) {
        if(m <= n) {
            ans = m;
        } else {
            ans = n + ((m/n)-1);
        }
    } else if(k==3) {
        if(m>n) ans = (m-n) - ((m/n)-1);
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