#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string r, c;
    cin >> r >> c;

    vector<vector<char>> a(n, vector<char>(n, '.'));

    




    for(auto i : a) {
        for(char j : i) cout << j;
        cout << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}