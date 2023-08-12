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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        
        ListNode *ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        
        for(int i=0;i<v.size()/k*k;i+=k)
        {
            reverse(v.begin()+i,v.begin()+i+k);
        }
        
        reverse(v.begin(),v.end());
        
        ListNode *result=NULL;
        for(auto i:v)
        {
            ListNode *p=new ListNode(i);
            p->next=result;
            result=p;
        }
        
        return result;
    }
};