#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;

    int x = 0;
    while(n--) {
        cin >> s;
        int plus = 0;
        for(int i = 0; i < 3; i++) {
            if(s[i] == '+') {
                plus = 1;
                break;
            }
        }
        if(plus) x++;
        else x--;
    }
    cout << x;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}