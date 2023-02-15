#include<iostream>
#include<vector>
using namespace std;

vector<int> c(46, -1);

int climbStairs(int n) {
    if(n == 1 || n == 2) return n;
    if(c[n] == -1) c[n] = climbStairs(n-1) + climbStairs(n-2);
    return c[n];
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n);
}