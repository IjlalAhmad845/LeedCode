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
    vector<int> result;
public:
    vector<int> postorder(Node* root) {
        if(root==NULL)
            return {};
        
        helper(root);
        return result;
    }
    
    void helper(Node *root)
    {
        if(root->children.size()==0)
        {
            result.push_back(root->val);
            return;
        }
        
        for(int i=0;i<root->children.size();i++)
        {
            helper(root->children[i]);
        }
        
        result.push_back(root->val);
        return;
    }
};