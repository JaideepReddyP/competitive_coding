#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int sum, temp_n = n;
    do {
        sum = 0;
        while(n > 0) {
            sum += n%10;
            n /= 10;
        }
        if(sum%k == 0) {
            cout << temp_n << '\n';
            break;
        } else {
            temp_n++;
            n = temp_n;
        }
    } while(sum % k);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}