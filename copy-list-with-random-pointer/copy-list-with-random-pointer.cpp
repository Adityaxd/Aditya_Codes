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
    Node* _copyRandomList(Node* head) {
        Node* iter = head;
        Node* front = head;
        
        //Step 1 : We make copy of each node and link them with the original given list. 
        while(iter != NULL) {
            front = iter->next;
            Node *copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        //Step 2 : We assign the random pointer links to our deep copy nodes.
        iter = head;
        while(iter != NULL) {
            if(iter->random != NULL) iter->next->random = iter->random->next; //iter->random->next is to make link to the deep copy node.
        iter = iter->next->next; 
        }
        //Step 3 : We now restore the original linked list and segregate the deep copy list.
        iter = head;
        Node *copyHead = new Node(0);
        Node *copy = copyHead;
        
        while(iter != NULL) {
            front = iter->next->next;
            //extracting the copy nodes.
            copy->next = iter->next;
            //restoring original list.
            iter->next = front;
            
            copy = copy->next;
            iter = front;
        }
        return copyHead->next;
    }
    
public:
    Node* copyRandomList(Node* head) {
        return _copyRandomList(head);
    }
};