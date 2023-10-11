#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    vector<int> a(3), b(3);
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int alice = (a[2]*100)+(a[1]*10)+(a[0]), bob = (b[2]*100)+(b[1]*10)+(b[0]);

    if(alice>bob) cout << "Alice";
    else if(alice<bob) cout << "Bob";
    else cout << "Tie";
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}