#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int is_t = 1;
    if(m%2 == 0) is_t = 0;
    else {
        for(int i = 0; i < m-1; i++) {
            if(t[i] == t[i+1]) {
                is_t = 0;
                break;
            }
        }
    }

    for(int i = 0; i < n-1; i++) {
        if(s[i] == s[i+1]) {
            if(!is_t || (s[i] == t[0])){
                cout << "No" << '\n';
                return;
            }
        }
    }
    cout << "Yes" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}