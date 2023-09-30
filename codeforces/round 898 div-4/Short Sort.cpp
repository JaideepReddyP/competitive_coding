#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string k = "abc";
        int diff = 0;
        for(int i = 0; i < 3; i++) if(s[i] != k[i]) diff++;
        if(diff>2) cout << "NO";
        else cout << "YES";
        cout << '\n';
    }
}