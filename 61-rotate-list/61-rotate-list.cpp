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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        else if(head->next==NULL)
            return head;

        
        ListNode *ptr=head;
        
        int n=len(head);
        
    
        k=k%n;
        if(k==0)
            return head;
        
        ListNode *p=head;
        
        for(int i=0;i<n-k-1;i++)
        {
            p=p->next;
        }
        
        head=p->next;
        ListNode *temp=p;
        
        while(p->next!=NULL)
            p=p->next;
        
        temp->next=NULL;
        
        p->next=ptr;
        
        return head;
    }
    
    int len(ListNode *head)
    {
        ListNode *ptr=head;
        
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        
        return count;
    }
};