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
    int ans=INT_MAX;
    int flag=0;
public:
    int findSecondMinimumValue(TreeNode* root) {
        
        helper(root,root->val);
        if(ans==INT_MAX && flag==0)
            return -1;
        return ans;
    }
    
    void helper(TreeNode *root,int val)
    {
        if(root->left==NULL && root->right==NULL)
            return;
        
        if(root->left!=NULL && root->right!=NULL)
        {
            if(root->left->val!=val)
            {
                ans=min(root->left->val,ans);
                flag=1;
            }
            
            if(root->right->val!=val)
            { 
                ans=min(root->right->val,ans);
                flag=1;
            }
        }
        
        if(root->left->val==val)
            helper(root->left,val);
        if(root->right->val==val)
            helper(root->right,val);
        
        return;
    }

};