#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums, int start, int end) {
    while(start < end) {
        swap(nums[start++], nums[end--]);
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

void print_vector(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        cout << nums[i] << ' ';
    }
}

int main(){
    vector<int> nums;
    int n, k;
    cin >> n >> k;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    rotate(nums, k);
    print_vector(nums);
}

