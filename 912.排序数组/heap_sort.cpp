class Solution {
    void maxHeapify(vector<int>& nums, int i, int len) {
        for(;(i<<1)+1 <= len;) {
            int lson = (i << 1) + 1;
            int rson = (i << 1) + 2;
            int large;
            if(lson <= len && nums[lson] > nums[i]) {
                large = lson;
            } else {
                large = i;
            }
            if(rson <= len && nums[rson] > nums[large]) {
                large = rson;
            }
            if(large != i) {
                swap(nums[i], nums[large]);
                i = large;
            } else {
                break;
            }
        }
    }

    void buildMaxHeap(vector<int>& nums, int len) {
        for(int i=len/2;i>=0;i--){
            maxHeapify(nums, i, len);
        }
    }

    void heapSort(vector<int>& nums) {
        int len = (int)nums.size() - 1;
        buildMaxHeap(nums, len);
        for (int i=len; i>= 1; i--) {
            swap(nums[i], nums[0]);
            len -= 1;
            maxHeapify(nums, 0, len);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums);
        return nums;
    }
};
