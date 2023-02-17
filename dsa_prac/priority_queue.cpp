#include<bits/stdc++.h>
using namespace std;


int heap_maximum(vector<int> &A) return A[1];


void max_heapify(vector<pair<int,int>> &A, int i, int heap_size){
    int l = i << 1, r = (i << 1) + 1;
    int largest = i;
    if(l <= heap_size && A[i].first < A[l].first) largest = l;
    if(r <= heap_size && A[largest].first < A[r].first) largest = r;

    if(largest != i){
        swap(A[i], A[largest]);
        max_heapify(A, largest, heap_size);
    }
}


int heap_extract_max(vector<pair<int,int>> &A){
    int heap_size = A.size()-1;
    if(heap_size < 1) underflow_error("heap underflow");
    int max = A[1];
    A[1] = A[heap_size];
    heap_size--;
    max_heapify(A, 1, heap_size);
    return max;
}


void heap_increase_key(vector<int,int>> &A, )






int main(){

}