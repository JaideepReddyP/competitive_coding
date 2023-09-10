#include<bits/stdc++.h>
using namespace std;

map<int, int> in, out;

int main() {
    int t;

    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int avg = 0;
        for(int i = 0; i< n;i++) {
            cin >> a[i];
            avg += a[i];
        }
        if(avg%n != 0){
            cout << "No" << endl;
            continue;
        }else {
            avg /= n;
        }

        for(int k:a) {
            int diff = max(avg, k) - min(avg,k);

            int j = 1;
            while((1<<j)<diff) j++;
            int l = j-1;
            while(l>=1) {
                if((1<<j)-(1<<l) == diff){
                    if(k > avg) {
                        out[j]++;
                        in[l]++;
                    }
                    else {
                        in[j]++;
                        out[l]++;
                    }
                    break;
                }
                l--;
            }
            
        }
        int flag = 1;
        for(auto i:in) {
            if(out[i.first] != i.second) {
                cout << "No" << endl;
                flag = 0;
                break;
            }
        }

        if(flag)cout << "Yes" << endl;
    }
}