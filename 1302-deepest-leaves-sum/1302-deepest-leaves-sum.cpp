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
    int deepestLeavesSum(TreeNode* root) {
        
        //queue for level order traversal
        queue<TreeNode *> q;
        vector<vector<int>> v;
        
        q.push(root);
        
        v.push_back({root->val});
        while(!q.empty())
        {
            //new queue for next level
            queue<TreeNode *> q1;
            
            vector<int> v1;
            //emptying the prev queue to fill new queue
            while(!q.empty())
            {

                TreeNode *ptr = q.front();
                q.pop();

                //filling new queue along with new vector of every level
                
                //first left
                if(ptr->left!=NULL)
                {    
                    q1.push(ptr->left);
                    v1.push_back(ptr->left->val);
                }

                //then right
                if(ptr->right!=NULL)
                {
                    q1.push(ptr->right);
                    v1.push_back(ptr->right->val);
                }
                
              
            }

            //empty queues will not be inserted into final vector
            if(!v1.empty())
                v.push_back(v1);
            
            //updating prev queue to new queue
            q=q1;
        }
        
        return accumulate(v[v.size()-1].begin(),v[v.size()-1].end(),0);
    }
};