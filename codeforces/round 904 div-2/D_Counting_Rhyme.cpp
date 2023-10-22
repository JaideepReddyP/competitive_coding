#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if(a[0] == 1) {
        cout << 0 << '\n';
        return;
    }

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}