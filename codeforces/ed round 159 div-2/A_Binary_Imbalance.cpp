#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}