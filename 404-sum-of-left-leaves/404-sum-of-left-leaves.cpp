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
    int sum=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root,false);
        
        return sum;
    }
    
    void helper(TreeNode *root,bool isLeft)
    {
     
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(isLeft)
                sum+=root->val;
        }
        
        helper(root->left,true);
        helper(root->right,false);
    }
};