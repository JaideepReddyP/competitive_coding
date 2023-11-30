#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int ans = INT_MAX;
    int p = a, q = b;
    while(q>0) {
        if(p%q == 0) {
            ans = min(ans, b-q);
            break;
        }
        q--;
        p++;
    }

    p = a; q = b;
    while(p>0) {
        if(p%q == 0) {
            ans = min(ans, a-p);
            break;
        }
        p--;
        q++;
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