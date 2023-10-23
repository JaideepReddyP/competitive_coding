#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(4, 0);
    for(int i = 0; i < n; i+=2) {
        a[s[i]-'0']++;
    }
    string ans = "";
    for(int i = 1; i < 4; i++) {
        while(a[i]--) {
            ans += to_string(i) + '+';
        }
    }
    cout << ans.substr(0, ans.size()-1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}