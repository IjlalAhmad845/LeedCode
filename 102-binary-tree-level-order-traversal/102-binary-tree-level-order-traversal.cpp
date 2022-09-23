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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        
        queue<TreeNode *> q;
        vector<vector<int>> v;
        
        q.push(root);
        vector<int> v1;
        
        v.push_back({root->val});
        while(!q.empty())
        {
            queue<TreeNode *> q1;
            
            vector<int> v1;
            while(!q.empty())
            {

                TreeNode *ptr = q.front();
                q.pop();

                if(ptr->left!=NULL)
                {    
                    q1.push(ptr->left);
                    v1.push_back(ptr->left->val);
                }

                if(ptr->right!=NULL)
                {
                    q1.push(ptr->right);
                    v1.push_back(ptr->right->val);
                }
                
              
            }

            if(!v1.empty())
                v.push_back(v1);
            
            q=q1;
        }
        return v;
    }
};