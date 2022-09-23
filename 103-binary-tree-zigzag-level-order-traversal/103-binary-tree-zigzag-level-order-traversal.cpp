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
        //emprt trees will be discarded
        if(root==NULL)
            return {};
        
        //queue for level order traversal
        queue<TreeNode *> q;
        vector<vector<int>> v;
        
        //for tracking the direction change
        int direction=0;
        
        q.push(root);
        
        v.push_back({root->val});
        
        //until traversal queue is empty
        while(!q.empty())
        {
            //changing direction
            direction=1-direction;
            
            //new queue for storing next level
            queue<TreeNode *> q1;
            
            vector<int> v1;
            
            //emptying the prev queue to fill the new queue
            while(!q.empty())
            {
                TreeNode *ptr = q.front();
                q.pop();

                //filling new queue based on direction along with new vector for every new level
                if(direction==0)
                {
                    //when direction is left to right
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
                    //when direction is right to left
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

            //empty queues will not be filled into the final vector
            if(!v1.empty())
                v.push_back(v1);
            
            
            //reversing the new queue for next iteration for direction change
            
            //stack for reversing the new queue
            stack<TreeNode *> st;
            
            //emptyig it
            while(!q1.empty())
            {
                st.push(q1.front());
                q1.pop();
            }
            
            //filling in reverse order using stack
            while(!st.empty())
            {
                q1.push(st.top());
                st.pop();
            }
            
            //updating prev queue to new reversed queue
            q=q1;
        }
        
        return v;
    }
};