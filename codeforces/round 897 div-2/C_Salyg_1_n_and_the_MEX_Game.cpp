#include<bits/stdc++.h>
using namespace std;

int mex(vector<int> s) {
    for(int i = 0; i < s.size(); i++) {
        
        if(s[i] != i) return i;
    }
    return s.size();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i = 0; i < n; i++) cin >> s[i];

        cout << mex(s) << '\n';
        while(true) {
            int y;
            cin >> y;
            if(y == -1) break;
            cout << y << endl;
        }
    }
}