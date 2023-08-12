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
        if(k==1)
            return head;
        
        auto p = reverse(head,k);
        head = p.first;
        
        ListNode *ptr=head;
        
        for(int i=0;i<k-1;i++)
            ptr=ptr->next;
        

        while(ptr!=NULL)
        {
            p = reverse(p.second,k);
            ptr->next= p.first;
            
            if(p.first==p.second)
                break;
            for(int i=0;i<k;i++)
                ptr=ptr->next;
        }
        return head;
    }
    
    pair<ListNode*,ListNode*> reverse(ListNode *head,int k)
    {
        int len=0;
        ListNode *ptr=head;
        
        while(ptr!=NULL)
        {
            len++;
            ptr=ptr->next;
        }
        
        if(len<k)
            return {head,head};
        
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next=head->next;
 
        while(k!=0)
        {
            k--;
            curr->next=prev;
            prev = curr;
            curr = next;
            
            if(next==NULL)
                break;
            next = next->next;
        }
        
        // ListNode *p=prev;
        // while(p!=NULL)
        // {
        //     cout<<p->val<<" ";
        //     p=p->next;
        // }
        
        return {prev,curr};
    }
};