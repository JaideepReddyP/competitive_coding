#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            cnt++;
            // cout << cnt << ' ';
        } else if(cnt || (i == n-1) ) {
            if(cnt >= 3) {
                cout << 2 << '\n';
                return;
            } else if (cnt == 2) {
                ans += 2;
            } else if (cnt == 1) {
                ans++;
            }
            cnt = 0;
        }
    }
    if(cnt >= 3) {
        cout << 2 << '\n';
        return;
    } else if (cnt == 2) {
        ans += 2;
    } else if (cnt == 1) {
        ans++;
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