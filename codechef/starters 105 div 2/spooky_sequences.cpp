#include<bits/stdc++.h>
#define int long long
using namespace std;

int mod = 1000'000'000 + 7;

vector<vector<int>> adj, groups;
vector<int> visited;

void dfs(int node, int group) {
    if(visited[node]) return;

    visited[node] = 1;
    groups[group].push_back(node);

    for(int f : adj[node]) {
        dfs(f, group);
    }
}

int mult(int a, int b) {
    if(a == 0 || b == 0) return 1;
    int ans = 1;
    for(int i = a; i <=b; i++) {
        ans *= i;
        ans %= mod;
    }
    return ans;
}

int choose(int n, int r) {
    return mult(r+1, n)/mult(1, n-r);
}

void solve() {
    int n, m;
    cin >> n >> m;
    adj.clear();
    adj.resize(n);
    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    // adj.clear();
    // adj.resize(n);
    // for(int i = 0; i < m; i++) {
    //     adj[f[i].first].push_back(f[i].second);
    //     adj[f[i].second].push_back(f[i].first);
    // }

    visited.clear();
    visited.resize(n, 0);
    groups.clear();
    groups.resize(n);

    for(int i = 0; i < n; i++) {
        dfs(i, i);
    }
    ///////////////////////////////////////////
    int ans = 1, remain = n;
    for(int i = 0; i < n; i++) {
        int k = groups[i].size();
        if(!k) continue;

        map<int, int> rep;
        for(int f : groups[i]) {
            rep[a[f]]++;
        }
        //
        // for(auto const& [key, val] : rep) cout << key << ' ' << val << '\n';
        //
        int perm = 1;
        for(auto const& [key, val] : rep) {
            perm *= mult(1, val);
            perm %= mod;
        }
        //
        // cout << perm << '\n';
        //
        ans *= perm*choose(remain, k);
        //
        // cout << ans << '\n';
        // cout << '\n';
        //
        ans %= mod;
        remain -= k;
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