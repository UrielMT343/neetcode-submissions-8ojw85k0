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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;

        int left = heigth(root->left);
        int right = heigth(root->right);

        if (abs(left - right) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

    int heigth(TreeNode* root) {
        if (root) {
            return 1 + max(heigth(root->left), heigth(root->right));
        }
        return 0;
    }
};
