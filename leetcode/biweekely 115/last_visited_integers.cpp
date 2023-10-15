#include<bits/stdc++.h>
// #define int long long
using namespace std;

vector<int> lastVisitedIntegers(vector<string> words) {
    vector<int> a;
    vector<int> ans;
    int n = words.size();
    int cnt = -1;
    for(int i = 0; i < n; i++) {
        if(words[i] == "prev") {
            cnt++;
            if(cnt >= a.size()) {
                ans.push_back(-1);
            } else {
                ans.push_back(*(a.rbegin()+cnt));
            }
        } else {
            cnt = -1;
            a.push_back(stoi(words[i]));
        }
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> ans = lastVisitedIntegers(a);
    for(int i: ans) cout << i << ' ';
}


