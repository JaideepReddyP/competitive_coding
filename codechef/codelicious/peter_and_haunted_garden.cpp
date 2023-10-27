#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int check = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '_') {
            cout << i+1 << ' ';
            check = 1;
        }
    }
    if(!check) cout << -1;
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}