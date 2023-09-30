#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n,vector<int>(2));
        for(int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];

        int ans = a[0][0];
        for(int i = 1; i < n; i++) {
            if(a[i][0] >= a[0][0]) {
                if(a[i][1] >= a[0][1]) {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
}