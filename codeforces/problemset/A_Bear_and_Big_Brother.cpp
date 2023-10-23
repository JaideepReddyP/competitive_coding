#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int l, b;
    cin >> l >> b;

    for(int i = 1; i < 1000; i++) {
        l *= 3;
        b *= 2;
        if(l > b) {
            cout << i;
            return;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}