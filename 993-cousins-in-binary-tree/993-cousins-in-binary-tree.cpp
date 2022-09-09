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
    TreeNode *px,*py;
    int flagx=0,flagy=0;
    int dx,dy;
public:
    bool isCousins(TreeNode* root, int x, int y) {
        traverse(root,0,x,y);
   
        return dx==dy && px!=py;
    }
    
    void traverse(TreeNode *root,int d,int x,int y)
    {
        if(root==NULL)
            return;
        
        if(root->val==x)
        {
            dx=d;
            flagx=1;
            return;
        }
        
        if(root->val==y)
        {
            dy=d;
            flagy=1;
            return;
        }
        
        if(flagx==0)
            px=root;
        
        if(flagy==0)
            py=root;
        
        traverse(root->left,d+1,x,y);
        traverse(root->right,d+1,x,y);
    }
};