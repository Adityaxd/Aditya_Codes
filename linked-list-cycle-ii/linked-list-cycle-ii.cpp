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
    ListNode *_detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode *slow = head, *fast = head;
        
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;            
            if(fast == slow) {
                fast = head;
                while(fast != slow) {
                slow = slow->next;
                fast = fast->next;
                }
                return fast;
            }
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        return _detectCycle(head);
    }
};