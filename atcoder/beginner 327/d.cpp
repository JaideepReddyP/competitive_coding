#include<bits/stdc++.h>
#define int long long
using namespace std;

int m, n;

vector<int> x;
vector<set<int>> adj;

int dfs(int node, int val) {
    cout << node << ' ' << val << '\n';
    if(x[node] != val && x[node] != -1) {
        cout << 'b';
        return -1;
    }

    if(x[node] == -1) {
        cout << 'h';
        x[node] = val;

        for(auto edge_node : adj[node]) {
            cout << 'n';
            int ret = dfs(edge_node, !val);
            if(ret == -1) return -1;
        }
    }
    return 1;
}

void solve() {
    
    cin >> m >> n;
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) cin >> a[i].second;

    //
    x.clear();
    x.resize(m+1, -1);
    set<int> empt;
    adj.clear();
    adj.resize(m+1, empt);
    //

    for(auto p : a) {
        if(p.first == p.second) {
            cout << "No";
            return;
        }
        adj[p.first].insert(p.second);
        adj[p.second].insert(p.first);
    }

    //
    for(auto i : adj) {
        for(auto j : i) cout << j << ' ';
        cout << '\n';
    }
    cout << '\n';

    for(int i = 1; i <= m; i++) {
        if(x[i] != -1) continue;
        if(dfs(i, 0) == -1) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}


