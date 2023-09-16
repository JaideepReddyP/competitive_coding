#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        char throw_away;
        cin >> throw_away;
        vector<int> a;
        map<int,int> k;
        int cnt = 0;
        string curr_num = "";
        char prev = '[';
        while(true) {
                char in;
                cin >> in;
                if(in == ']' && prev == ']') break;
                if(isdigit(in)){
                    curr_num.push_back(in);
                } else if(in != '[' && curr_num != "") {
                    a.push_back(stoi(curr_num));
                    cnt++;
                    curr_num = "";
                }
                prev = in;
        }
        
        for(int i = 0; i < cnt; i++) {
            k[a[i]]++;
        }
        int check;
        cin >> check;
        if(k[check] == cnt/2) cout << "true";
        else cout << "false";
        cout << '\n';
    }
	return 0;
}
