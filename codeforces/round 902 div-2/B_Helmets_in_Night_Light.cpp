#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].second;
    for(int i = 0; i < n; i++) cin >> a[i].first;

    sort(a.begin(), a.end());

    int ans = p, i = 0, cnt = 1;
    while(cnt < n) {
        // cout << a[i].first << ' ' << cnt << endl;
        if(a[i].first < p) {
            ans += a[i].first*min(n-cnt, a[i].second);
            cnt += a[i].second;
            i++;
        } else {
            ans += (n-cnt)*p;
            break;
        }
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