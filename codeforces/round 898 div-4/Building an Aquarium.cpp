#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long water = 0;
        long long i = 1;
        for(; i < n; i++) {
            long long k = i*(a[i]-a[i-1]);
            if(water + k > x) {
                break;
            }
            water += k;
        }
        i--;

        if(i >= n-1) cout << a[i]+((x-water)/n);
        else cout << a[i]+((x-water)/(i+1));
        cout << '\n';
    }
}