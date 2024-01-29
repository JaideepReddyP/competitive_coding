#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int to_fill = 0, to_empty = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] != f[i]) {
            if(s[i] == '1' && f[i] == '0') to_empty++;
            else to_fill++;
        }
    }
    cout << max(to_empty, to_fill) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}