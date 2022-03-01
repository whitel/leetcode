class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, ans = nums[0];
        for(const auto &x: nums) {
            pre = max(pre + x, x);
            ans = max(ans, pre);
        }
        return ans;
    }
};
