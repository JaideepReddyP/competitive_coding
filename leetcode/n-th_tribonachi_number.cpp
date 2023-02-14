#include<iostream>
#include<vector>
using namespace std;

vector<int> trib(38, -1);

int tribonacci(int n) {
    if(n == 0) return 0;
    else if(n == 1 || n == 2) return 1;
    else if(trib[n] != -1) return trib[n];
    else {
        trib[n] = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
        return trib[n];
    }
}

int main() {
    int n;
    cin >> n;

    cout << tribonacci(n);
}