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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root=helper(nums);
        return root;
    }
    
    TreeNode *helper(vector<int> nums)
    {
        if(nums.size()==0)
            return NULL;
        
        int middle=nums.size()/2;
        TreeNode *ptr=new TreeNode(nums[middle]);
        
        vector<int> left,right;
        
        for(int i=0;i<middle;i++)
            left.push_back(nums[i]);
        
        for(int i=middle+1;i<nums.size();i++)
            right.push_back(nums[i]);
     
        ptr->left=helper(left);
        ptr->right=helper(right);
        
        return ptr;
    }
};