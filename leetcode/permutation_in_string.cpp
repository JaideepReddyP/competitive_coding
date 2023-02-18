#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool compaire(vector<int> s1_counts, vector<int> s2_counts) {
    for(int i = 0; i < 26; i++) {
        if(s1_counts[i] != s2_counts[i]) return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();
    if(n1 > n2) return false;

    vector<int> s1_counts(26, 0), s2_counts(26, 0);
    for(int i = 0; i < n1; i++) s1_counts[s1[i]-97]++;
    for(int i = 0; i < n1; i++) s2_counts[s2[i]-97]++;

    for(int i = 0; i <= n2-n1; i++) {
        if(compaire(s1_counts, s2_counts)) {
            return true;
        }
        else if(i == n2-n1) break;
        s2_counts[s2[i]-97]--;
        s2_counts[s2[i+n1]-97]++;
    }
    return false;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << checkInclusion(s1, s2);
}