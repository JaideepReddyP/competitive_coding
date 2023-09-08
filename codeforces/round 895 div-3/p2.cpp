#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> room;
        for(int i = 0; i < n; i++) {
            int k, l;
            cin >> k >> l;
            if(!room[k]) room[k] = l;
            else room[k] = min(l, room[k]);
        }
        // for(auto r: room) cout << r.first << ' ' << r.second << endl;
        int ans = INT_MAX;
        auto r = room.begin();
        int curr = 0;
        while(curr < ans && r != room.end()) {
            ans = min(ans, r->first + ((r->second-1) /2));
            // cout << ans << ' ';
            r++;
        } 
        // cout << endl;
        cout << ans << endl;
    }
}