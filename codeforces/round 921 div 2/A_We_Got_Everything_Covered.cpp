#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s = "", alpha = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < n; i++) s = s + alpha.substr(0, k);
    cout << s << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}
