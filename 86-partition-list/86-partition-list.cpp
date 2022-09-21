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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;
        
        ListNode *ptr=head;
        
        while(ptr)
        {
            if(ptr->val<x)
                v.push_back(ptr->val);
            
            ptr=ptr->next;
        }
        
        ptr=head;
        
        while(ptr)
        {
            if(ptr->val>=x)
                v.push_back(ptr->val);
            
            ptr=ptr->next;
        }
        
        ptr=NULL;
        reverse(v.begin(),v.end());
        
        for(auto i:v)
        {
            ListNode *p=new ListNode(i,ptr);
            ptr=p;
        }
        
        return ptr;
    }
};