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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        
        int size=len(head);
        stack<int> st;
        
        for(int i=0;i<size/2;i++)
        {
            st.push(head->val);
            head=head->next;
        }
        
        
        if(size%2==1)
            head=head->next;
        
        while(head!=NULL)
        {
          
            if(head->val!=st.top())
                return false;
            head=head->next;
            st.pop();
        }
        return true;
    }
    
    int len(ListNode* ptr)
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