#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int k;
            cin >> k;
            if(k == 1) {
                cout << abs(i-2)+abs(j-2);
                return;
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}