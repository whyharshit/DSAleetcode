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
    // Helper to merge two sorted lists
    ListNode* mergeLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode* tail = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1) tail->next = list1;
        else tail->next = list2;

        return dummy.next;
    }

    // Main function: merge sort
    ListNode* sortList(ListNode* head) {
        // Base case: 0 or 1 node
        if (!head || !head->next)
            return head;

        // Split list into two halves using slow-fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Break into two halves
        prev->next = nullptr;

        // Sort each half recursively
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        // Merge the two sorted halves
        return mergeLists(left, right);
    }
};
