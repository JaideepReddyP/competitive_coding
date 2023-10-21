// assumption abt b[i] <= b[i-1] war incorrect
// below is correct ans
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; 
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << a[0];
    for(int i = 1; i < n; i++) {
        cout << ' ';
        int largest_multiple = m - (m%a[i]);
        for(int j = largest_multiple; j >= 0; j-=a[i]) {
            if(gcd(j, a[i-1]) == a[i]) {
                cout << j;
                break;
            }
        }
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}