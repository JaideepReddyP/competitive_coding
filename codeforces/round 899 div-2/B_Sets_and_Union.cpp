#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<set<int>> a(n);
        map<int, set<int>> unique;

        for(int i = 0; i < n; i++) {
            int m;
            cin >> m;
            set<int> temp;
            for(int j = 0; j < m; j++) {
                int k;
                cin >> k;
                temp.insert(k);
                unique[k].insert(i);
            }
            a[i] = temp;
        }
        // remove complete subsets form list of sets
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(j==i) continue;
        //         int subset = true;
        //         if(a[j].size() >= a[i].size()) {
        //             for(int k : a[i]) {
        //                 if(a[j].find(k) == a[j].end()) {
        //                     subset = false;
        //                     break;
        //                 }
        //             }
        //         }
        //         if(subset) {
        //             for(int j : a[i]) {
        //                 unique[j].erase(i);
        //             }
        //             a.erase(a.begin()+i);
        //         }
        //     }
        // }
        // for(auto i : unique) cout << 
        
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j : a[i]) {
                if(unique[j].size() == 1) cnt++;
            }
            if(cnt) ans = min(ans, cnt);
        }
        cout << unique.size()-ans << '\n';
    }
}