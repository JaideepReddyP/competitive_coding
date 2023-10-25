#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum%n) {
        cout << "No\n";
        return;
    }
    int can = sum/n;
    for(int i = 0; i < n; i++) {
        if((can-a[i]) % 2) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}