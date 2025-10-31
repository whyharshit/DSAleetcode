/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //harshit
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* temp;
        ListNode* temp1;
        temp = headA;
        temp1 = headB;
        while(temp != nullptr){
            lenA++;
            temp = temp->next;
        }
         while(temp1 != nullptr){
            lenB++;
            temp1 = temp1->next;
        }
        temp = headA;
        temp1 = headB;
        if(lenA>=lenB){
            int x = lenA-lenB;
            while(x!=0){
                temp = temp->next;
                x--;
            }

        }
        else{
           int x = lenB -lenA;
            while(x!=0){
                temp1 = temp1->next;
                x--;

            }
        }
        while(temp!=temp1){
            temp=temp->next;
            temp1=temp1->next;
        }

        return temp;
    }
};