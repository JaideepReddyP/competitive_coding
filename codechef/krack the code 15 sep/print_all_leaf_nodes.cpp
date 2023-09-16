#include <bits/stdc++.h>
using namespace std;

void func(vector<int> a, int l, int r) {
    if(r-l == 0) {
        cout << a[l] << ' ';
    } else if(r-l == 1) {
        cout << min(a[l], a[r]) << ' ';
    } else {
        int mid = ((l+r)/2);
        func(a, l, mid-1);
        func(a, mid+1, r);
    }
}

int main() {
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        func(a, 0, n-1);
        cout << '\n';
    }
	return 0;
}