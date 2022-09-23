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
    vector<double> averageOfLevels(TreeNode* root) {

        queue<TreeNode *> q;
        vector<vector<long>> v;
        
        q.push(root);
        
        v.push_back({root->val});
        while(!q.empty())
        {
            queue<TreeNode *> q1;
            
            vector<long> v1;
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
        
        vector<double> result;
        
        for(int i=0;i<v.size();i++)
        {
            long sum=0;
            
            for(int j=0;j<v[i].size();j++)
            {
                sum+=v[i][j];
            }
            result.push_back((double)sum/v[i].size());
        }
        return result;
    }
};