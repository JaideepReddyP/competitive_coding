#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            s.insert(k);
        }
        while(true) {
            int y;
            cin >> y;
            int k = y+1;
            while(s.find(k) != s.end()) {
                k++;
            }
            s.insert(k);
            printf("%d\n", k);
            fflush(stdout);
            if(y == -1) break;
            s.erase(y);
        }
    }
}