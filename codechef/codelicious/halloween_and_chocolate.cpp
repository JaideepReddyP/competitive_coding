#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k, 0);
    while(n--) {
        int temp;
        cin >> temp;

        for(int i = 0; i < k; i++) a[i] += temp/k;
        temp %= k;
        int j = 0;
        while(temp--) a[j++]++;
    }
    for(int i : a) cout << i << ' ';
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}