#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> k;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(!k[a[i]]){
                cout << a[i] << ' ';
                k[a[i]] = 1;
            }
            
        }
        cout << '\n';
    }
	return 0;
}
