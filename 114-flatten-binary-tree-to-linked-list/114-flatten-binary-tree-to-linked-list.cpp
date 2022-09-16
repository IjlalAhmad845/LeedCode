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
    TreeNode *ptr=NULL;
public:
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        
        helper(root);
        
        root->right=ptr->right;
        root->left=NULL;
    }
    
    void helper(TreeNode *root)
    {
        if(root==NULL)
            return;

        
        helper(root->right);
        helper(root->left);
        
        
        TreeNode *p=new TreeNode(root->val,NULL,NULL);
        p->right=ptr;
        
        ptr=p;
        
        // cout<<ptr->val<<" ";
    }
};