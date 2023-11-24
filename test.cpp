#include<bits/stdc++.h>
using namespace std;


int sum(string s) {
    int ans = 0;
    for(auto i : s) {
        ans += (i - '0');
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    auto minimum = min_element(a.begin(), a.end());

    auto p = minimum;
    while(p != a.end()) {
        if(*p > *next(p)) {
            cout << -1 << '\n';
            break;
        }
    }
    cout << distance(a.begin(), minimum);
} 