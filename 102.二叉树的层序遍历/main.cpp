/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void traversal(TreeNode* p, int level, vector<vector<int>>& result) {
        if(p == nullptr)
            return ;
        if(level + 1 > result.size())
            result.emplace_back(vector<int>());
        result[level].emplace_back(p->val);
        traversal(p->left, level+1, result);
        traversal(p->right, level+1, result);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        traversal(root, 0, result);
        return result;
    }
};
