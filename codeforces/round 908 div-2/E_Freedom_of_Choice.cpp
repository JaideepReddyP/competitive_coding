#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int m;
    cin >> m;
    vector<int> n(m), l(m), r(m);
    vector<map<int, int>> a;
    for(int i = 0; i < m; i++) {
        cin >> n[i] >> l[i] >> r[i];

        vector<int> a_temp(n[i]);
        for(int j = 0; j < n[i]; j++) cin >> a_temp[j];
        for(int j = 0; j < n[i]; j++) cin >> a[i][a_temp[j]];
    }
    
    int sum_l = 0, sum_r = 0, sum_n = 0;
    for(int i : l) sum_l += i;
    for(int i : r) sum_r += i;
    for(int i : n) sum_n += i;

    vector<int> sum_freq(m);
    for(int i = 0; i < m; i++) {
        int s_f = 0;
        for(auto p : a[i]) {
            s_f += p.second;
        }
        sum_freq[i] = s_f;
    }

    if(sum_r-sum_l > sum_n) {
        cout << 0 << '\n';
        return;
    }

    int ans = INT_MAX;
    for(int i = sum_l; i <= sum_r; i++) {
        int ans_i = 0;
        for(int j = 0; j < m; j++) {
            if(a[j][i] > 0) {
                
            }
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