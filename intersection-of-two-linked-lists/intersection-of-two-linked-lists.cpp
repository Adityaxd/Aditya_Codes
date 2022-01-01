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
    ListNode *_getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr_1 = headA, *ptr_2 = headB;
        
        while(ptr_1 != ptr_2) {
            ptr_1 = ptr_1 == NULL ? ptr_1 = headB : ptr_1->next;
            ptr_2 = ptr_2 == NULL ? ptr_2 = headA : ptr_2->next;
        }
        return ptr_1;
    }    
    
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        return _getIntersectionNode(headA, headB);
    }
};