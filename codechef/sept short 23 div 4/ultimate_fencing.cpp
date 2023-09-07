#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, m;
	    cin >> n >> m;
	    vector<int> s(n);
	    for(int i = 0; i < n; i++) cin >> s[i];
	    
	    set<int> poles = {0, m};
	    multiset<int> lengths = {m};
	    
	    for(int p: s) {
            auto it = poles.lower_bound(p);
	        int l = *prev(it);
	        int u = *it;
	        lengths.erase(lengths.find(u-l));
	        lengths.insert(p-l);
	        lengths.insert(u-p);
            poles.insert(p);
	        cout << *lengths.rbegin() << ' ';
	    }
	    cout << endl;
	}
	return 0;
}
