#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans;
    cin >> n;
    ans = n;
    for(int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c < 2) ans--;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
}