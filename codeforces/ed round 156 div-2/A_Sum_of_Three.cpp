#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n < 7 || n == 9) {
        cout << "NO\n";
        return;
    }else {
        cout << "YES\n";
    }

    if(n%3 == 0) {
        cout << 1 << ' ' << 4 << ' ' << n-5; // 1 4 4
    } else {
        cout << 1 << ' ' << 2 << ' ' << n-3;
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