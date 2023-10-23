#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> dp(26, 0);
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(dp[s[i]-'a'] == 0) {
            cnt++;
            dp[s[i]-'a'] = 1;
        }
    }
    if(cnt%2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}