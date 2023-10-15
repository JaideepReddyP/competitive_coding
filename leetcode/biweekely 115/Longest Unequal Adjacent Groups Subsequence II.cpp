#include<bits/stdc++.h>
#define int long long
using namespace std;

int max_cnt(int start, vector<string>& words, vector<int>& groups, int word_len) {
    return max(max_cnt(start+1, words, groups, word), );
}

vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        
        for(int i = 0; i <= 10; i++) {
            vector<string> s;
            vector<int> b;
            int m = 0;
            for(int j = 0; j < n; j++) {
                if(words[j].size() == i) {
                    s.push_back(words[j]);
                    b.push_back(groups[j]);
                    m++;
                }
            }

            int curr = b[0];
            vector<string> ans;
            ans.push_back(s[0]);
            for(int i = 0; i < n; i++) {
            if(b[i] != curr) {
                curr = !curr;
                ans.push_back(s[i]);
            }
        }
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