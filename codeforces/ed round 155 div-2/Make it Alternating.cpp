#include<bits/stdc++.h>
#define int long long
using namespace std;

int mod = 998'244'353;

int mult(int a, int b) {
    return (a*b)%mod;
}

void solve() {
    string s;
    cin >> s;
    int prod = 1, groups = 0, n = s.size(), cnt = 0;
    char curr = s[0];
    for(int i = 0; i < n; i++) {
        if(s[i] == curr) cnt++;
        else {
            prod = mult(prod,cnt);
            groups++;
            cnt = 1;
            curr = (curr=='0')? '1':'0';
        }
    }
    if(cnt) {
        groups++;
        prod = mult(prod,cnt);
    }
    for(int i = 1; i <= n-groups; i++) prod = mult(prod, i);

    cout << n-groups << ' ' << prod << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}