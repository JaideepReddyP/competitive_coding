#include<bits/stdc++.h>
#define int long long
using namespace std;

int mod = 1000'000'000 + 7;

int mult(int a, int b) {
    return (a*b)%mod;
}
int sum(int a, int b) {
    return (a+b)%mod;
}

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    int a = max(x, y), b = min(x, y);

    int top = b, bot = 1;
    vector<int> arr(a, 1);
    for(int i = 1; i < a; i++){
        arr[i] = mult(arr[i-1], top);
        arr[i] /= bot;
        top++;
        bot++;
    }
    // for(int i = 0; i < a; i++) cout << arr[i] << ' ';
    // cout << '\n';

    top = a;
    bot = 1;
    vector<int> brr(b, 1);
    for(int i = 1; i < b; i++){
        brr[i] = mult(brr[i-1], top);
        brr[i] /= bot;
        top++;
        bot++;
    }
    // for(int i = 0; i < b; i++) cout << brr[i] << ' ';
    // cout << '\n';

    int ans = 0;
    for(int i = 0; i < a; i++) ans = sum(ans, arr[i]);
    for(int i = 0; i < b; i++) ans = sum(ans, brr[i]);

    cout << mult(ans, k) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}
