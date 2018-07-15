/**
 * Practice Problem: https://leetcode.com/problems/sum-of-left-leaves/description/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sumOfLeftLeaves(struct TreeNode* root) {
    int sum = 0;
    sumOfLeftLeavesHelp(root, &sum);
    return sum;
}

void sumOfLeftLeavesHelp(struct TreeNode* root, int* sum) {
    if (root) {
        if (root->left && root->left->left == NULL && root->left->right == NULL) {
            *sum += root->left->val;
        }
    sumOfLeftLeavesHelp(root->left, sum);
    sumOfLeftLeavesHelp(root->right, sum);
    }
}

