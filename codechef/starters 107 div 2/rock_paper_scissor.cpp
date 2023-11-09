#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ///////////// HORRIBLE

    int cnta = 0, cntb = 0, draw = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            draw++;
        } else if( (a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R') ) {
            cnta++;
        } else {
            cntb++;
        }
    }

    if(cnta > cntb) {
        cout << 0 << '\n';
    } else {
        int ans = 0;
        while(cntb > 0) {
            if(cnta <= cntb) {
                cnta++;
                cntb--;
                ans++;
            } else {
                break;
            }
        }
        if(cnta > cntb) {
            cout << ans << '\n';
        } else {
            while(draw) {
                cnta++;
                ans++;
                draw--;
                if(cnta > cntb) break;
            }
            cout << ans << '\n';
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
