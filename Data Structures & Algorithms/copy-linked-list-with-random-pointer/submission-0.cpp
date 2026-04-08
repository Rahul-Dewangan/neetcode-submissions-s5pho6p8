/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        Node* p2 = head;

        while(p2){
            Node* newN = new Node(p2->val);
            // newN->val = p2->val;
            newN->next = p2->next;
            p2->next = newN;
            p2 = newN->next;
        }
        p2 = head;
        Node* p1 = head->next; 
        while(p2){
            p1->random = p2->random ? p2->random->next : nullptr;
            p1 = p1->next? p1->next->next: nullptr;  
            p2 = p2->next? p2->next->next: nullptr;   
        }
        p1 = head->next;
        p2 = head;
        Node* ans = p1;
        while(p2){
            p2->next = p2->next->next;  
            p1->next = p1->next ? p1->next->next : nullptr;  
            p2 = p2->next;
            p1 = p1->next;
        }

        return ans; 
    }
};
















