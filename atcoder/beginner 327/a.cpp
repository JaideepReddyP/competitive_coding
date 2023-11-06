#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 1; i < n; i++) {
        if( (s[i-1] == 'a' && s[i] == 'b') || (s[i-1] == 'b' && s[i] == 'a') ) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}