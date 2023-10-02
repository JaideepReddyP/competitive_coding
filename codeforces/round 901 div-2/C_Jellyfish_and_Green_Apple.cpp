#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int cnt = 0;
        while(true) {
            if(n%m) {
                if(m%2) {
                    cout << -1 << '\n';
                    break;
                } else {
                    cnt++;
                    m /= 2;
                }
            } else {
                cuts(n, m, cnt);
                break;
            }
        }
    }
}