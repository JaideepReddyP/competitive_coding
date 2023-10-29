#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int,int>> a(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i].first >> a[i].second;
        a[i].first--;
        a[i].second--;
    }

    // cout << 'h';
    vector<pair<int,int>> event;
    for(int i = 0; i < m; i++) {
        event.push_back({a[i].first, 1});
        event.push_back({a[i].second, 0});
    }

    sort(event.begin(), event.end());

    int e = event.size(), cnt = 0, sum = 0;
    int prev = 0;
    for(int i = 0; i < e; i++) {
        if(cnt == 0) {
            sum += event[i].first - prev;
        }
        if(event[i].second) {
            cnt++;
        } else {
            cnt--;
            prev = event[i].first;
        }
    }
    if(prev < n) sum += n-1-prev;

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}