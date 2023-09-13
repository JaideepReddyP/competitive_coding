#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // cout << (1<<1)-(1<<0);
    priority_queue<pair<int, int>> a;
    a.push(make_pair(10,1));
    a.push(make_pair(12,2));
    a.push(make_pair(9, 3));
    cout << a.top().first << a.top().second;
    a.pop();
    cout << a.top().first << a.top().second;

}