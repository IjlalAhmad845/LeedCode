/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    string encode="";
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        encode="";
    
        preorder(root);
        return encode;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        TreeNode *root=NULL;
        
        int start, end = -1;
        do {
            start = end + 1;
            end = data.find(",", start);
            string s = data.substr(start, end - start);
            if(s.size()!=0)
                root = insert(root,stoi(s));
            
        } while (end != -1);
        
            
        return root;
    }
    
    void preorder(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        encode+=to_string(root->val)+",";
        
        preorder(root->left);
        preorder(root->right);
    }
    
    TreeNode *insert(TreeNode *root,int val)
    {
        if(root==NULL)
        {
            TreeNode *ptr=new TreeNode(val,NULL,NULL);
            return ptr;
        }
        
        if(root->val>=val)
            root->left = insert(root->left,val);
        
        else if(root->val<val)
            root->right = insert(root->right,val);
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;