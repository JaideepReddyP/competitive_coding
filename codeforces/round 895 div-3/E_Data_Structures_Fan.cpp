#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        string s;
        cin >> s;

        int x0 = 0, x1 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') x0 ^= a[i];
            else x1 ^= a[i];
        }
        vector<int> pref(n+1);
        for(int i = 0; i < n; i++) pref[i+1] = pref[i]^a[i];

        int q;
        cin >> q;
        while(q--) {
            int op;
            cin >> op;
            if(op == 1) {
                int l, r;
                cin >> l >> r;
                x0 ^= pref[l-1]^pref[r];
                x1 ^= pref[l-1]^pref[r];
            }else if(op == 2) {
                int g;
                cin >> g;
                if(g) cout << x1;
                else cout << x0;
                cout << ' ';
            }
        }
        cout << '\n';
    }
}