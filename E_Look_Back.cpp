#include<bits/stdc++.h>
#define int long long
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n < 2) cout << 0 << '\n';
    else {
        int cnt = 0;
        for(int i = 1; i < n; i++) {
            long double div = (long double)a[i-1]/a[i];
            int power = 32-__builtin_clz(div);
            if((int)div == 0) power = 0;
            if((div == (int)div) && isPowerOfTwo(div)) power--;

            a[i] = a[i] << power;
            cnt += power;
        }
        cout << cnt << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}