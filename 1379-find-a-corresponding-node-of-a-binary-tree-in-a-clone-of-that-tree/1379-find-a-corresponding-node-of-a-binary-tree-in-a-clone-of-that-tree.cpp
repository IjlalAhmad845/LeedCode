/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* result;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        helper(cloned,target);
        
        return result;
    }
    
    void helper(TreeNode *cloned,TreeNode *target)
    {
        if(cloned==NULL)
            return;
        
        if(target->val==cloned->val)
        {
            result=cloned;
            return;
        }
        
        helper(cloned->left,target);
        helper(cloned->right,target);
    }
};