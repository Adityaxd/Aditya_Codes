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
    ListNode* _rotateRight(ListNode* head, int k) {
       
        if(head == NULL || head->next == NULL) return head;
        int length = 1;
        ListNode* dummy_ptr = head;
        while(dummy_ptr->next) {
            dummy_ptr = dummy_ptr->next;
            length++;
        }
        
        dummy_ptr->next = head;
        k = k % length;
        k = length - k;
        
        while(k--) dummy_ptr = dummy_ptr->next;
        
        head = dummy_ptr->next;
        dummy_ptr->next = NULL;
        
        return head;
    }
    
public:
    ListNode* rotateRight(ListNode* head, int k) {
        return _rotateRight(head,k);
    }
};