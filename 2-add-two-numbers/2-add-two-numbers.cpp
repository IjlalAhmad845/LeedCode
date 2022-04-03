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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *result;
        ListNode *ptr=new ListNode(0,NULL);
        result = ptr;
        
         int carry=0;
        
        while(l1!=NULL && l2!=NULL)
        {
            int a=l1->val;
            int b=l2->val;
            int r = (a+b+carry)%10;
            
            ListNode *p=new ListNode(r,NULL);
            ptr->next = p;
            
             carry = (a+b+carry)/10;
            l1=l1->next;
            l2=l2->next;
            ptr=ptr->next;
        }
        
        if(l1==NULL && l2!=NULL)
        {
            while(l2!=NULL)
           {
                int a=l2->val;
                int r = (a+carry)%10;
            
                ListNode *p=new ListNode(r,NULL);
                ptr->next = p;
            
                carry = (a+carry)/10;
                
                l2=l2->next;
                ptr=ptr->next;
           }
            
        }
        
        
        if(l2==NULL && l1!=NULL)
        {
            while(l1!=NULL)
           {
                int a=l1->val;
                int r = (a+carry)%10;
            
                ListNode *p=new ListNode(r,NULL);
                ptr->next = p;
            
                carry = (a+carry)/10;
                
                l1=l1->next;
                ptr=ptr->next;
           }
            
        }
        
          if(carry!=0)
           { 
                ListNode *p=new ListNode(carry,NULL);
                ptr->next = p;
           }
        
        result=result->next;
       return result;
    }
};