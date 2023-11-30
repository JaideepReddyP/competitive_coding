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
    int k = 31-__builtin_clz(32);
    cout << k;
} 