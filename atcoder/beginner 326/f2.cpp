#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> a;
string ans = "";
int n, x, y;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x >> y;
    a.assign(n, 0ll);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> v, h;
    for(int i = 0; i < n; i++) {
        if(i%2) h.push_back(a[i]);
        else v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    sort(h.begin(), h.end());

    int v_sum = 0, v_neg = 0;
    for(int i : v) v_sum += i;
    for(int i = 0; i < n; i++) {
        v_sum -= v[i];
        v_neg += v[i];

        if(v_sum - v_neg == 0) break;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}