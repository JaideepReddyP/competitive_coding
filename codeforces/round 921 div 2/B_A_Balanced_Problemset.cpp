#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int total, sub_count;
    cin >> total >> sub_count;

    int ans = 1;
    for(int balance = 1; balance*balance < total; balance++) {
        if(total%balance == 0) {
            if(total/balance >= sub_count) ans = max(ans, balance);
            if(balance >= sub_count) ans = max(ans, total/balance);
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}