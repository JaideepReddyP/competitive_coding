#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    vector<vector<int>> a(9, vector<int>(9));

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    // rows 
    for(int i = 0; i < 9; i++) {
        vector<int> counter(9, 0);
        for(int j = 0; j < 9; j++) {
            if(counter[a[i][j]]) {
                cout << "No";
                return;
            } else {
                counter[a[i][j]] = 1;
            }
        }
    }
    // columns
    for(int i = 0; i < 9; i++) {
        vector<int> counter(9, 0);
        for(int j = 0; j < 9; j++) {
            if(counter[a[j][i]]) {
                cout << "No";
                return;
            } else {
                counter[a[j][i]] = 1;
            }
        }
    }
    // blocks
    for(int i = 0; i < 9; i += 3) {
        for(int j = 0; j < 9; j += 3) {
            vector<int> counter(9, 0);
            for(int k = 0; k < 3; k++) {
                for(int l = 0; l < 3; l++) {
                    if(counter[a[i+k][j+l]]) {
                        cout << "No";
                        return;
                    } else {
                        counter[a[i+k][j+l]]++;
                    }
                }
            }
        }
    }
    cout << "Yes";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}