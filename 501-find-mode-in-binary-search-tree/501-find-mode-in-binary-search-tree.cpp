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
    map<int,int> m;
public:
    vector<int> findMode(TreeNode* root) {
        traverse(root);
        vector<int> result;
        
        int max1=INT_MIN;
        
        for(auto x : m)
        {
            max1 = max(max1,x.second);
        }
        
        for(auto x:m)
        {
            if(x.second==max1)
                result.push_back(x.first);
        }
        
        return result;
    }
    
    void traverse(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        int val=root->val;
        
        m[val]++;
        
        traverse(root->left);
        traverse(root->right);
    }
};