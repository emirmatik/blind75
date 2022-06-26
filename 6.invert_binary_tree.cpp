// Given the root of a binary tree, invert the tree, and return its root.

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

void invert(TreeNode* node) {
    if (node == NULL) return;
    
    TreeNode* temp = node->left;
    node->left = node->right;
    node->right = temp;
    
    invert(node->left);
    invert(node->right);
}

TreeNode* invertTree(TreeNode* root) {
    invert(root);
    
    return root;
}