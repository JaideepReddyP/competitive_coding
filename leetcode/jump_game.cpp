#include<iostream>
#include<vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int dis = 0;
    for (int i = 0; i <= dis; i++) {
        dis = max(dis, i + nums[i]);
        if (dis >= nums.size()-1) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << canJump(nums);
}


