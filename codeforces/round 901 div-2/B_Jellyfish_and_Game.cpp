#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        vector<long long> a(n), b(m);
        long long sum_a = 0;
        long long min_a = INT_MAX, min_b = INT_MAX;
        long long max_a = -1, max_b = -1;
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
            sum_a += a[i];
            min_a = min(min_a, a[i]);
            max_a = max(max_a, a[i]);
        }
        for(long long i = 0; i < m; i++) {
            cin >> b[i];
            min_b = min(min_b, b[i]);
            max_b = max(max_b, b[i]);
        }
        // loop 1
        if(min_a < max_b)
            sum_a += max_b - min_a;
        long long odd = sum_a;

        // loop 2
        sum_a += min(min_b, min_a) - max(max_a, max_b);
        long long even = sum_a;
        
        if(k%2) cout << odd;
        else cout << even;
        cout << '\n';
    }
}
