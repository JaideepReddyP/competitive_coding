#include<bits/stdc++.h>
using namespace std;

vector<int> a;
string ans = "";
int n, x, y;

int can(int i, int p, int q, int direc) {
    if(i >= n) {
        if(p == x && q == y) {
            return 1;
        } else {
            return 0;
        }
    }
    if(direc == 0) {
        if(can(i+1, p-a[i], q, 3)) {
            ans = "L" + ans;
            return 1; 
        } else if(can(i+1, p+a[i], q, 1)) {
            ans = "R" + ans;
            return 1;
        }
    } else if(direc == 1) {
        if(can(i+1, p, q+a[i], 0)) {
            ans = "L" + ans; 
            return 1;
        } else if(can(i+1, p, q-a[i], 2)) {
            ans = "R" + ans;
            return 1;
        }
    } else if(direc == 2) {
        if(can(i+1, p+a[i], q, 1)) {
            ans = "L" + ans; 
            return 1;
        } else if(can(i+1, p-a[i], q, 3)) {
            ans = "R" + ans;
            return 1;
        }
    } else {
        if(can(i+1, p, q-a[i], 2)) {
            ans = "L" + ans; 
            return 1;
        } else if(can(i+1, p, q+a[i], 0)) {
            ans = "R" + ans;
            return 1;
        }
    }
    return 0;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x >> y;
    a.assign(n, 0ll);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(can(0, 0, 0, 1)) {
        cout << "Yes\n" << ans;
    } else {
        cout << "No";
    }
}
//
//    0
//  3   1
//    2