#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n;
    n = s.size();
    int pos;
    cin >> pos;

    int temp_n = n, temp_pos = pos;
    int cnt = -1;
    while(temp_pos > 0) {
        temp_pos -= temp_n--;
        cnt++;
    }
    pos = n-cnt+temp_pos-1;

    int p = 0;
    while(p<n && cnt>0) {
        // cout << p << ' ' << cnt << endl;
        if(s[p] > s[p+1]) {
            int k = p;
            while(s[k] > s[k+1] && cnt > 0) {
                cnt--;
            }
            if(cnt == 0) break;
        }
        p++;
    }
    cout << s[p];
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}