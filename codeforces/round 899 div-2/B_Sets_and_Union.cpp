#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> k[i];
        for(int j = 0; j < k[i]; j++) {
            int temp; cin >> temp; a[i].push_back(temp);
        }
    }

    multiset<int> uni;
    for(auto v : a) {
        for(int i : v) uni.insert(i);
    }

    map<int, multiset<int>> cont;
    for(int i = 0; i < n; i++) {
        for(int e : a[i]) cont[e].insert(i);
    }

    for(auto i : cont) {
        
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}