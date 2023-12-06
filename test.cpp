#include<bits/stdc++.h>
using namespace std;


int sum(string s) {
    int ans = 0;
    for(auto i : s) {
        ans += (i - '0');
    }
    return ans;
}

int ceiling(int a, int b) {
    return ((a-1)/b) + 1;
}

int main()
{
    int k = 31-__builtin_clz(32);
    string s = "hello";
    cout << s.erase(2, 2);
} 