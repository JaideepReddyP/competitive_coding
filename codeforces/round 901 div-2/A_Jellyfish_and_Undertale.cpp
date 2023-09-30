#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> s(n);
        long long sum = b-1;
        for(long long i = 0; i < n; i++) {
            cin >> s[i];
            if(s[i] >= a) sum += a-1;
            else sum += s[i];
        }
        cout << sum+1 << '\n';
    }
}