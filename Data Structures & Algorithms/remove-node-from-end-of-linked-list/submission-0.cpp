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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to simplify edge cases like removing the first node
        ListNode* dummy = new ListNode(0, head);
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
        
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* slow1 = slow->next;

        
        slow ->next = slow ->next->next;
        ListNode* newHead = dummy->next;
        delete slow1;
        delete dummy;

        return newHead;
    }
};
