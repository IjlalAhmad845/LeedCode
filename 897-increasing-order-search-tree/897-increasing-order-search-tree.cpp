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
    vector<int> v;
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        traverse(root);
        TreeNode *head=NULL;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            TreeNode *ptr=new TreeNode(v[i],NULL,head);
            head = ptr;
        }
        
        return head;
    }
    
    void traverse(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        traverse(root->left);
        v.push_back(root->val);
        traverse(root->right);
        
        return;
    }

};