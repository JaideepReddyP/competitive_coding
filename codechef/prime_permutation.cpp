#include <bits/stdc++.h>
using namespace std;

int k = 1000*100;
vector<int> prime(k+1, 1);


int main() {
    prime[0] = 0;
    prime[1] = 0;
	for (int p = 2; p * p <= k; p++) {
        if (prime[p] == 1) {
            for (int i = p * p; i <= k; i += p)
                prime[i] = 0;
        }
    }
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        int flag = 1;
        for(int i = 2; i < n; i++) {
            if(prime[i]) {
                if(prime[n-i]) {
                    flag = 0;
                    int l = n-i+1;
                    for(int j = 0; j < n+1; j++) {
                        if(l%(n+1) == 0) {
                            l++;
                            continue;
                        }
                        cout << l%(n+1) << ' ';
                        l++;
                    }
                    break;
                }
            }
        }
        if(flag) cout << -1;
        cout << endl;
    }
	return 0;
}
