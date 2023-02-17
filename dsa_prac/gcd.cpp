#include<iostream>
using namespace std;

int main(){
    int n, m; // n > m
    cin >> n >> m;
    while(m>0){
        n = n%m;
        swap(n, m);
    }
    cout << n;
}

// time complexity = log(n)