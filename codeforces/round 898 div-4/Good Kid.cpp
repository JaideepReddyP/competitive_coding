#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int m = INT_MAX, mi;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < m) {
                m = a[i];
                mi = i;
            }
        }
        a[mi]++;
        m = 1;
        for(int i = 0; i < n; i++) {
            m *= a[i];
        }
        cout << m << '\n';
    }
}