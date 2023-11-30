#include<bits/stdc++.h>
#define int long long
using namespace std;

int LIMIT = 1'000'001;
vector<int> prime(LIMIT, 1);

void seive() {
    int p = 2;
    for(int p = 2; p*p < LIMIT; p++)
        if(prime[p])
            for (int i = p * p; i < LIMIT; i += p) 
                prime[i] = 0;

    p = LIMIT-1;
}

void solve() {
    int h;
    cin >> h;

    int atk = 1, cnt = 0;
    while(h > 0) {
        if(prime[h]) {
            cout << cnt+1 << '\n';
            return;
        }
        h -= atk;
        atk *= 2;
        cnt++;
    }
    if(h == 0) cout << cnt << '\n';
    else cout << -1 << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    seive();

    int t;
    cin >> t;
    while(t--) solve();
}