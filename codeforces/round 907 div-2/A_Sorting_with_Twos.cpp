#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n < 4) {
        cout << "YES" << '\n';
        return;
    }
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 1; i < n; i *= 2) {
        int start = i, finish = min(2*i, n);
        if(!is_sorted(a.begin()+start, a.begin()+finish)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}