#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if(n > 10) cout << s[0] << n-2 << s[n-1];
    else cout << s;
    cout << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}