#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> e;
vector<int> visited;
int cycle_node;

int dfs_find_cycle_node(int b, int ignore) {
    if(visited[b]) return b;

    visited[b] = 1;
    int n = e[b].size();
    for(int i = 0; i < n; i++) {
        if(e[b][i] != ignore) {
            int node = dfs_find_cycle_node(e[b][i], b);
            if(node == -1) continue;
            else return node;
        } 
    }
    return -1;
}

int dfs_dist_to_cycle_node(int k) {
    if(k == cycle_node) return 0;

    visited[k] = 1;
    int min_dist = INT_MAX, n = e[k].size();
    for(int i = 0; i < n; i++) {
        if(!visited[e[k][i]]) {
            int dist = dfs_dist_to_cycle_node(e[k][i]);
            if(dist == -1) continue;
            else min_dist = min(min_dist, 1+dist);
        }
    }
    if(min_dist != INT_MAX) return min_dist;
    return -1;
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> ass;
    e.assign(n+1, ass);
    int temp1, temp2;
    for(int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        e[temp1].push_back(temp2);
        e[temp2].push_back(temp1);
    }

    if(a == b) {
        cout << "NO" << '\n';
        return;
    }

    visited.assign(n+1, 0);
    cycle_node = dfs_find_cycle_node(b, b);
    
    visited.assign(n+1, 0);
    int dist_a = dfs_dist_to_cycle_node(a);
    visited.assign(n+1, 0);
    int dist_b = dfs_dist_to_cycle_node(b);
    // cout << cycle_node << ' ' << dist_a << ' ' << dist_b << ' ';
    
    if(dist_a <= dist_b) cout << "NO";
    else cout << "YES";
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}