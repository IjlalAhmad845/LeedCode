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
    int len=0;
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr=head;
        
        while(ptr!=NULL)
        {
            len++;
            ptr=ptr->next;
        }
        
        if(len==n)
        {
            head=head->next;
            return head;
        }
        
        ptr=head;
        for(int i=0;i<len-n-1;i++)
        {
            ptr=ptr->next;
        }
        
        ptr->next=ptr->next->next;
        
        return head;
    }
};