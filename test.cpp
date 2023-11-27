#include<bits/stdc++.h>
using namespace std;


int sum(string s) {
    int ans = 0;
    for(auto i : s) {
        ans += (i - '0');
    }
    return ans;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // cout << a << b << c;

    int diff = abs(b-c);
    // cout << diff;
    if(diff%2 == 0) {
        int one = ((diff/2) <= a);
        cout << one << ' ';
    }
} 