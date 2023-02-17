#include<bits/stdc++.h>
using namespace std;

const int LOG = 17;
const int MAX_N = 100'005;
int m[MAX_N][LOG];  // m[start][no. 2^j] range is i....i+(2^j)-1

int bin_log[MAX_N];


int query(int L, int R){
    int k = 0, len = R-L+1;
    while( (1 << (k+1)) <= k) k++;
    // or
    // k = bin_log[length];

    return min(m[L][k], m[R - (1<<k) + 1][k]);
}

int main(){
    int n;
    cin >> n;

    bin_log[1] = 0;
    for(int i = 2; i <= n; i++){
        bin_log[i] = bin_log[i/2] + 1;
    }

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[i][0] = a[i];
    }

    // filling in the sparse table
    for(int i = 1; i < LOG; i++){
        for(int j = 0; j + (1<<i) - 1 < n; j++){
            m[j][i] = min(m[j][i-1], m[j + (1<<(i-1))][i-1]);
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int L, R;
        cin >> L >> R;
        cout << query(L, R) << "\n";
    }
}