#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> max_array;

int maxSum(vector<int>& nums, int start) {
    if(start > n-1) return 0;
    else if(max_array[start] != -1) return max_array[start];
    else {
        max_array[start] = max(nums[start] + maxSum(nums, start+2), maxSum(nums, start+1));
        return max_array[start];
    }
}

int rob(vector<int>& nums) {
    n = nums.size();
    max_array.resize(n, -1);
    return maxSum(nums, 0);
}

int main() {
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << rob(nums);
}

