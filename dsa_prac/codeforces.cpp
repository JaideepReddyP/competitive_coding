#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, l;
    unsigned long long num, check;
    cin >> t;
    while(t--){
        cin >> n >> l;
        vector<int> x(n), cnt(l);
        for(int i = 0; i < n; i++){
            cin >> num;
            check = 1;
            for(int j = 0; j < l; j++){
                if(check & num)
                    cnt[j]++;
                check = check << 1;
                // cout << cnt[j];
            }
            // cout << "\n";
        }
        unsigned long long ans = 0;
        for(int i = 0; i < l; i++){
            if(cnt[i] > n/2){
                ans += (1 << i);
            }
        }

        cout << ans << "\n";
    }
}