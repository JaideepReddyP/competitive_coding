#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> arr;
vector<int> vis;
vector<vector<int>> v;

int curr_skill;
int curr_cost;

void dfs(int x) {
    if (vis[x]) {
        return;
    }
    curr_skill += arr[x].first;
    curr_cost += arr[x].second;
    vis[x] = 1;
    for (int i : v[x]) {
        dfs(i);
    }
}

int main() {
    

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            curr_skill = 0;
            curr_cost = 0;
            dfs(i);

        }
    }
}