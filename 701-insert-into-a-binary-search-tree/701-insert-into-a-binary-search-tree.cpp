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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return helper(root,val);
    }
    
    TreeNode *helper(TreeNode *root,int val)
    {
        if(root==NULL)
        {
            TreeNode *ptr=new TreeNode(val,NULL,NULL);
            return ptr;
        }
        
        if(val<root->val)
            root->left = helper(root->left,val);
        
        if(val>root->val)
            root->right = helper(root->right,val);
        
        return root;
    }
};