#include<bits/stdc++.h>
using namespace std;


void radix_sort(vector<int> &A){}




int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    radix_sort(a);

    for(int i = 0; i < n; i++) cout << a[i] << ' ';
}