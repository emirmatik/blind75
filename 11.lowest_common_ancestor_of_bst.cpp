/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T 
that has both p and q as descendants (where we allow a node to be a descendant of itself).”
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* findAnc(TreeNode* node, int p, int q, TreeNode* anc = NULL) {
    if (node == NULL) return NULL;
    
    if (anc != NULL) return anc;
    
    if (node->val == p || node->val == q) return node;
    
    TreeNode* l = findAnc(node->left, p, q);
    TreeNode* r = findAnc(node->right, p, q);
    
    if (anc != NULL) return anc;
    
    if (l != NULL && r != NULL && ((l->val == p && r->val == q) || (r->val == p && l->val == q))) {
        anc = node;
        return node;
    }
    
    if (l != NULL) return l;
    
    return r;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    return findAnc(root, p->val, q->val);
}