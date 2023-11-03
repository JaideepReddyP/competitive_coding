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
    // vector<string> s = {"hi", "ho", "ab", "ba"};
    // sort(s.begin(), s.end());
    // for(auto i : s) cout << i << ' ';
    string s = "1234";
    cout << abs(sum(s.substr(0,1)) - sum(s.substr(1,3)));
} 