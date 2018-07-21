/**
 * Practice Problem: https://leetcode.com/problems/merge-two-binary-trees/description/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTreesHelper(struct TreeNode* new, struct TreeNode* t1, struct TreeNode* t2 ) {
    if ( t1 == NULL) {
        return t2;
    } else if ( t2 == NULL ){
        return t1;
    }
    new->val = t1->val + t2->val;
    new->left = mergeTreesHelper(new->left, t1->left, t2->left);
    new->right = mergeTreesHelper(new->right, t1->right, t2->right);
    return new;
}
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    struct TreeNode* new = t1;
    if ( t1 == NULL) {
        return t2;
    } else if ( t2 == NULL ){
        return t1;
    }
    new->val = t1->val + t2->val;
    new->left = mergeTreesHelper(new->left, t1->left, t2->left);
    new->right = mergeTreesHelper(new->right, t1->right, t2->right);
    return new;
}