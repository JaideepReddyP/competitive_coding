#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        if(s.size() == 1) {
            cout << s << '\n';
            continue;
        }

        char curr = s[0];
        int cnt = 1;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == curr) {
                cnt++;
            } else {
                if(cnt == 1) cout << curr;
                else cout << curr << cnt;
                curr = s[i];
                cnt = 1;
            }
        }
        if(cnt == 1) cout << curr;
        else cout << curr << cnt;
        cout << '\n';
    }
	return 0;
}
