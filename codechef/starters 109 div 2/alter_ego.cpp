#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> even, odd;
    for(int i = 0; i < n; i++) {
        if(a[i]%2) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    if( (odd.size()%2) || (even.size()%2) ) {
        cout << -1 << '\n';
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int e = even.size(), o = odd.size();
    vector<int> first, second;
    for(int i = 0; i < e/2; i++) {
        first.push_back( (even[i]+even[e-1-i])/2 );
        second.push_back( abs(even[i]-even[e-1-i])/2 );
    }
    for(int i = 0; i < o/2; i++) {
        first.push_back( (odd[i]+odd[o-1-i])/2 );
        second.push_back( abs(odd[i]-odd[o-1-i])/2 );
    }
    for(int i : first) cout << i << ' ';
    for(int i : second) cout << i << ' ';
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}

