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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        
        bool isLeafNode=root->left==NULL && root->right==NULL;
        
        return helper(root,0,targetSum,isLeafNode);
    }
    
    bool helper(TreeNode *root,int currentSum,int sum,bool isLeaf)
    {
        if(root==NULL)
            return currentSum==sum && isLeaf;
        
        bool isLeafNode=root->left==NULL && root->right==NULL;
        
        return helper(root->left,currentSum+root->val,sum,isLeafNode) ||
            helper(root->right,currentSum+root->val,sum,isLeafNode);
    }
};