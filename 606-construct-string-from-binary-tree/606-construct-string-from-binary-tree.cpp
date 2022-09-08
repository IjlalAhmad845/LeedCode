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
    string str="";
public:
    string tree2str(TreeNode* root) {
        helper(root);
        
        return str;
    }
    
    void helper(TreeNode *root)
    {
        str+=to_string(root->val);
        
        if(root->right!=NULL)
        {
            str+='(';
            if(root->left!=NULL)
                helper(root->left);
            str+=')';
            
            str+='(';
            helper(root->right);
            str+=')';
        }
        
        if(root->left!=NULL && root->right==NULL)
        {
            str+='(';
            helper(root->left);
            str+=')';
        }
        
        return;
    }
};