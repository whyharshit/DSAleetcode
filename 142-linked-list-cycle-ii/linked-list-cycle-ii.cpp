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
    ListNode *detectCycle(ListNode *head) {
        

  
        ListNode *slow =head;
        ListNode *fast =head;
        bool flag = false;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) {flag = true;
            break;
        }}
        ListNode* temp=head;
        if (flag==true){
        while(slow!=temp){
            slow=slow->next;
            temp=temp->next;
         }
         return temp;
        }
        return nullptr;
    }
     

        
    
};