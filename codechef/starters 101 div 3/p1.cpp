#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        double l, v1, v2;
        cin >> l >> v1 >> v2;

        int t1 = ceil(l/v1), t2 = ceil(l/v2);
        cout << t1-t2-1 << '\n';
    }
}