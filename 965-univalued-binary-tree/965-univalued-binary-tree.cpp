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
    bool result=true;
public:
    bool isUnivalTree(TreeNode* root) {
        int val=root->val;
        traverse(root,val);
        
        return result;
    }
    
    void traverse(TreeNode *root,int val)
    {
       if(root==NULL)
           return;
        
        if(root->val!=val)
            result=false;
        traverse(root->left,val);
        traverse(root->right,val);
        
        return;
            
    }
};