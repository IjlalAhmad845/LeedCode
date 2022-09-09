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
    bool isSymmetric(TreeNode* root) {
        TreeNode *clone = helper(root);
        
        return check(root,clone);
    }
    
    TreeNode* helper(TreeNode *root)
    {
        if(root==NULL)
            return NULL;
        
        //creating clone node
        TreeNode *ptr=new TreeNode(root->val);
        
        //swapping left and right sub trees
        ptr->left=helper(root->right);
        ptr->right=helper(root->left);
        
        return ptr;
    }
    
    bool check(TreeNode *root,TreeNode *clone)
    {
        //both reaches null
        if(root==NULL && clone==NULL)
            return true;
        
        //both must be same in reaching null
        if(root==NULL && clone!=NULL)
            return false;
        if(root!=NULL && clone==NULL)
            return false;
        
        //checking for every node
        if(root->val!=clone->val)
            return false;
        
        return check(root->left,clone->left) && check(root->right,clone->right);
    }
};