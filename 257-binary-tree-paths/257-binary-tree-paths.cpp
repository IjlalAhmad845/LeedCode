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
    vector<string> result;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root,"");
        
        for(int i=0;i<result.size();i++)
        {
            result[i]=result[i].substr(2);
        }
        
        return result;
    }
    
    void helper(TreeNode *root,string str)
    {
        if(root->left==NULL && root->right==NULL)
        {
            result.push_back(str+"->"+to_string(root->val));
            return;
        }
        
        if(root->left!=NULL)
            helper(root->left,str+"->"+to_string(root->val));
        if(root->right!=NULL)
            helper(root->right,str+"->"+to_string(root->val));
    }
};