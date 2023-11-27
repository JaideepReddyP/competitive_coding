#include<bits/stdc++.h>
#define int long long
using namespace std;

int least(vector<pair<int,int>> &a, string &s, int node) {
    if(node == 0) return INT_MAX;
    if( (a[node].first == 0) && (a[node].second == 0) ) {
        return 0;
    }
    int left = least(a, s, a[node].first) + (s[node-1]!='L');
    int right = least(a, s, a[node].second) + (s[node-1]!='R');

    return min(left, right);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int,int>> a(n+1, {0,0});
    for(int i = 1; i < n+1; i++) {
        cin >> a[i].first >> a[i].second;
    }

    cout << least(a, s, 1) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}