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
    bool _hasCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL) return false;
        
        ListNode *slow = head, *fast = head;
        
        while (fast->next != NULL and fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        return false;
    }    
    
public:
    bool hasCycle(ListNode *head) {
        return _hasCycle(head);
    }
};