#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> f;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    if(f.size() > 2) {
        cout << "No" << '\n';
    } else if(f.size() == 1) {
        cout << "Yes" << '\n';
    } else {
        int p = f.begin()->second, q = f.rbegin()->second;
        if( (n%2 && abs(p-q) >1) || (n%2==0 && abs(p-q)>0) ) {
            cout << "No" << '\n';
        } else {
            cout << "Yes" << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}