/*
passed 71/71
100% acceptance
8.94mb
0ms
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode* root, int* result, int* index) {
    if (root) {
        inorder(root->left, result, index);
        result[(*index)++] = root->val;
        inorder(root->right, result, index);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(1000 * sizeof(int)); // Assume max 1000 nodes
    int index = 0;
    
    inorder(root, result, &index);

    *returnSize = index;
    return result;
}
