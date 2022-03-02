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
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *p = root;
        vector<int> result;
        if(!p)
            return result;

        stack<TreeNode *> q;
        while(p || !q.empty()) {
            if(p != nullptr) {
                result.emplace_back(p->val);
                q.push(p);
                p = p->left;
            } else {
                p = q.top();
                q.pop();
                p = p->right;
            }
        }
        return result;
    }
};
