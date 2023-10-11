#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> ones(k,0), zeros(k,0);
    for(int i = 0; i < k; i++) {
        for(int j = i; j < n; j+=k) {
            if(s[j] == '1') ones[i]++;
            else zeros[i]++;
        }
    }
    int ansz = 0, anso = 0;
    for(int i = 0; i < k; i++) {
        ansz += (ones[i]/2) + (2*(ones[i]%2));
        if(ones[i]) {
            anso += zeros[i];
        } else {
            anso = INT_MAX;
        }
    }
    cout << min(ansz, anso) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}