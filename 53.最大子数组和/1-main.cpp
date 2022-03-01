class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, ans = nums[0];
        for(int i=0;i<size(nums);i++) {
            pre = max(pre + nums[i], nums[i]);
            ans = max(ans, pre);
        }
        return ans;
    }
};
