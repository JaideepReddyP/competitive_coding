#include<bits/stdc++.h>
// #define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int num = stoi(s.substr(max(n-3, 0), n));
    
    int diff = num%8, last = int(s[n-1]-'0');
    if(diff){
        if(diff >= last) s[n-1] = char(8-diff+last+48);
        else s[n-1] = char(last-diff+48);
    }
    cout << s << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}