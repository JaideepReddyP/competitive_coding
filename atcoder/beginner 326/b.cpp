#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a, b, c;
    int temp_n = n;

    c = n%10;
    n /= 10;
    b = n%10;
    n /= 10;
    a = n;

    while(a*b != c) {
        temp_n++;
        
        n = temp_n;
        c = n%10;
        n /= 10;
        b = n%10;
        n /= 10;
        a = n;
    }
    cout << temp_n; 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}