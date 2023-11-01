#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> rot;
vector<vector<int>> layer;

void solve() {
    int n;
    cin >> n;
    vector<int> empt;
    adj.clear();
    adj.assign(n, empt);
    rot.clear();
    rot.assign(n, 0);

    for(int i = 0; i < n-1; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        rot[r] = 1;
        adj[l].push_back(r);
    }

    int r;
    for(int i = 0; i < n; i++) {
        if(!rot[i]) {
            r = i;
            break;
        }
    }

    layer.clear();
    layer.assign(n, empt);
    layer[0].push_back(r);
    for(int i = 0; !layer[i].empty(); i++) {

        for(int node : layer[i]) {
            for(int j : adj[node]) {
                layer[i+1].push_back(j);
            }
        }
    }

    vector<int> cnt;
    for(int i = 0; !layer[i].empty(); i++) {
        cnt.push_back(layer[i].size());
    }

    vector<int> ans(n, 0);
    ans[0] = cnt[0];
    ans[1] = cnt[1];
    for(int i = 2; i < n; i++) {
        
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}