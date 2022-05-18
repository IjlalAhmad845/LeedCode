/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *ptr=head;
        ListNode *ptr2=head;
        
       
        while(ptr2!=NULL && ptr2->next!=NULL)
        {
            ptr=ptr->next;
            ptr2=ptr2->next->next;
            
            if(ptr==ptr2)
                return true;
        }
        
        
        return false;
    }
};