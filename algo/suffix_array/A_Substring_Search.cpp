#include<bits/stdc++.h>
#define int long long
using namespace std;

int n;
vector<int> p, c;
string s;

void count_sort(vector<int> &p, vector<int> &c) {
    int n = p.size();
    {
        vector<int> cnt(n);
        for(auto x : c) {
            cnt[x]++;
        }

        vector<int> p_new(n);
        vector<int> pos(n);
        pos[0] = 0;
        for(int i = 1; i < n; i++) {
            pos[i] = pos[i-1] + cnt[i-1];
        }
        for(auto x : p) {
            int i = c[x];
            p_new[pos[i]] = x;
            pos[i]++;
        }
        p = p_new;
    }
}

void solve() {
    string sub;
    cin >> sub;
    int sub_n = sub.size();

    int left = 0, right = n-1;
    int k = 4;
    while(left <= right) {
        int mid = (right+left)/2;

        int comp = sub.compare(s.substr(p[mid], min(sub_n, n-p[mid])));

        if(comp < 0) right = mid-1;
        else if(comp > 0) left = mid+1;
        else {
            cout << "Yes" << '\n';
            return;
        }
        // cout << left << ' ' << right << '\n';
    }
    cout << "No" << '\n';
}

int32_t main() {
    cin >> s;

    s += "$";
    n = s.size();
    p.resize(n);
    c.resize(n);
    {
        // k = 0
        vector<pair<char, int>> a(n);
        for(int i = 0; i < n; i++) a[i] = {s[i], i};
        sort(a.begin(), a.end());

        for(int i = 0; i < n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n; i++) {
            if(a[i-1].first == a[i].first) c[p[i]] = c[p[i-1]];
            else c[p[i]] = c[p[i-1]] + 1;
        }
    }

    int k = 0;
    while((1 << k) < n) {
        // k -> k+1
        for(int i = 0; i < n; i++) p[i] = (p[i] - (1 << k) + n) % n;
        count_sort(p, c);

        vector<int> c_new(n);
        c_new[p[0]] = 0;
        for(int i = 1; i < n; i++) {
            pair<int,int> prev = {c[p[i-1]], c[(p[i-1] + (1 << k)) % n]};
            pair<int,int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            if(now == prev) c_new[p[i]] = c_new[p[i-1]];
            else c_new[p[i]] = c_new[p[i-1]] + 1;
        }
        c = c_new;
        k++;
    }
    //
    // for(int i : p) {
    //     cout << i << ' ' << s.substr(i, n-1) << '\n';
    // }
    //

    int t;
    cin >> t;
    while(t--) solve();
}