#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    long long a[n], sum = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	        sum += a[i];
	    }
	    long long ans=0;
	    for(int i = 0; i < n-1; i++) {
	        sum -= a[i];
	        ans += sum*a[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}