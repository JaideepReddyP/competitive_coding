#include<bits/stdc++.h>
using namespace std;

long long dist(pair<long long,long long> a, pair<long long,long long> b) {
    return (max(a.first, b.first) - min(a.first, b.first)) + (max(a.second, b.second) - min(a.second, b.second));
}

long long closest(vector<pair<long long, long long>> cities, pair<long long,long long> a, long long k) {
    long long ans = LONG_LONG_MAX/2;
    for(long long i = 0; i <= k; i++) {
        ans = min(ans, dist(cities[i], a));
    }
    return ans;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k, a, b;
        cin >> n >> k >> a >> b;
        k--;
        a--;
        b--;
        vector<pair<long long, long long>> cities(n);
        for(long long i = 0; i < n; i++) {
            pair<long long, long long> p;
            cin >> p.first >> p.second;
            cities[i] = p;
        }

        long long to_hub_a = closest(cities, cities[a], k);
        long long to_hub_b = closest(cities, cities[b], k);

        if(a <= k && b <= k) {
            cout << 0 << endl;
        } else if(a <= k && b > k) {
            cout << min(dist(cities[a], cities[b]), to_hub_b) << endl;
        } else if(a > k && b <= k) {
            cout << min(dist(cities[a], cities[b]), to_hub_a) << endl;
        } else {
            cout << min(dist(cities[a], cities[b]), to_hub_a+to_hub_b) << endl;
        }
    }
}