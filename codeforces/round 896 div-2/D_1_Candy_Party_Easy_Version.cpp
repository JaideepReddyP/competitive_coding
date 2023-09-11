#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string ans = "No";
        int flag = 0;
        vector<int> a(n);
        int avg = 0;
        long long sum = 0;
        for(int i = 0; i< n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        // cout << sum;
        if(sum%(long long)n){
            cout << ans << endl;
            continue;
        }else {
            avg = (int)(sum/(long long)n);
        }

        vector<int> in(31,0), out(31,0);

        for(int i = 0; i < n; i++) {
            int diff = abs(avg-a[i]);
            if(diff == 0) continue;

            int give = 1, receive;
            while((1<<give) <= diff) give++;

            receive = give - 1;
            while(receive >= 0) {
                if((1<<give)-(1<<receive) == diff) {
                    break;
                }
                receive--;
            }
            // cout << "gr: " << diff << ' ' << give << ' ' << receive << ' ' << (1<<give)-(1<<receive) << endl;
            if((1<<give)-(1<<receive) == diff) {
                if(avg > a[i]) {
                    in[give]++;
                    out[receive]++;
                } else {
                    in[receive]++;
                    out[give]++;
                }
            } else {
                flag = 1;
                break;
            }
        }

        if(flag) {
            cout << ans << endl;
            continue;
        }
        for(int i = 0; i < 31; i++) {
            // cout << "in: " << i << ' ' << in[i] << ' ' << out[i] << endl;
            if(in[i] != out[i]) break;
            if(i == 30) ans = "Yes";
        }

        cout << ans << endl;
    }
}