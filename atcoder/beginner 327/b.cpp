#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

int power(int n) {
    int ans = 1;
    for(int i = 0; i < n; i++) ans *= n;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= 15; i++) {
        int p = power(i);
        if(n == p) {
            cout << i;
            return;
        }
    }
    cout << -1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << fixed;
    solve();
}