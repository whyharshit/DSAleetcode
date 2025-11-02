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


    ListNode* me(ListNode* list1, ListNode* list2) {
        ListNode* swati=new ListNode(-200);
        ListNode* adway;
        adway=swati;
        if(list1==nullptr && list2==nullptr) return nullptr;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val > list2->val){
                swati->next = list2;
                list2=list2->next;
            }
            else{
                swati->next=list1;
                list1=list1->next;
            }
            swati=swati->next;
        }
        if(list1==nullptr){
            swati->next=list2;
         
        }
        else{
            swati->next=list1;

        }
        return adway->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
        if(lists.size()==1) return lists[0];
        while(lists.size()!=1){
            ListNode* x =lists[0];
            ListNode* y=lists[1];
            ListNode* p=me(x,y);
            lists.erase(lists.begin());
            lists.erase(lists.begin());
            lists.push_back(p);
        }
        return lists[0];
    }
};