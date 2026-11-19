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
bool ans;
int level(TreeNode* root)
{
	if(root==NULL) return 0;
    int leftlevels=level(root->left);
      int rightlevels=level(root->right);
    if (abs(leftlevels-rightlevels) >1) ans= false;
	return 1+ max(leftlevels,rightlevels);
}
    bool isBalanced(TreeNode* root) {
      ans=true;
 level(root);
 return ans;
    }
};