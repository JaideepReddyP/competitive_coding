#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> score = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};
int ans;
string s;
int t;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--) {
        ans = 0;
        for(int i = 0; i < 10; i++) {
            cin >> s;
            for(int j = 0; j < 10; j++) {
                if(s[j]=='X') {
                    ans += score[i][j];
                }
            }
        }
        cout << ans << '\n';
    }
}