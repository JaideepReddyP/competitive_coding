#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if(n%2) {
            cout << a[n/2] << '\n';
        }else {
            cout << (float)(a[(n/2)-1] + a[n/2])/2 << '\n';
        }
    }
	return 0;
}
