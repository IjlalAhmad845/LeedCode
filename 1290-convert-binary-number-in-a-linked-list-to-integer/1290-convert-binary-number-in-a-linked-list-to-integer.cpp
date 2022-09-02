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
    int getDecimalValue(ListNode* head) {
        string str="";
        int l=0;
        
        while(head!=NULL)
        {
            str+=to_string(head->val);
            head=head->next;
        }
        
        long num=0;
        
        for(int i=0;i<str.size();i++)
        {
            num+=pow(2,str.size()-1-i)*(str[i]-'0');
        }
        
        return num;
    }
};