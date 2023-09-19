#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans(k+1, 0);

        map<int, set<int>> index;
        for(int i = 0; i<n; i++) {
            index[a[i]].insert(i);
        }

        int left=INT_MAX, right=-1;
        for(auto it = index.rbegin(); it != index.rend(); it++) {
            left = min(left, *it->second.begin());
            right = max(right, *it->second.rbegin());
            // cout << left << ' ' << right << '\n';
            ans[it->first] = (right-left+1)*2;
        }

        for(int i = 1; i <= k; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}