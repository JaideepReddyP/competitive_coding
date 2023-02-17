#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &a, int l, int m, int u){
    int f_size = m-l+1, s_size = u-m, f[f_size], s[s_size]; 
    for(int i = l; i <= m; i++) f[i-l] = a[i];
    for(int i = m+1; i <= u; i++) s[i-m-1] = a[i];

    int fp = 0, sp = 0, tp = l;
    while(fp < f_size && sp < s_size){
        if(f[fp] <= s[sp]) a[tp++] = f[fp++];
        else a[tp++] = s[sp++];
    }
    while(fp < f_size) a[tp++] = f[fp++];
    while(sp < s_size) a[tp++] = s[sp++];
}


void merge_sort(vector<int> &a, int lower, int upper){
    if(lower < upper){
        int mid = (lower+upper)/2;

        merge_sort(a, lower, mid);
        merge_sort(a, mid+1, upper);
        merge(a, lower, mid, upper);
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    merge_sort(a, 0, n-1);

    for(int i = 0; i < n; i++) cout << a[i] << ' ';
}