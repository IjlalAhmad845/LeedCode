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
    stack<ListNode*> st1,st2;
    ListNode *middle;
public:
    void reorderList(ListNode* head) {
        if(head->next==NULL)
            return;
        
        secondHalf(head);
        firstHalf(head);
        
        head->next=st2.top();
        st2.pop();
        
        ListNode *ptr=head->next;
        
        while(!st1.empty() && !st2.empty())
        {
            ptr->next=st1.top();
            st1.pop();
            
            ptr=ptr->next;
            
            ptr->next=st2.top();
            st2.pop();
            
            ptr=ptr->next;
        }
        
        while(!st1.empty())
        {
            ptr->next=st1.top();
            st1.pop();
            ptr=ptr->next;
        }
        
        while(!st2.empty())
        {
            ptr->next=st2.top();
            st2.pop();
            ptr=ptr->next;
        }
        
        ptr->next=NULL;
    }
    
    void secondHalf(ListNode *head)
    {
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast!=NULL)
            slow=slow->next;
        
        middle = slow;
  
        while(slow!=NULL)
        {
            st2.push(slow);
            slow=slow->next;
        }
    }
    
    ListNode *firstHalf(ListNode *head)
    {
        if(head->next!=middle)
            st1.push(firstHalf(head->next));
        
        return head;
    }
};