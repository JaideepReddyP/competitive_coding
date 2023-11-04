#include<bits/stdc++.h>
#define int long long
using namespace std;

// int N = 2*10'001;
// vector<int> fact(N);

int fact(int i) {
    int ans = 1;
    while(i--) {
        ans *= i;
    }
    return ans;
}

int sum(int num) {
    int ans = 0;
    while(num) {
        ans += num%10;
        num /= 10;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    map<int,int> a;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a[temp]++;
    }

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}