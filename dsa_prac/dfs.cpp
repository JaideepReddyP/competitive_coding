#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> vis;


void dfs(int node){
    if(vis[node]) return;

    cout << node << ' ';
    vis[node] = 1;

    for(int i: v[node]){
        dfs(i);
    }
}


int main(){
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edg(e); 

    for(int i = 0; i < e; i++) cin >> edg[i].first >> edg[i].second;

    v.resize(n+1);
    vis.assign(n+1, 0);

    for(int i = 0; i < e; i++){
        v[edg[i].first].push_back(edg[i].second);
        v[edg[i].second].push_back(edg[i].first); // undirected
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            vis[i] = 1;
        }
    }


}