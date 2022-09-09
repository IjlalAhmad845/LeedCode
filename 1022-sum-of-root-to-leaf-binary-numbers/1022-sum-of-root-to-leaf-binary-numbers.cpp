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
    vector<string> v;
public:
    int sumRootToLeaf(TreeNode* root) {
        traverse(root,"");
        
        int sum=0;
        for(int i=0;i<v.size();i++)
            sum+=binToDec(v[i]);
        
        return sum;
    }
    
    void traverse(TreeNode *root,string str)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(str+to_string(root->val));
            return;
        }
        
        str+=to_string(root->val);
        

        traverse(root->left,str);
        traverse(root->right,str);
        
        return;
    }
    
    int binToDec(string str)
    {
        int num=0;
        
        for(int i=0;i<str.size();i++)
        {
            num=num+pow(2,str.size()-i-1)*(str[i]-'0');
        }
        
        return num;
    }
};