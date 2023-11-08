#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end(), greater<int>());

    // vector<int> sub = LIS(a);

    int p = 0, q = 0;
    while( (p < n) && (q < m) ) {
        if(a[p] > b[q]) {
            cout << a[p] << ' ';
            p++;
        } else {
            cout << b[q] << ' ';
            q++;
        }
    }
    while(p < n) {
        cout << a[p] << ' ';
        p++;
    }
    while(q < m) {
        cout << b[q] << ' ';
        q++;
    }
    cout << '\n';

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}