#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int,int> freq;
    for(int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    freq[2] += freq[1];
    freq[1] = 0;

    int ans = 0;
    for(auto p : freq) {
        ans += p.second * (p.second - 1) / 2;
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