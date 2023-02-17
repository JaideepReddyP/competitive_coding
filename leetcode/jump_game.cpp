#include<iostream>
#include<vector>
using namespace std;

vector<int> jump;

bool jumping(vector<int>& nums, int n) {
    if(n == 0) return true;
    else if(jump[n] != -1) return jump[n];
    for(int i = 0; i < n; i++) {
        if(nums[i] >= n-i && jumping(nums, i)){
            jump[i] = 1;
            return true;
        }
    }
    jump[n] = 0;
    return false;
}

bool canJump(vector<int>& nums) {
    int n = nums.size();
    jump.clear();
    jump.resize(n, -1);
    return jumping(nums, n-1);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << canJump(nums);
}


