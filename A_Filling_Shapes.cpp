#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> dp;

int count(int n) {
    if(n < 0) return 0;
    else if(n < 2) return 1;
    // else if(n == 2 || n == 3) return 2;

    if(!dp[n]) dp[n] = (2*count(n-2)) + count(n-4);
    return dp[n];
}

void solve() {
    int n;
    cin >> n;
    dp.resize(n+1, 0);

    cout << count(n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}