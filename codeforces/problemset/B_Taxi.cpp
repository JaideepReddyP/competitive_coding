#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a=0, b=0, c=0, ans = 0, temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(temp==1) a++;
        else if(temp==2) b++;
        else if(temp==3) c++;
        else ans++;
    }
    ans += c;
    a -= c;
    ans += b/2;
    if(b%2) {
        ans++;
        a-=2;
    }
    if(a>0) ans += (a%4)?a/4+1:a/4;
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}