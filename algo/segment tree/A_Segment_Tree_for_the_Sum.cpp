#include<bits/stdc++.h>
#define int long long
using namespace std;

struct segtree {
    int size;
    vector<int> sums;

    void init(int n) {
        size = 1;
        while(size < n) size *= 2;
        sums.assign(2*size, 0ll);
    }

    void set(int i, int v, int x, int lx, int rx) {
        if(rx - lx == 1) {
            sums[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if(i < m) {
            set(i, v, 2*x+1, lx, m);
        } else {
            set(i, v, 2*x+2, m, rx);
        }
        sums[x] = sums[2*x + 1] + sums[2*x + 2];
    }

    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }

    int sum(int x, int lx, int rx, int l, int r) {
        if(rx <= l || r <= lx) return 0;
        if (l <= lx && rx <= r) return sums[x];

        int m = (lx+rx)/2;
        int s1 = sum(2*x + 1, lx, m, l, r);
        int s2 = sum(2*x + 2, m, rx, l, r);
        return s1 + s2;
    }

    int sum(int l, int r) {
        return sum(0, 0, size, l, r);
    }

    void build(vector<int> &a, int x, int lx, int rx) {
        if(rx - lx == 1) {
            if(lx < (int) a.size()) {
                sums[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void build(vector<int> &a) {
        build(a, 0, 0, size);
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;

    segtree st;
    st.init(n);

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    st.build(a);

    while(m--) {
        int op;
        cin >> op;
        if(op == 1) {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.sum(l, r) << '\n';
        }
    }
}