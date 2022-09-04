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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=length(headA);
        int len2=length(headB);
    
        
        if(len1>len2)
            for(int i=0;i<len1-len2;i++)
                headA=headA->next;
        else if(len2>len1)
            for(int i=0;i<len2-len1;i++)
                headB=headB->next;
        
        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        
        return NULL;
    }
    
    int length(ListNode* ptr)
    {
        int size=0;
        while(ptr!=NULL)
        {
            size++;
            ptr=ptr->next;
        }
        
        return size;
    }
};