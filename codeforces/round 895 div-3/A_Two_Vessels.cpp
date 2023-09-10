#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int diff = max(a,b)-min(a,b);

        cout << (diff/(2*c)) + !(diff%(2*c) == 0) << endl;
    }
}