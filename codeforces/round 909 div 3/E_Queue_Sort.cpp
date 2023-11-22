#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    auto minimum = min_element(a.begin(), a.end());

    auto p = minimum;
    while(p != prev(a.end())) {
        if(*p > *next(p)) {
            cout << -1 << '\n';
            return;
        }
        p = next(p);
    }
    cout << distance(a.begin(), minimum) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}