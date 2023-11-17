#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0, cnt = 0;
    for(auto i : s) {
        if(i != '?') {
            sum += (i - '0');
        } else cnt++;
    }
    int leading = (s[0]=='?');
    
    sum %= 9;
    sum = 9-sum;

    int ans = 1;
    if(!leading) {
        for(int i = 1; i < cnt; i++) {
            ans *= 10;
            ans++;
        }
    } else {
        for(int i = 1; i < cnt; i++) {
            ans *= 10;
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