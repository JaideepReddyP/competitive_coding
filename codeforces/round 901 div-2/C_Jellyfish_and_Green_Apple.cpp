#include<bits/stdc++.h>
using namespace std;

void cuts(long long n, long long m, long long cnt) {
    long long temp_value = n/m, temp_count = (1<<cnt);
    temp_value %= temp_count;
    double value = (double)temp_value, ans = 0, count = (double)temp_count;
    // cout << value << ' ' << count << endl;
    double div = 0.5, c = 2;
    while(value>0) {
        // cout << value/count << ' ';
        if((value/count) >= div) {
            value -= (count*div);
            ans += (count*div)*(double)(c-1);
        }
        c = c*2;
        div /= 2;
    }

    cout << m*ans << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;

        long long cnt = 0;
        while(true) {
            if(n%m) {
                if(m%2) {
                    cout << -1 << '\n';
                    break;
                } else {
                    cnt++;
                    m /= 2;
                }
            } else {
                cuts(n, m, cnt);
                break;
            }
        }
    }
}