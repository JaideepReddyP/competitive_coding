#include<iostream>
#include<vector>
using namespace std;

vector<int> memo;

int jumping(vector<int>& nums, int n) {
    if(n == 0) return 0;
    else if(memo[n] != -1) return memo[n];
    for(int i = 0; i < n; i++) {
        if(nums[i] >= n-i){
            int jumps = jumping(nums, i);
            memo[i] = jumps;
            return jumps+1;
        }
    }
    return 0;
}

int jump(vector<int>& nums) {
    int n = nums.size();
    memo.clear();
    memo.resize(n, -1);
    return jumping(nums, n-1);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << jump(nums);
}

