#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        int loop = n;
        if(m == 1) cout << 0 << endl;
        else if(n>=m) {
            cout << m << endl;
            loop = m-1;
        }
        else if(n<m) {
            cout << n+1 << endl;
            loop = n;
        }

        int p = 0;
        int i = 0;
        for(i; i < loop; i++) {
            int k = p++;
            for(int j = 0; j < m; j++) {
                cout << k++%m << ' ';
            }
            cout << endl;
        }
        while(i < n) {
            for(int j = 0; j < m; j++) {
                cout << j << ' ';
            }
            cout << endl;
            i++;
        }
    }
}

