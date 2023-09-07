#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n) {
    int a = max(m, n);
    int b = min(m, n);
    while(b > 0) {
        a = a%b;
        swap(a, b);
    }
    return a;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n), b(n);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n; i++) cin >> b[i];
	    
	    vector<int> pref(n), suf(n+1);
	    pref[0] = a[0];
	    for(int i = 1; i < n; i++) pref[i] = gcd(pref[i-1], a[i]);
	    suf[n-1] = a[n-1];
	    for(int i = n-2; i >=0; i--) suf[i] = gcd(suf[i+1], a[i]);

	    int ans = max(pref[n-1], gcd(suf[1], b[0]));
	    for(int i = 1; i < n-1; i++) {
	        int curr = gcd(gcd(pref[i-1], b[i]), suf[i+1]);
	        ans = max(ans, curr);
	    }
	    ans = max(ans, gcd(b[n-1], pref[n-2]));
	    cout << ans << endl;
	}
	return 0;
}
