#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) cin >> a[i];
	    
	    sort(a.begin(), a.end());
	    
        vector<int> ans(n);
        int s = 0;
        for(int p = 0; p < n; p+=2) {
            ans[p] = a[s++];
        }
        for(int p = 1; p < n; p+=2) {
            ans[p] = a[s++];
        }
        int flag = 0;
        for(int i = 0; i < n-1; i++) {
            if(ans[i] == ans[i+1]) {
                
                flag = 1;
                break;
            }
        }

        if(flag) {
            int sn = 0;
            for(int p = 1; p < n; p+=2) {
                ans[p] = a[sn++];
            }
            for(int p = 0; p < n; p+=2) {
                ans[p] = a[sn++];
            }
            int flagn = 0;
            for(int i = 0; i < n-1; i++) {
                if(ans[i] == ans[i+1]) {
                    flagn = 1;
                    break;
                }
            }   
            if(flagn) {
                cout << -1 << endl;
                continue;
            }
        }

        for(int i : ans) cout << i << ' ';
        cout << endl;
	}
	return 0;
}
