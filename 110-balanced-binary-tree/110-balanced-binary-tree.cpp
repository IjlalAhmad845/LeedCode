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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        
        return check(root);
    }
   
    bool check(TreeNode* root)
    {
        if(root==NULL)
            return true;
        
        int x=height(root->left);
        int y=height(root->right);
        
        if(abs(x-y)>1)return false;
        
        return check(root->left) && check(root->right);
    }
    
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        
        int x=height(root->left);
        int y=height(root->right);
        
        
        if(x>y)
            return x+1;
        else return y+1;
    }
};