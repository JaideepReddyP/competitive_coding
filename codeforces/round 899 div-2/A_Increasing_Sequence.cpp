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
        for(int i = 0; i < n; i++) cin >> a[i];

        int k = 1;
        for(int i = 0; i < n; i++) {
            if(k == a[i]) k++;
            k++;
        }
        cout << k-1 << '\n';
    }
}