#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N = 1000 * 1000 * 10;
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b;
    int memo[N+1];
    b.assign(n, -1);
    for(int i = 0; i < n; i++) cin >> a[i];

    int max_num = 0;
    memo[a[n-1]] = -1;
    for(int i = n-2; i >= 0; i--){
        if(a[i] >= max_num){
            max_num = a[i];
            if(i != n-2) continue;
        }
        int current = a[i+1];
        while(true){
            if(current == -1) break;
            if(current > a[i]){
                b[i] = a[i+1];
                memo[a[i]] = a[i+1];
                break;
            }else{
                current = memo[current];
            }
        }
    }
    for(int i = 0; i < n; i++) cout << b[i] << ' ';

    return 0;
}