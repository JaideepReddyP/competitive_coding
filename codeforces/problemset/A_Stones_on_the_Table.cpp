#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) cnt++;
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}