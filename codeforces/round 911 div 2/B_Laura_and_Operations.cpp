#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if(abs(b-c)%2 == 0) cout << (abs(b-c)/2 <= (a+min(b,c)));
    else cout << 0;
    cout << ' ';

    if(abs(a-c)%2 == 0) cout << (abs(a-c)/2 <= (b+min(a,c)));
    else cout << 0;
    cout << ' ';

    if(abs(b-a)%2 == 0) cout << (abs(b-a)/2 <= (c+min(a,b)));
    else cout << 0;
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}