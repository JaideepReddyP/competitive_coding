#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        if(n < 4) {
            cout << -1 << '\n';
            continue;
        }
        int start;
        if(n%4==0) {
            start = 4;
        }else if(n%4==1) {
            cout << "4 5 1 2 3 ";
            start = 9;
        }else if(n%4==2) {
            cout << "4 5 6 1 2 3 ";
            start = 10;
        }else if(n%4==3) {
            cout << "6 7 1 2 3 4 5 ";
            start = 11;
        }
        for(int i = start; i <= n; i+=4) cout << i-1 << ' ' << i << ' ' << i-3 << ' ' << i-2 << ' ';
        cout << '\n';
    }
	return 0;
}
