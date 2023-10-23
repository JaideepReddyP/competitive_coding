#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) if(a[i] >= a[k-1] && a[i] > 0) cnt++;
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}