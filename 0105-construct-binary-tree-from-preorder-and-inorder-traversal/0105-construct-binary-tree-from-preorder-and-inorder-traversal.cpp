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
    int i=0;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder);
    }
    
    TreeNode *helper(vector<int>&preorder,vector<int>& inorder)
    {
        if(inorder.size()==0)
            return NULL;
        
        if(i==preorder.size())
            return NULL;
        
        int index = find(inorder.begin(),inorder.end(),preorder[i])-inorder.begin();
        int val=inorder[index];
        TreeNode *ptr=new TreeNode(val,NULL,NULL);
        
        
        vector<int> left,right;
        for(int j=0;j<index;j++)
            left.push_back(inorder[j]);
        
        for(int j=index+1;j<inorder.size();j++)
            right.push_back(inorder[j]);
        
        i++;
        ptr->left=helper(preorder,left);
        
        ptr->right=helper(preorder,right);
        return ptr;
    }
};