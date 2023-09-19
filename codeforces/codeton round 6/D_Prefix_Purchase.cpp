// figure out

#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void purchase(vector<int> c, int i, int k) {
    int n = c.size();
    int m = INT_MAX, mi = 0;
    for(int j = i; j < n; j++) {
        if(c[j]<=m) {
            m = c[j];
            mi = j;
        }
    }
    if(k%m==0) {
        for(int l = 0; l <= mi; l++) a[l] += k/m;
        return;
    } else {
        set<int> s;
        for(int l = 0; l < k/m; l++) {
            for(int l = 0; l <= mi; l++) a[l] += (k/m)-i;
            purchase(// what to call?)
            s.insert(// purchase() + k/m-i ?)
        }
        return 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        a.clear();
        a.assign(n, 0);
        vector<int> c(n);
        for(int i = 0; i < n; i++) cin >> c[i];
        int k;
        cin >> k;

        purchase(c, 0, k);

        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << '\n';
    }
}