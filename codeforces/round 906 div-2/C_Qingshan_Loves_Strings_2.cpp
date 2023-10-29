#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n%2) {
        cout << -1 << '\n';
        return;
    } 

    vector<int> ans;
    int index = 0, cnt = 0;;
    while(index < n/2 && cnt <= 300) {
        if(s[index] == s[n-1-index]) {
            if(s[index] == '0') {
                ans.push_back(n-index);
                s.insert(n-index, "01");
            } else {
                ans.push_back(index);
                s.insert(index, "01");
            }
            cnt++;
            n += 2;
            // cout << s.substr(index, n-index) << '\n';
        } else {
            index++;
            // cout << s.substr(index, n-index) << '\n';
        }
        // cout << s.substr(index, n-(2*index)) << ' ' << ans.back() << ' ' << n << '\n';
    }
    if(cnt > 300) {
        cout << -1 << '\n';
    } else {
        cout << ans.size() << '\n';
        for(int i : ans) {
            cout << i << ' ';
        }
        cout << '\n';
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}