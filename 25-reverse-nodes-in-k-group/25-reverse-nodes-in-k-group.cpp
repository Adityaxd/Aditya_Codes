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
    int _findLength (ListNode* head) {
        
        int count = 0;
        while(head){
            head = head->next;
            count += 1;           
        }
        return count;
    }

public:
    ListNode* _reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode *dummyNode = new ListNode();
        dummyNode->next = head;
        
        ListNode *prev = dummyNode, *curr = dummyNode, *nex = dummyNode;
        
        int count = _findLength(head);
        
        while(count >= k) {
            curr = prev->next;
            nex = curr->next;
            for(int i = 1; i < k; i++) {
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            prev = curr;
            count -= k;
        }
        return dummyNode->next;
    }    
    
    
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        return _reverseKGroup(head,k);
    }
};