#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        // set<int> a_i, b_i;
        // int i = 0;
        // while(a > 0 && b > 0) {
        //     if(a%2) a.insert(i);
        //     if(b%2) b.insert(i);
        //     a>>1;
        //     b>>1;
        //     i++;
        // }

        // set<int> ans;
        // auto it = a.rbegin();
        // it++;
        // while(it!=a.rend()) {
        //     if(b.find(*it)) {
                
        //     }
        // }
        int k = max(a, b);
        int l = a&b;
        // cout << l << ' ';
        k = k^l;
        if(k==0) {
            cout << l << '\n';
            continue;
        }

        int p = 1;
        while(p<=k) p=p<<1;
        p>>1;

        cout << max(a,b)-p+l << '\n';
        
    }
}