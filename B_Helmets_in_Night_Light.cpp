#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int,int>> s(n);
    for(int i = 0; i < n; i++) {
        s[i] = make_pair(a[i]*b[i], i);
    }
    sort(s.begin(), s.end());

    for(int i = 0; i < n; i++) cout << s[i].first << ' ' << s[i].second << '\n';
    cout << endl;

    int ans = 0, cnt = n;
    for(int i = 0; i < cnt; i++) {
        int it = s[i].second;
        // cout << it << ' ';
        if(a[it]+1 >= n) {
            cout << "yes ";
            n--;
            ans += n*b[it] + p;
            cout << ans << ' ' << n << endl;
            break;
        } else {
            cout << "no ";
            n--;
            ans += s[i].first + p;
            n -= a[it];
            cout << ans << ' ' << n << endl;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}