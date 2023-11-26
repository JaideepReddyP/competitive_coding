#include<bits/stdc++.h>
#define int long long
using namespace std;

struct segtree {
    int size;
    vector<int> mins;

    void init(int n) {
        size = 1;
        while(size < n) size *= 2;
        mins.assign(2*size, INT_MAX);
    }

    int mini(int x, int lx, int rx, int l, int r) {
        // cout << x << ' ' << lx << ' ' << rx << '\n';
        if(rx <= l || r <= lx) return INT_MAX;
        if (l <= lx && rx <= r) return mins[x];

        int m = (lx+rx)/2;
        int s1 = mini(2*x + 1, lx, m, l, r);
        int s2 = mini(2*x + 2, m, rx, l, r);
        return min(s1, s2);
    }

    int mini(int l, int r) {
        return mini(0, 0, size, l, r);
    }

    void build(vector<int> &a, int x, int lx, int rx) {
        if(rx - lx == 1) {
            if(lx < (int) a.size()) {
                mins[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]);
    }

    void build(vector<int> &a) {
        build(a, 0, 0, size);
    }
};

int tp(segtree &st, int l, int r) {
    int left = tp(st, l, );

}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    segtree st;
    st.init(n);

    st.build(a);

    // for(int i : st.mins) cout << i << ' ';
    // cout << '\n';
    // cout << st.mini(0, 1);

    tp(st, 0, n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}


