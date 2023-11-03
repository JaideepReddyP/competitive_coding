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

    int ans = n;
    for(auto p : a) {
        ans += fact(p.second);
    }

    vector<map<int, int>> tp(6);
    for(auto p : a) {
        tp[to_string(p.first).size()].insert(p);
    }

    for(auto p : tp[3]) {
        ans += fact(tp[1][abs((p.first/100) - sum(p.first%100))]);
        ans += fact(tp[1][abs(sum(p.first/10) - (p.first%10))]);
    }
    for(auto p : tp[5]) {
        ans += fact(tp[1][abs(sum(p.first/1000) - sum(p.first%1000))]);
        ans += fact(tp[1][abs(sum(p.first/100) - sum(p.first%100))]);
    }
    for(auto p : tp[3]) {
        p.first = sum(p.first);
    }
    for(auto p : tp[5]) {
        ans += fact(tp[3][abs(sum(p.first/1000) - sum(p.first%1000))]);
        ans += fact(tp[3][abs(sum(p.first/100) - sum(p.first%100))]);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}