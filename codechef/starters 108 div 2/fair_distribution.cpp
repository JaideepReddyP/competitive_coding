#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
        // cout << i;
        if(s[i] == '0') a += 1;
        else b += 1;
    }
    // cout << a << ' ' << b << endl;
    if( (abs(a-b)) > 1 ) cout << "No";
    else {
        int cnt = 1;
        for(int i = n-1; i > 0; i--) {
            if(s[i] != s[i-1]) break;
            cnt++;
        }
        int suma = 0, sumb = 0;
        if(s[n-1] == '0') {
            suma += cnt*n;
            a -= cnt;
        } else {
            sumb += cnt*n;
            b-= cnt;
        }
        suma += a;
        sumb += b;

        if(abs(suma-sumb) > n) cout << "NO";
        else cout << "YES";
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}