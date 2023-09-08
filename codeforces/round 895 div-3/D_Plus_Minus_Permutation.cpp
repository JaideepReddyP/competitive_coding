#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int a = max(x, y), b = min(x, y);
    while(b>0) {
        a = a%b;
        swap(a,b);
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long common = n*gcd(x, y)/(x*y);
        // cout << common << endl;
        long long X = (n/x)-common, Y = (n/y)-common;
        // cout << X << ' ' << Y << endl;

        long long p_sum = X*n - (((X-1)*X)/2);
        long long n_sum = (Y*(Y+1))/2;
        cout << p_sum - n_sum << endl;
    }
}