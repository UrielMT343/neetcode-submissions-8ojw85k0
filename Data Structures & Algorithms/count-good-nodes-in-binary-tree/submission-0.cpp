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
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }

    int dfs(TreeNode* root, int maxVal) {
        if (!root) return 0;

        int counter;

        if (root->val >= maxVal) {
            counter = 1;
        } else {
            counter = 0;
        }
        maxVal = max(maxVal, root->val);
        counter += dfs(root->left, maxVal);
        counter += dfs(root->right, maxVal);
        return counter;
    }
};
