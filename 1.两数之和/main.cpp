class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int x = 0; x < n; x++){
            for(int y = x + 1; y < n; y++) {
                if(nums[x] + nums[y] == target)
                    return {x, y};
            }
        }
        return {};
    }
};
