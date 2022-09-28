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
    int count=0;
public:
    int goodNodes(TreeNode* root) {
        helper(root,root->val);
        
        return count;
    }
    
    void helper(TreeNode *root,int val)
    {
        if(root==NULL)
            return;
        
        if(val<=root->val)
        {
            count++;
            helper(root->left,root->val);
            helper(root->right,root->val);
            
            return;
        }
        
        helper(root->left,val);
        helper(root->right,val);
    }
};