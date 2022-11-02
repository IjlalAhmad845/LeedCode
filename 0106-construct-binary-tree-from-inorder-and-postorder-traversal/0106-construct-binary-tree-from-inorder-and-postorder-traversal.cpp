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
    int i;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        i=postorder.size()-1;
        return helper(postorder,inorder);
    }
    
    TreeNode *helper(vector<int>&postorder,vector<int>& inorder)
    {
        if(inorder.size()==0)
            return NULL;
        
        if(i<0)
            return NULL;
        
        int index = find(inorder.begin(),inorder.end(),postorder[i])-inorder.begin();
        int val=inorder[index];
        TreeNode *ptr=new TreeNode(val,NULL,NULL);
        
        
        vector<int> left,right;
        for(int j=0;j<index;j++)
            left.push_back(inorder[j]);
        
        for(int j=index+1;j<inorder.size();j++)
            right.push_back(inorder[j]);
        
        i--;
        ptr->right=helper(postorder,right);
        ptr->left=helper(postorder,left);
        return ptr;
    }
};