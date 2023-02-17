#include<bits/stdc++.h>
#include<string>
using namespace std;




int main(){
    int A;
    cin >> A;

    vector<int> m;
    while(A>0){
        m.push_back(A%26);
        A /= 26;
    }
    reverse(m.begin(), m.end());

    for(int i = 0; i < m.size(); i++) cout << m[i] << ' ';
    cout << '\n';

    string ans = "";
    int len = m.size();
    for(int i = 0; i < len; i++){
        if(m[i+1] == 0  && i != len-1){
            m[i]--;
            if(m[i] != 0) ans += 'A' + m[i] - 1;
            ans += 'Z';
            i++;
        }else ans += 'A' + m[i] - 1;
        to_in
    }
    cout << ans;
}