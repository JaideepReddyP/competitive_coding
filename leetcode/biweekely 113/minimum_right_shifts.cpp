class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int mini_i = 0;
        for(int i = 0; i<n; i++) {
            if(mini > nums[i]) {
                mini = nums[i];
                mini_i = i;
            }
        }
        int j = 0;
        vector<int> a(n);
        for(int i = mini_i; i < n; i++) a[j++] = nums[i];
        for(int i = 0; i < mini_i; i++) a[j++] = nums[i];
            
        vector<int> b(n);
        b = a;
        sort(b.begin(), b.end());
        int ans = n - mini_i;
        for(int i = 0; i< n; i++) if(a[i] != b[i]) ans = -1;
        if(ans == n) return 0;
        else return ans;
    }
};