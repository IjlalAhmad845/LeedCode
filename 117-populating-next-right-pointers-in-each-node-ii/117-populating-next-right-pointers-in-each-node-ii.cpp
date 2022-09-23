/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        //empty trees will be discarded
        if(root==NULL)
            return {};
        
        //queue for level order traversal
        queue<Node *> q;
        vector<vector<Node *>> v;
        
        q.push(root);
        
        v.push_back({root});
        while(!q.empty())
        {
            //new queue for next level
            queue<Node *> q1;
            
            vector<Node *> v1;
            //emptying the prev queue to fill new queue
            while(!q.empty())
            {

                Node *ptr = q.front();
                q.pop();

                //filling new queue along with new vector of every level
                
                //first left
                if(ptr->left!=NULL)
                {    
                    q1.push(ptr->left);
                    v1.push_back(ptr->left);
                }

                //then right
                if(ptr->right!=NULL)
                {
                    q1.push(ptr->right);
                    v1.push_back(ptr->right);
                }
                
              
            }

            //empty queues will not be inserted into final vector
            if(!v1.empty())
                v.push_back(v1);
            
            //updating prev queue to new queue
            q=q1;
        }
        
        //connecting all the sub vectors in linked list
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size()-1;j++)
            {
                v[i][j]->next=v[i][j+1];
            }
            
            //assigning last node to null in each vector
            v[i][v[i].size()-1]->next=NULL;
        }
        
        return root;
    }
};