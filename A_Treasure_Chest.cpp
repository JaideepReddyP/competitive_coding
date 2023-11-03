#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    if(x > y) {
        cout << x;
    } else {
        int diff = y - x;
        if(k < diff) {
            cout << y + diff - k;
        } else {
            cout << y;
        }
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