#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    multiset<pair<int,int>> a, b;
    while(n--) {
        char s;
        cin >> s;
        int l, r;
        cin >> l >> r;
        if(s == '+') {
            // cout << 'p';
            a.insert({l,r});
            b.insert({r,l});
        } else {
            // cout << 'm';
            a.erase(a.find({l,r}));
            b.erase(b.find({r,l}));
        }
        // for(auto i : a) cout << i.first << ' ' << i.second << '\n';
        

        if(a.size() < 2) {
            cout << "NO" << '\n';
        } else {
            if(a.rbegin()->first > b.begin()->first) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}