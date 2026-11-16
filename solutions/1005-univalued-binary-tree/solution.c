/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
    if ( root == NULL ) {
        return true;
    }
    
    if ( root->left != NULL ) {
        if ( root->left->val != root->val ) {
            return false;
        }
    }
    if ( root-> right != NULL ) {
        if ( root->right->val != root->val ) {
            return false;
        }
    }
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}
