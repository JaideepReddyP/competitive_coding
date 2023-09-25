#include<bits/stdc++.h>
using namespace std;

int t;
int n, m;
int or_b;
int xor_a_original;
int xor_a_after;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        or_b = b[0];
        for(int i = 1; i < m; i++) or_b = or_b|b[i];
        xor_a_original = a[0];
        for(int i = 1; i < n; i++) xor_a_original = xor_a_original^a[i];
        for(int i = 0; i < n; i++) a[i] = a[i]|or_b;
        xor_a_after = a[0];

        for(int i = 1; i < n; i++) xor_a_after = xor_a_after^a[i];
        if(n%2) cout << xor_a_original << ' ' << xor_a_after; 
        else cout << xor_a_after << ' ' << xor_a_original;
        cout << '\n';
    }
}