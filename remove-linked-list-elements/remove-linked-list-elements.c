/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode * temp = head;
    struct ListNode * delnode;
    if(head == NULL){
        return head;
    }
    if(head ->val == val){
        temp = head -> next;
        head->next = NULL;
        free(head);
        return removeElements(temp,val);
    }
    // while(temp != NULL){
    //     if(temp->next-> val == val){
    //         delnode = temp -> next;
    //         temp -> next = temp ->next -> next;
    //         free(delnode);
    //     }
    //     temp = temp -> next;
    // }
    // return head;
    head -> next = removeElements(head->next,val);
    return head;
}