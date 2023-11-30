#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int curr = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(curr < a[i]) {
            ans += a[i] - curr;
        }
        curr = a[i];
    }
    cout << ans-1 << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}


