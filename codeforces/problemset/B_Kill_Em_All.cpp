#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, r;
    cin >> n >> r;
    set<int> a;
    int temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        a.insert(temp);
    }
    int diff = 0, ans = 0;
    for(auto it = a.rbegin(); it != a.rend(); it++) {
        if(*it - diff <= 0) break;
        diff += r;
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