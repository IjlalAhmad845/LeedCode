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
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        return helper(root);
    }
    
    int helper(Node *root)
    {
        
        if(root->children.size()==0)
            return 1;
        
        vector<int> v;
        for(int i=0;i<root->children.size();i++)
            v.push_back(helper(root->children[i]));
        
        int maxHeight=*max_element(v.begin(),v.end());
        
        return maxHeight+1;
    }
};