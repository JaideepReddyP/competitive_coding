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
        string s;
        cin >> s;

        vector<int> a(n+1, 0);
        int cnt = 0;
        for(int i = 0; i < n/2; i++) {
            if(s[i] != s[n-i-1]) cnt++;
        }
        a[cnt] = 1;
        int rem = (n/2) - cnt;
        int p = cnt;
        while(rem > 0) {
            p += 2;
            a[p] = 1;
            rem--;
        }

        if(n%2) {
            for(int i = n; i >= 0; i--) {
                if(a[i]==1) a[i+1] = 1; 
            }
        }

        for(int i:a) cout << i;
        cout << endl;
    }
}