#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int,vector<int>> dist;
    for(int i = 0; i < n; i++) {
        dist[a[i]].emplace_back(i);
    }

    int m = INT_MAX, ans = a[0];
    for(auto [clan, vect] : dist) {
        int cnt = max(vect.front(), n-1-vect.back());
        for(int i = 1; i < vect.size(); i++) {
            cnt = max(cnt, (vect[i]-vect[i-1])/2);
        }

        if(cnt < m) {
            m = cnt;
            ans = clan;
        } else if(cnt == m) {
            ans = min(ans, clan);
        }
    }

    cout << ans << ' ' << m << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}