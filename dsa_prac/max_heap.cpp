#include<bits/stdc++.h>
using namespace std;


void max_heapify(vector<int> &A, int i, int heap_size){
    int l = i << 1, r = (i << 1) + 1;
    int largest = i;
    if(l <= heap_size && A[i] < A[l]) largest = l;
    if(r <= heap_size && A[largest] < A[r]) largest = r;

    if(largest != i){
        swap(A[i], A[largest]);
        max_heapify(A, largest, heap_size);
    }
}

void build_max_heap(vector<int> &A, int heap_size){
    for(int i = (heap_size/2); i > 0; i--) max_heapify(A, i, heap_size);
}

void heap_sort(vector<int> &A){
    int heap_size = A.size()-1;
    build_max_heap(A, heap_size);
    for(int i = heap_size; i >= 2; i--){
        swap(A[i], A[1]);
        heap_size--;
        max_heapify(A, 1, heap_size);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    heap_sort(arr);

    for(int i = 1; i <= n; i++) cout << arr[i] << ' ';
}