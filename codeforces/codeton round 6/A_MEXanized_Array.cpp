#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if(k > x+1 || k > n) {
            cout << -1 << '\n';
            continue;
        }

        int ans = (k-1)*k/2;
        if(k==x) x--;
        ans +=  (n-k)*x;

        cout << ans << '\n';
    }
}