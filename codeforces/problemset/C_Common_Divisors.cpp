#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int temp, gcd = 0;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        gcd = __gcd(gcd, temp);
    }
    
    int cnt = 0, i = 1;
    for(; i*i <= gcd; i++)
        if(gcd%i == 0) cnt += 2;
    if(--i*i == gcd) cnt--;
    cout << cnt;
}