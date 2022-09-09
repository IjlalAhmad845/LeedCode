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
    bool evaluateTree(TreeNode* root) {
        return helper(root);
    }
    
    bool helper(TreeNode *root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        
        if(root->left!=NULL && root->right!=NULL)
        {
            if(root->val==2)
                return helper(root->left) || helper(root->right);
            else 
                return helper(root->left) && helper(root->right);
        }
        
        return true;
    }
};