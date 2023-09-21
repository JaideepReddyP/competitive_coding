#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, h;
        cin >> n >> h;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        
        int sum = 0;
        int i = n-1;
        int ans = 0;
        for(; i >= 0; i--) {
            sum+=a[i];
            if(sum >= h) {
                ans = a[i];
                break;
            }
        }
        cout << ans << '\n';
    }
}