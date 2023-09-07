#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x, h, ans;
	while(t--) {
	    cin >> x >> h;
	    ans = 0;
	    while(h > 0 && ans < 5) {
	        h -= x/2;
	        ans++;
	    }
        cout << x << ' ' << h << endl;
	    if(h > 0)
    	    if(h%x == 0) ans += h/x;
    	    else if(h%x != 0) ans += (h/x)+1;
	    cout << ans << endl;
	}
	return 0;
}
