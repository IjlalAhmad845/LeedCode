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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        
        queue<TreeNode *> q;
        vector<vector<int>> v;
        
        int direction=0;
        
        q.push(root);
        
        v.push_back({root->val});
        while(!q.empty())
        {
            direction=1-direction;
            queue<TreeNode *> q1;
            
            vector<int> v1;
            while(!q.empty())
            {
                TreeNode *ptr = q.front();
                q.pop();

                if(direction==0)
                {
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
                else 
                {
                   
                    if(ptr->right!=NULL)
                    {
                        q1.push(ptr->right);
                        v1.push_back(ptr->right->val);
                    }
                    
                    if(ptr->left!=NULL)
                    {    
                        q1.push(ptr->left);
                        v1.push_back(ptr->left->val);
                    }
                }
                
              
            }

            if(!v1.empty())
                v.push_back(v1);
            
            stack<TreeNode *> st;
            
            while(!q1.empty())
            {
                st.push(q1.front());
                q1.pop();
            }
            
            while(!st.empty())
            {
                q1.push(st.top());
                st.pop();
            }
            
            q=q1;
        }
        return v;
    }
};