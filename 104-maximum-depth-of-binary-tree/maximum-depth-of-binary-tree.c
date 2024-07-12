/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(!root) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    printf("left=%d right=%d\n", left, right);
    if(left>right) return left+1;
    else return right+1;
}