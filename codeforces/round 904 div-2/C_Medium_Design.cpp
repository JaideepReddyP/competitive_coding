#include<bits/stdc++.h>
#define int long long
using namespace std;

int max_cnt(vector<pair<int,int>> events) {
    int cnt = 0, ans = 0;
    for(auto i : events) {
        if(i.second) cnt--;
        else cnt++;
        ans = max(cnt, ans);
    }
    return ans;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> events_1, events_m;
    for(int i = 0; i < n; i++) {
        pair<int,int> p;
        cin >> p.first >> p.second;
        if(p.first != 1) {
            events_1.push_back(make_pair(p.first, 0));
            events_1.push_back(make_pair(p.second, 1));
        }
        if(p.second != m) {
            events_m.push_back(make_pair(p.first, 0));
            events_m.push_back(make_pair(p.second, 1));
        }
    }
    sort(events_1.begin(), events_1.end());
    sort(events_m.begin(), events_m.end());

    cout << max(max_cnt(events_1), max_cnt(events_m)) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}