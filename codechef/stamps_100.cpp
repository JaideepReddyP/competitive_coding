#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;

        int p = 0;
        while((s[p] == '0') && (p < n)) p++;
	    
	    if(p < n-2) {
	        int i = 0;
	        while(i++ < p) cout << 0;
	        cout << 1;
	        while(i++ < n) cout << 0;
	    } else {
	        cout << s;
	    }
	    cout << endl;
	}
	return 0;
}