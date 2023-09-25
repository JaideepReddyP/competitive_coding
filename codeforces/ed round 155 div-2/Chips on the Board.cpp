#include<bits/stdc++.h>
using namespace std;

int k = 1000*1000*1000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long min_a = k, min_b = k, sum_a = 0, sum_b = 0;
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
            min_a = min(min_a, a[i]);
            sum_a += a[i];
        }
        for(long long i = 0; i < n; i++) {
            cin >> b[i];
            min_b = min(min_b, b[i]);
            sum_b += b[i];
        }

        cout << min((n*min_a)+sum_b, (n*min_b)+sum_a) << '\n';
    }
}