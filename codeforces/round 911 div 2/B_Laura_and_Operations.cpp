#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    for(int i = 0; i < 3; i++) {
        cout << (((a[1] - a[2])&1)^1) << ' ';
        rotate(a.begin(), a.begin()+1, a.end());
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