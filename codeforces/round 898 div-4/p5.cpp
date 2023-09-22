#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i< n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int water = 0;
        int prev_water = 0;
        int h = 1;
        int i = 1;
        for(; i < n; i++) {
            if(water > x) break;
            prev_water = water;
            h = a[i];
            water += i*(h-a[i-1]);
        }
        // cout << water << ' ' << prev_water << ' ' << i << endl;
        if(water > x) {
            h -= max((x-prev_water)/(i-1), 1);
        } else {
            h += (x-water)/n;
        }
        cout << h << '\n';
    }
}