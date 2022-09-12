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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        else if(head->next==NULL)
            return head;
        
        ListNode *p=head->next;
        
        head->next=head->next->next;
        p->next=head;
        
        //new head
        ListNode *ptr=p;
        
        p=head->next;
        
        while(p!=NULL && p->next!=NULL)
        {
            head->next=head->next->next;
            head=head->next;
            p->next=p->next->next;
            head->next=p;
            
            head=head->next;
            p=head->next;
        }
        
        return ptr;
    }
};