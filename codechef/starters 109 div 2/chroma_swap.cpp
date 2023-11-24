#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), colorA(n), b(n), colorB(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> colorA[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> colorB[i];

    map<int, multiset<int>> dp;
    map<int, int> op;
    for(int i = 0; i < n; i++) {
        dp[colorA[i]].insert(a[i]);
        dp[colorB[i]].insert(b[i]);
        op[colorB[i]] = 1;
    }

    int val = -1;
    for(int i = 0; i < n; i++) {
        if(op[colorA[i]]) {
            multiset<int> s = dp[colorA[i]];
            while( (s.size()) && (*s.begin() < val) ) {
                s.erase(s.begin());
            }
            if(s.size() != 0) {
                a[i] = *s.begin();
                s.erase(s.begin());
            }
        }
        val = a[i];
    }
    for(int i : a) cout << i << ' ';

    for(int i = 1; i < n; i++) {
        if(a[i-1] > a[i]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}