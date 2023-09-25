#include<bits/stdc++.h>
using namespace std;

int max_length(vector<int> a, int s, int e, int k) {
    int l = s, r = s;
    int ans = 1;
    int sum = 0;
    while(r <= e) {
        sum += a[r];
        if(sum >= k) {
            ans = max(ans, r-l+1);
            l++;
            sum -= a[l];
        }
        r++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> h[i];

        int s = 0, e = 0, ans = -1;
        while(e < n-1) {
            if(h[e+1]%h[e] == 0) {
                e++;
            } else {
                ans = max(ans, max_length(a, s, e, k));
                s = e+1;
                e = s;
            }
        }
        cout << ans << '\n';
    }
}