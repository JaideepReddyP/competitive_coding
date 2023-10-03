#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> a;
    int temp, m = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(a.find(temp) != a.end()) {
            m = min(i-a[temp]+1, m);
        }
        a[temp] = i;
    }
    if(m == INT_MAX) cout << -1;
    else cout << m;
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}