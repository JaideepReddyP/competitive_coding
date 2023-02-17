#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &a, int l, int u){
    int p = a[u], m = l;

    for(int i = l; i < u; i++){
        if(a[i] < p){
            swap(a[i], a[m]);
            m++;
        }
    }
    swap(a[m], a[u]);
    return m;
}


void quick_sort(vector<int> &a, int lower, int upper){
    if(lower<upper){
        int m = partition(a, lower, upper);

        quick_sort(a, lower, m-1);
        quick_sort(a, m+1, upper);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    quick_sort(a, 0, n-1);

    for(int i = 0; i < n; i++) cout << a[i] << ' ';
}