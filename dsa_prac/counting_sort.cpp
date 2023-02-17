#include<bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> &A, int k){
    int n = A.size();
    vector<int> B(n), C(k+1, 0);

    for(int i = 0; i < n; i++) C[A[i]]++;
    for(int i = 1; i <= k; i++) C[i] += C[i-1];

    for(int i = n-1; i >= 0; i--){
        B[--C[A[i]]] = A[i];
    }
    A = B;
}


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    counting_sort(arr, k);

    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
}