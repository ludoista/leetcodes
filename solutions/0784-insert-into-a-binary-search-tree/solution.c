/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL; node->right = NULL;
    if ( root == NULL ) {
        return node;
    }
    struct TreeNode* move = root;
    while ( move != NULL && move->val != val ) {
        if ( val < move->val ) {
            if ( move->left == NULL ) {
                move->left = node;
            } else {
                 move = move->left;
            }
        } else {
            if ( move->right == NULL ) {
                move->right = node;
            } else {
                 move = move->right;
            }
        }
    }
    return root;
}
