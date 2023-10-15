#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int curr = groups[0];
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i = 0; i < n; i++) {
            if(groups[i] != curr) {
                curr = !curr;
                ans.push_back(words[i]);
            }
        }
        return ans;
    }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> words(n);
    vector<int> groups(n);
    for(int i = 0; i < n; i++) cin >> words[i];
    for(int i = 0; i < n; i++) cin >> groups[i];

    vector<string> ans = getWordsInLongestSubsequence(n, words, groups);
    for(string s: ans) cout << s << ' ';
}