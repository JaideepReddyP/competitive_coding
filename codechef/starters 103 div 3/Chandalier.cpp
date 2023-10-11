#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), w(n);
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cout << max(a[i]-w[i], 0ll) << ' ';
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}

122 179 269 184 250 104 455
398 203 318 340 312 489 464

276 24  49  156 62  385 9