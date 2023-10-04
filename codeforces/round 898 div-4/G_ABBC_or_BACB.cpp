#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int b = 0, a_cnt = 0;
    multiset<int> h;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') a_cnt++;
        else {
            h.insert(a_cnt);
            a_cnt = 0;
            b++;
        }
    }
    if(a_cnt) h.insert(a_cnt);

    int ans = 0;
    for(auto it = h.rbegin(); it != h.rend() && b--; it++) ans += *it;
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}