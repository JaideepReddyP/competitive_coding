#include<bits/stdc++.h>
using namespace std;

long long fact(long long a) {
    long long ans = 1;
    while(a) {
        ans *= a--;
        ans %= 998244353;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long n = s.size();

        if(n == 1) {
            cout << 0 << ' ' << 1 << '\n';
            continue;
        }

        long long ops = 0, permut = 1;
        char bit = s[0];
        long long cnt = 1;
        for(long long i = 1; i < n; i++) {
            if(s[i] == bit) {
                cnt++;
            } else {
                ops += cnt-1;
                cnt = 1;
                bit = (bit=='1')?'0':'1';
            }
        }
        if(cnt > 1) ops += cnt-1;
        cout << ops << ' ' << fact(ops+1) << '\n';
    }
}

