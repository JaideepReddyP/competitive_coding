#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    vector<int> a(10);
    cin >> a[9];
    int m = INT_MAX, mi;
    for(int i = 0; i < 9; i++) {
        cin >> a[i];
        if(a[i] < m) {
            m = a[i];
            mi = i;
        }
    }
    if(a[9] < m) {
        cout << 1;
        a[9]++;
        while(a[9]--) cout << 0;
    }
    else {
        m++;
        mi++;
        while(m--) cout << mi;
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