#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    for(int i = 1; i <= 8; i++) {
        if( (s[1]-'0') == i) continue;
        cout << s[0] << i << '\n';
    }
    for(int i = 97; i <= 104; i++) {
        if( s[0] == char(i)) continue;
        cout << char(i) << s[1] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}