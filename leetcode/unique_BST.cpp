#include<iostream>
using namespace std;

int dp[20] = {1, 1};

int numTrees(int n) {
    if(dp[n] == 0) for(int i = 1; i <= n; i++) dp[n] += numTrees(i-1) * numTrees(n-i);
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << numTrees(n);
}
