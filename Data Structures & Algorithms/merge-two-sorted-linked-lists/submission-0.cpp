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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 =  list1;
        ListNode* p2 =  list2;
        ListNode* ans =  new ListNode();
        ans -> next = nullptr;
        ListNode* p3 =  ans;

        while(p1 && p2){
            ListNode* newN = new ListNode();
            newN -> next = nullptr;
            if(p1->val < p2-> val){
                newN->val = p1->val;
                p3 -> next = newN;
                p3 = newN;
                p1 = p1->next;
            }
            else{
                newN->val = p2->val;
                p3 -> next = newN;
                p3 = newN;
                p2 = p2->next;
            }
        }
            if(!p1){
                while(p2){
                ListNode* newN = new ListNode();
                newN -> next = nullptr;
                newN->val = p2->val;
                p3 -> next = newN;
                p3 = newN;
                p2 = p2->next;
                }
            }
            if(!p2){
                while(p1){
                ListNode* newN = new ListNode();
                newN -> next = nullptr;
                newN->val = p1->val;
                p3 -> next = newN;
                p3 = newN;
                p1 = p1->next;
                }

            }
        return ans->next;
    }
};
