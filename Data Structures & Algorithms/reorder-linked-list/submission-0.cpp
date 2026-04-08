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
    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* nxt = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
        
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid = slow->next;
        ListNode* list2 = reverseList(mid);
        ListNode* p2 = list2;
        slow -> next = nullptr;

        ListNode* p1 = head;
        while(p2){
            ListNode* newN = new ListNode();
            newN->val = p2->val;
            newN->next = p1->next;
            p1->next = newN;
            p1 = newN->next;
            p2 = p2->next;
        }

    }
};
