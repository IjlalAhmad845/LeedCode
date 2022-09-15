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
    vector<vector<int>> v;
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return {};
        
        vector<int> nums;
        
        helper(nums,0,root,targetSum);
        
        return v;
    }
    
    void helper(vector<int> &nums,int sum,TreeNode *root,int targetSum)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(sum+root->val==targetSum)
            {
                vector<int> temp=nums;
                temp.push_back(root->val);
                v.push_back(temp);
            }
            
            return;
        }
        
        vector<int> temp=nums;
        temp.push_back(root->val);
        
        if(root->left!=NULL)
            helper(temp,sum+root->val,root->left,targetSum);
        
        if(root->right!=NULL)
            helper(temp,sum+root->val,root->right,targetSum);
        
        return;
    }
};