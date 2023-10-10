#include<bits/stdc++.h>
#define int double
using namespace std;

int dist(pair<int, int> a, pair<int, int> b) {
    int d1 = a.first-b.first, d2 = a.second-b.second;
    d1 *= d1;
    d2 *= d2;
    return sqrt(d1+d2);
}

void solve() {
    pair<int,int> p, a, b, o;
    cin >> p.first >> p.second >> a.first 
        >> a.second >> b.first >> b.second;
    o = make_pair(0, 0);
    int oa = dist(o,a), ob = dist(o,b), pa = dist(p,a),
        pb = dist(p,b), ab = dist(a,b);

    int min_o = min(oa, ob), min_p = min(pa, pb),
        diff_lamps = ((min_o==oa && min_p==pb) || (min_o==ob && min_p==pa));

    if(diff_lamps && min_o+min_p < ab && ab/2 > max(min_o, min_p)) cout << ab/2;
    else cout << max(min_o, min_p);
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    cout << fixed << setprecision(10);
    while(t--) solve();
}