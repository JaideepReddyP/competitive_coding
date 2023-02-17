#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;

    int k, to_find, front = 0, back = n-1;
    cin >> to_find;
    while(front < back){
        int mid = (front+back)/2;
        if(a[mid] == to_find){
            cout << mid;
            break;
        }else if(a[mid] > to_find){
            back = mid;
        }else{
            front = mid;
        }
    }
}