#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a;
    for(int i = 0; i < n; i++){
        string cd, dir;
        cin >> cd >> dir;
        if(dir == ".." && a.size() !=0){
            a.pop_back();
        }
        else a.push_back(dir);
    }
    if(a.size() == 0) cout << '/';
    else{
        for(int i = 0; i < a.size(); i++){
            cout << '/' << a[i];
        }
    }

}