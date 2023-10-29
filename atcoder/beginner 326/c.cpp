#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    // for(int i : a) cout << i << ' ';
    // cout << '\n';

    int p1 = 0, p2 = -1, cnt = 0, ans = cnt;
    while(++p2 < n) {
        
        if(a[p2]-a[p1] < m) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            p1++;
        }
        // cout << cnt << ' ';
    }
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}