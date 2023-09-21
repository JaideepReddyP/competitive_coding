#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;

        int diff=INT_MAX;
        for(int i = 0; i <= n-m; i++) {
            int temp_diff = 0;
            for(int j = 0; j < m; j++) {
                int d = abs(int(s[i+j]-'0')-int(k[j]-'0'));
                temp_diff += min(d, 10-d);
            }
            diff = min(diff, temp_diff);
        }
        cout << diff << '\n';
    }
}