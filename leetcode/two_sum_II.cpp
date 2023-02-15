#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& nums, int start, int end, int target) {
    int mid;
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
    return -1;
}

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    int current, index;
    vector<int> ans;
    for(int i = 0; i < n-1; i++) {
        current = target - numbers[i];
        index = binSearch(numbers, i+1, n-1, current);
        if(index != -1) {
            ans = {i+1, index+1};
            break;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    vector<int> ans = twoSum(numbers, target);
    cout << ans[0] << ' ' << ans[1];
}