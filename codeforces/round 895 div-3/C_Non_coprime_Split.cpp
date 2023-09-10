#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        int flag = 0;
        for(int i = max(4, l); i <=r; i++){
            for(int j = 2; j*j <= i; j++) {
                if(i%j == 0) {
                    cout << j << ' ' << i-j << endl;
                    i = r;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) continue;
        cout << -1 << endl;
    }
}