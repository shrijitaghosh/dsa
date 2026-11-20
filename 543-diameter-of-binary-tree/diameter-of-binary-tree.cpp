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
int dia;
int levels(TreeNode* root){
    if(root==NULL) return 0;
    int leftlevels=levels(root->left);
    int rightlevels=levels(root->right);
    dia=max(dia,leftlevels+rightlevels);
    return 1+max(leftlevels,rightlevels);
}
    int diameterOfBinaryTree(TreeNode* root) {
        dia=0;
        levels(root);
        return dia;
    }
};