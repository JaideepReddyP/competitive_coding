#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    // dp
    vector<int> leading_zeros;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '0') leading_zeros.push_back(i);
    }
    //
    // cout << s << '\n';
    // for(int i : leading_zeros) cout << i << ' ';
    // cout << '\n';
    //

    // i
    int cnt = 0, i = 1;
    for(; i < n; i++) {
        while(leading_zeros.size() && leading_zeros.back() < i) {
            leading_zeros.pop_back();
        }
        if(s[i-1] == '0') {
            // cout << 'h';
            cout << cnt << ' ';
        } else if(leading_zeros.size()) {
            cnt += leading_zeros.back()-i+1;
            swap(s[leading_zeros.back()], s[i-1]);
            leading_zeros.pop_back();
            cout << cnt << ' ';
        } else break;
    }
    if(i == n && s[i-1] == '0') {
        cout << cnt << ' ';
        i++;
    }
    while( i++ <= n ) cout << -1 << ' ';
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}