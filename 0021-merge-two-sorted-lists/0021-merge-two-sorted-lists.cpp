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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode *i=list1,*j=list2,*k=new ListNode;
        
        ListNode *result=k;
        
        while(i!=NULL && j!=NULL)
        {
            if(i->val>j->val)
            {
                k->next=j;
                k=k->next;
                j=j->next;
            }
            else 
            {
              k->next=i;
                k=k->next;
                i=i->next;  
            }
        }
        
        if(i==NULL)
        {
            k->next=j;
        }
        
        if(j==NULL)
        {
            k->next=i;
        }
        
        return result->next;
    }
};