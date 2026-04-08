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
        vector<int> vec;
        for(int i=0; i<lists.size(); i++){
            ListNode* p = lists[i];
            while(p){
                vec.push_back(p->val);
                p=p->next;
            }
        }
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        sort(vec.begin(), vec.end());
        ListNode* dummy = new ListNode();
        ListNode* ans = dummy;
        
        for(int i=0; i<vec.size(); i++){
            ListNode* newN = new ListNode();
            newN->val = vec[i];
            newN->next = nullptr;
            ans->next = newN;
            ans = newN;
        }
        

        return dummy->next;
    }
};
