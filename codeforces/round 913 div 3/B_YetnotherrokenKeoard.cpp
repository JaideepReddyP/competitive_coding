#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int b = 0, B = 0;
    string ans = "";
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] == 'b') b++;
        else if(s[i] == 'B') B++;
        else {
            if(islower(s[i]) && b) {
                b--;
            } else if(isupper(s[i]) && B) {
                B--;
            } else {
                ans = s[i] + ans;
            }
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}