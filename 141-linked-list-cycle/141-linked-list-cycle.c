/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *temp = head;
    if(head == NULL){
        return NULL;
    }
    struct ListNode *slow = temp;
    struct ListNode *fast = temp -> next;
    
    while(slow!=fast){
        if(fast == NULL || fast -> next == NULL){
            return false;
        }
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return true;
}