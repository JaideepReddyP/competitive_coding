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
        vector<pair<int,int>> a;
        for(int i = 0; i < n; i++) {
            pair<int,int> p;
            cin >> p.first;
            p.second = i;
            a.push_back(p);
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[a[i].second] = n-i;
        }
        for(int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
}