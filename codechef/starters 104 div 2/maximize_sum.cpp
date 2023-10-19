#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> s;
    int p = 0;
    s.push_back(0);
    for(int i = 1; i < n; i++) {
        while(a[s.back()] <= a[i] && s.back() > p) s.pop_back();
        s.push_back(i);
        if(a[i] >= a[p]) p = i;
        // for(int i : s) cout << i << ' ';
        // cout << endl;
    }

    int sum = 0, ns = s.size();
    for(int i = 0; i < ns-1; i++) {
        int mult = min(a[s[i]], a[s[i+1]]);
        int cnt = abs(s[i]-s[i+1])-1;
        sum += a[s[i]] + (mult * cnt);
    }
    sum += a[n-1];
    cout << sum << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}