/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        //empty trees will be discarded
        if(root==NULL)
            return {};
        
        //queue for level order traversal
        queue<Node *> q;
        vector<vector<int>> v;
        
        q.push(root);
        
        v.push_back({root->val});
        while(!q.empty())
        {
            //new queue for next level
            queue<Node *> q1;
            
            vector<int> v1;
            //emptying the prev queue to fill new queue
            while(!q.empty())
            {

                Node *ptr = q.front();
                q.pop();

                //filling new queue along with new vector of every level
              
                for(int i=0;i<ptr->children.size();i++)
                {
                    q1.push(ptr->children[i]);
                    v1.push_back(ptr->children[i]->val);
                }
              
            }

            //empty queues will not be inserted into final vector
            if(!v1.empty())
                v.push_back(v1);
            
            //updating prev queue to new queue
            q=q1;
        }
        return v;
    }
};