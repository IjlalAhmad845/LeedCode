/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        return helper(v);
    }
    
    TreeNode *helper(vector<int> &v)
    {
        if(v.size()==0)
            return NULL;
        
        int mid = v.size()/2;
        TreeNode *ptr=new TreeNode(v[mid],NULL,NULL);
        
        vector<int> v1;
        for(int i=0;i<mid;i++)
        {
            v1.push_back(v[i]);
        }
        
        vector<int> v2;
        for(int i=mid+1;i<v.size();i++)
        {
            v2.push_back(v[i]);
        }
        
        ptr->left = helper(v1);
        ptr->right = helper(v2);
        
        return ptr;
    }
};