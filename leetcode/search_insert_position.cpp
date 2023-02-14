#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1, mid;
    while(start <= end) {
        mid = (start + end) / 2;
        if(nums[mid] == target) {
            return mid;
        } else if(nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    vector<int> nums;
    int n, target;
    cin >> n >> target;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    cout << searchInsert(nums, target);
}