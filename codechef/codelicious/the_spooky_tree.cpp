#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> visited, a, scary;
int root;

int kthSmallest(vector<int> arr, int N, int K)
{
    // Create a max heap (priority queue)
    priority_queue<int> pq;
 
    // Iterate through the array elements
    for (int i = 0; i < N; i++) {
        // Push the current element onto the max heap
        pq.push(arr[i]);
 
        // If the size of the max heap exceeds K, remove the largest element
        if (pq.size() > K)
            pq.pop();
    }
 
    // Return the Kth smallest element (top of the max heap)
    return pq.top();
}

void dfs(int node, int depth) {
    if(visited[node]) return;
    visited[node] = 1;

    scary[root] += a[node]*depth; 
    for(int i : adj[node]) dfs(i, depth+1);
}

void solve() {
    int n, k;
    cin >> n >> k;

    a.clear();
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    adj.clear();
    adj.resize(n);
    for(int i = 0; i < n-1; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    scary.clear();
    scary.resize(n,0);
    for(int i = 0; i < n; i++) {
        visited.clear();
        visited.resize(n);
        root = i;
        dfs(i, 0);
    }
    cout << kthSmallest(scary, n, k) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}