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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0)return NULL;
        
        priority_queue<int> pq;
        ListNode* result=NULL;
        
        for(auto list:lists)
        {
            ListNode *ptr=list;
            while(ptr!=NULL)
            {
                pq.push(ptr->val);
                ptr=ptr->next;
            }
        }
        
        
        while(!pq.empty())
        {
            ListNode *p=new ListNode(pq.top());
            p->next=result;
            result=p;
            pq.pop();
        }
        
        return result;
    }
};