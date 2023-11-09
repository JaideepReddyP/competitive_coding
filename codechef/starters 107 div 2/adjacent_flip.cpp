#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    int cnt1 = 0;
    for(char i : a) if(i == '1') cnt1++;
    if(n%2 && cnt1%2) {
        cout << "No\n";
        return;
    }

    char
    for(int i = 1; i < n; i++)

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}
