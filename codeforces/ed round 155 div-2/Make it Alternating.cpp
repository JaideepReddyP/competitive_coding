#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    if(n == 1) {
        cout << 0 << ' ' << 1 << '\n';
        return;
    }

    vector<int> a;
    int sum = 0, current = s[0], cnt = 1;
    for(int i = 1; i < n; i++) {
        cout << current << ' ';
        if(s[i] == current) cnt++;
        else {
            current = current=='0'?'1':'0';
            if(cnt > 1) {
                a.push_back(cnt-1);
                sum += cnt-1;
            }
            cnt = 1;
        }
    }
    if(cnt > 1) a.push_back(cnt-1);

    cout << sum << ' ';

    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}