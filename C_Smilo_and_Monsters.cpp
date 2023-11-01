#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int x = 0, cnt = 0;
    while(a.size() > 1) {
        for(int i : a) cout << i << ' ';
        cout << '\n';
        
        if(*a.rbegin() == x) {
            a.pop_back();
            x = 0;
        } else {
            *a.begin() = *a.begin() - 1;
            x++;
        }

        if(*a.begin() == 0) a.erase(a.begin());

        cnt++;
    }

    if(a.size()) {
        
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}
