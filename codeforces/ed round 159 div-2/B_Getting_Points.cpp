#include<bits/stdc++.h>
#define int long long
using namespace std;

int ceiling(int a, int b) {
    if(a <= 0) return 0;
    return ((a-1)/b) + 1;
}

void solve() {
    int n, P, l, t;
    cin >> n >> P >> l >> t;

    int ans = 0;
    int tasks = ceiling(n, 7);
    int binary_task_points = (tasks/2)*(l+(2*t));
    // cout << binary_task_points << ' ';
    if(P > binary_task_points ) {
        ans += tasks/2;
        P -= binary_task_points;
        if(tasks%2) {
            ans++;
            P -= (l+t);
        }
        if(P > 0) {
            ans += ceiling(P, l);
        }
    } else {
        // cout << 'h';
        ans += ceiling(P, (l+(2*t)));
    }
    cout << n-ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}