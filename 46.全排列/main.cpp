class Solution {
public:
    void backtrace(vector<vector<int>>& res, vector<int>& output, int first, int len) {
        if(first == len) {
            res.emplace_back(output);
            return ;
        }
        for (int i=first;i<len;i++) {
            swap(output[i], output[first]);
            backtrace(res, output, first+1, len);
            swap(output[first], output[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrace(res, nums, 0, (int)nums.size());
        return res;
    }
};
