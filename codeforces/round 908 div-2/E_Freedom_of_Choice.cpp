#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int m;
    cin >> m;
    vector<int> n(m), l(m), r(m);
    vector<vector<int>> a, c;
    for(int i = 0; i < m; i++) {
        cin >> n[i] >> l[i] >> r[i];
        for(int j = 0; j < n[i]; j++) {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
        for(int j = 0; j < n[i]; j++) {
            int temp;
            cin >> temp;
            c[i].push_back(temp);
        }
    }
    
    int sum_l = 0, sum_r = 0;
    for(int i : l) sum_l += i;
    for(int i : r) sum_r += i;

    for(int i = sum_l; i <= sum_r; i++) {
        
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}