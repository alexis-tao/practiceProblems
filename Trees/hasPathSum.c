/**
 * Practice Problem: https://leetcode.com/problems/path-sum/description/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSumHelp(struct TreeNode* root, int sum) {
    if ( root ){
        if (sum-root->val == 0 && !root->left && !root->right) {
            return true; 
        }
         return hasPathSumHelp(root->left, sum-root->val) || hasPathSumHelp(root->right, sum-root->val);
    }
    return false;
}

bool hasPathSum(struct TreeNode* root, int sum) {

    if ( root ){
        if (sum-root->val == 0 && !root->left && !root->right) {
            return true; 
        }
         return hasPathSumHelp(root->left, sum-root->val) || hasPathSumHelp(root->right, sum-root->val);
    }
    return false;
}