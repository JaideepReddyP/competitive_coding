#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> prefix(n+1, 0);
    for(int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i-1];

    int front = 0, end = 0;
    int sum = a[0];
    int maximum = sum;
    while(end < n-1) {
        if(sum < 0) {
            end++;
            front = end;
            sum = a[end];
            maximum = max(maximum, sum);
        } else {
            int last = abs(a[end]%2), next = abs(a[end+1]%2);
            // cout << last << ' ' << next << ' ';
            end++;
            if(last == next) {
                front = end;
                sum = a[end];
            } else {
                sum += a[end];
            }
            maximum = max(maximum, sum);
        }
        // cout << sum << '\n';
    }
    cout << maximum << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}