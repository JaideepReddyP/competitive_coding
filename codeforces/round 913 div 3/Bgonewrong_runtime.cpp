#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        // cout << ans << '\n';
        if(s[i] == 'b') {
            for(int i = ans.size()-1; i >= 0; i--) {
                if(islower(ans[i])) {
                    ans.erase(i, 1);
                    break;
                }
            }
        } else if(s[i] == 'B') {
            for(int i = ans.size()-1; i >= 0; i--) {
                if(isupper(ans[i])) {
                    ans.erase(i, 1);
                    break;
                }
            }
        } else {
            ans += s[i];
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
}

// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     string ans = "";
//     int lower = -1, upper = -1;
//     for(int i = 0; i < s.size(); i++) {
//         if( s[i] == 'b' ) {
//             if(lower < 0) continue;
//             ans.erase(lower--, 1);
//             while( (lower >= 0) && !islower(ans[lower]) ) {
//                 lower--;
//             }
//         } else if( s[i] == 'B' ) {
//             if(upper < 0) continue;
//             ans.erase(upper--, 1);
//             while( (upper >= 0) && !isupper(ans[upper]) ) {
//                 upper--;
//             }
//         } else {
//             ans += s[i];
//             if(islower(s[i])) lower = ans.size()-1;
//             else upper = ans.size()-1;
//         }
//     }
//     cout << ans << '\n';
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while(t--) solve();
// }