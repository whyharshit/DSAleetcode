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
       int len = 0;
       ListNode *temp1=head;
       if(head==nullptr) return head;
       while (temp1->next!=nullptr) {
        len++;
        temp1=temp1->next;
    }   
        len++;
        if(len==1) return head; 
        ListNode *temp =head;
        if(k>=len) k=k%len;
       for (int i = 0; i < len - k - 1; i++) {
    temp = temp->next;
}

        temp1->next=head;
        head=temp->next;
        temp->next=nullptr;
        return head;
        

    }
};